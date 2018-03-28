using System;
using System.Collections;
using UnityEngine;
using BestHTTP.SocketIO;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using TMPro;

public class NetworkPlay : MonoBehaviour
{
    private Holder holder;
    private SocketManager manager;
    private GameObject player;
    private bool isPaused = false;
    private int maxMessages = 100;
    private float pingTimer = 0f, ping = 0f;
    private List<MessageObject> messageList = new List<MessageObject>();
    private List<float> pingList = new List<float>();

    public string ticker;
    public float avgPing;
    public GameObject content;
    public List<GameObject> allPlayers = new List<GameObject>();
    public List<GameObject> allEnemies = new List<GameObject>();

    void Awake()
    {
        var obj = GameObject.FindGameObjectWithTag("Holder");

        if (obj == null)
        {
            SceneManager.LoadScene("Menu");
        }
        else
        {
            holder = obj.GetComponent<Holder>();
        }
    }

    void OnApplicationFocus(bool hasFocus)
    {
        isPaused = !hasFocus;
    }

    void OnApplicationPause(bool pauseStatus)
    {
        isPaused = pauseStatus;
        if (isPaused)
        {
            manager.Close();
            SceneManager.LoadScene("Menu");
        }
    }

    void OnApplicationQuit()
    {
        Debug.Log("Application ending after " + Time.time + " seconds");
    }

    void Start()
    {
        var options = new SocketOptions
        {
            ConnectWith = BestHTTP.SocketIO.Transports.TransportTypes.WebSocket,
            Reconnection = false
        };

        manager = new SocketManager(new Uri("https://the-pack.herokuapp.com/socket.io/"), options);

        manager.Socket.On("player-start", OnStartUp);
        manager.Socket.On("player-disconnect", OnPlayerDisconnect);
        manager.Socket.On("player-message", OnMessage);
        manager.Socket.On("get-moves", OnPlayerMoves);
        manager.Socket.On(SocketIOEventTypes.Error, OnError);

        CommandConnect();
    }

    void Update()
    {
        ping += Time.deltaTime;
        pingTimer += Time.deltaTime;

        pingList.Add(ping);
        var tick = 1f;
        if (pingTimer > tick)
        {
            avgPing = GetAverage(pingList);
            pingList.Clear();
            pingTimer = 0f;
        }

        if (ping > 10f)
        {
            holder.Warn = true;
            manager.Close();
            SceneManager.LoadScene("Menu");
        }
    }

    #region Commands

    public void CommandConnect()
    {
        var data = new UserJSON(holder.PlayerUsername, null, null, null, holder.PlayerToken, null);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("player-start", json, holder.Secret);
    }

    public void CommandMove(Vector3 position, string attackType, float attackRadian, string skillsJSON, string world, string zone, float health, float mana, float exp, string itemsJSON, float speed, string[] jsonArray)
    {
        var data = new PlayerJSON(holder.PlayerToken, holder.PlayerUsername, position.x, position.y, attackType, attackRadian, skillsJSON, health, mana, itemsJSON, exp, world, zone, speed);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("player-move", json, jsonArray, holder.Secret);
    }

    public void CommandMessage(string message)
    {
        var data = new MessageJSON(holder.PlayerToken, holder.PlayerUsername, message);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("player-message", json, holder.Secret);
    }

    #endregion

    #region Listening

    void OnStartUp(Socket socket, Packet packet, params object[] args)
    {
        // token, username, positionX, positionY, moveH, moveV, lastMoveX, lastMoveY, attackType, attackRadian, skillsJSON world, zone, health, mana
        var json = (string)args[0];
        var data = JsonUtility.FromJson<PlayerJSON>(json);
        Debug.Log(json);

        if (holder.PlayerUsername == data.username)
        {
            var pos = new Vector3(data.positionX, data.positionY, 0);
            var rot = new Quaternion(0, 0, 0, 0);
            var res = Resources.Load("Player", typeof(GameObject));

            player = Instantiate(res, pos, rot) as GameObject;
            player.name = data.username;

            var pc = player.GetComponent<PlayerController>();
            pc.network = gameObject.GetComponent<NetworkPlay>();
            pc.health = data.health;
            pc.mana = data.mana;
            pc.world = data.world;
            pc.zone = data.zone;
            pc.exp = data.exp;
            pc.itemsJSON = data.itemsJSON;
            pc.skillsJSON = data.skillsJSON;
        }
        else
        {
            holder.Warn = true;
            manager.Close();
            SceneManager.LoadScene("Menu");
        }
    }

    void OnPlayerMoves(Socket socket, Packet packet, params object[] args)
    {
        // Player [{token, username, positionX, positionY, moveH, moveV, lastMoveX, lastMoveY, attackType, attackRadian, skillsJSON, world, zone, health, mana}]
        // Enemy [{username, positionX, positionY, world, zone, target, health, speed}]
        var playerJSON = (string)args[0];
        var enemyJSON = (string)args[1];
        var playerN = SimpleJSON.JSONNode.Parse(playerJSON);
        var enemyN = SimpleJSON.JSONNode.Parse(enemyJSON);
        Debug.Log(playerN);
        Debug.Log(enemyN);

        allPlayers = new List<GameObject>(GameObject.FindGameObjectsWithTag("OtherPlayer"));
        allEnemies = new List<GameObject>(GameObject.FindGameObjectsWithTag("Enemy"));

        // Players
        foreach (SimpleJSON.JSONNode n in playerN)
        {
            var data = JsonUtility.FromJson<OtherPlayerJSON>(n);
            if (holder.PlayerUsername == data.username)
            {
                ping = 0;
                continue;
            }

            GameObject obj = null;
            foreach (GameObject player in allPlayers)
            {
                if (player.name == data.username)
                {
                    obj = player;
                    allPlayers.Remove(player);
                    break;
                }
            }

            if (obj)
            {
                var op = obj.GetComponent<OtherPlayerController>();
                op.targetPosition = new Vector3(data.positionX, data.positionY, 0f);
                op.attackRadian = data.attackRadian;
                op.attackType = data.attackType;
                op.itemsJSON = data.itemsJSON;
                op.speed = data.speed;
            }
            else
            {
                var res = Resources.Load("Avatar", typeof(GameObject));
                var pos = new Vector3(data.positionX, data.positionY, 0f);
                var rot = Quaternion.Euler(0, 0, 0);
                obj = Instantiate(res, pos, rot) as GameObject;
                obj.name = data.username;
                var op = obj.GetComponent<OtherPlayerController>();
                op.network = gameObject.GetComponent<NetworkPlay>();
                op.attackRadian = data.attackRadian;
                op.attackType = data.attackType;
                op.itemsJSON = data.itemsJSON;
                op.speed = data.speed;
            }
        }

        // Enemies
        foreach (SimpleJSON.JSONNode n in enemyN)
        {
            var data = JsonUtility.FromJson<EnemyJSON>(n);
            GameObject obj = null;
            foreach (GameObject enemy in allEnemies)
            {
                if (enemy.name == data.username)
                {
                    obj = enemy;
                    allEnemies.Remove(enemy);
                    break;
                }
            }

            if (!obj)
            {
                var res = Resources.Load("Enemy", typeof(GameObject));
                var pos = new Vector3(data.positionX, data.positionY, 0f);
                var rot = Quaternion.Euler(0, 0, 0);
                obj = Instantiate(res, pos, rot) as GameObject;
                obj.name = data.username;
            }

            var em = obj.GetComponent<EnemyController>();
            em.targetPosition = new Vector3(data.targetPositionX, data.targetPositionY, 0f);
            em.serverPosition = new Vector3(data.positionX, data.positionY, 0f);
            em.health = data.health;
            em.maxHealth = data.maxHealth;
            em.speed = data.speed;
            em.target = data.target;
            em.wait = data.wait;
            em.attack = data.attack;
        }

        foreach (GameObject player in allPlayers)
        {
            var op = player.GetComponent<OtherPlayerController>();
            op.DestroyObject();
        }

        foreach (GameObject enemy in allEnemies)
        {
            var em = enemy.GetComponent<EnemyController>();
            em.DestroyObjects();
        }
    }

    void OnMessage(Socket socket, Packet packet, params object[] args)
    {
        // token, username, message
        var json = (string)args[0];
        var data = JsonUtility.FromJson<MessageJSON>(json);
        //Debug.Log(json);

        var source = "[Global] ";
        var author = "<b>" + data.username + "</b>: ";
        var text = new BadWords().FilterProfanity(data.message);

        if (data.username == "")
        {
            ticker = text;
        }
        else
        {
            if (messageList.Count >= maxMessages)
            {
                Destroy(messageList[0].obj.gameObject);
                messageList.Remove(messageList[0]);
            }

            var res = Resources.Load("Message", typeof(GameObject));
            var obj = Instantiate(res, content.transform) as GameObject;
            var tmp = obj.GetComponentInChildren<TextMeshProUGUI>();
            var str = source + author + text;

            var messageObject = new MessageObject(str, obj);
            tmp.text = str;
            messageList.Add(messageObject);
        }
    }

    void OnPlayerDisconnect(Socket socket, Packet packet, params object[] args)
    {
        var json = (string)args[0];
        Debug.Log(json);
    }

    void OnError(Socket socket, Packet packet, params object[] args)
    {
        Error error = args[0] as Error;

        switch (error.Code)
        {
            case SocketIOErrors.User:
                Debug.Log("Exception in an event handler!");
                break;
            case SocketIOErrors.Internal:
                Debug.Log("Internal error!");
                break;
            default:
                Debug.Log("Server error!");
                break;
        }

        Debug.Log(error.ToString());
        holder.Warn = true;
        manager.Close();
        SceneManager.LoadScene("Menu");
    }

    #endregion

    #region JSONMessageClasses

    class UserJSON
    {
        public string username;
        public string email;
        public string passhash;
        public string salt;
        public string token;
        public string status;

        public UserJSON(string username, string email, string passhash, string salt, string token, string status)
        {
            this.username = username;
            this.email = email;
            this.passhash = passhash;
            this.salt = salt;
            this.status = status;
            this.token = token;
        }
    }

    class PlayerJSON
    {
        public string token;
        public string username;
        public string skillsJSON;
        public string itemsJSON;
        public float positionX;
        public float positionY;
        public string attackType;
        public float attackRadian;
        public float health;
        public float mana;
        public float exp;
        public string world;
        public string zone;
        public float speed;

        public PlayerJSON(string token, string username, float positionX, float positionY, string attackType, float attackRadian, string skillsJSON, float health, float mana, string itemsJSON, float exp, string world, string zone, float speed)
        {
            this.token = token;
            this.username = username;
            this.positionX = positionX;
            this.positionY = positionY;
            this.attackType = attackType;
            this.attackRadian = attackRadian;
            this.skillsJSON = skillsJSON;
            this.itemsJSON = itemsJSON;
            this.health = health;
            this.mana = mana;
            this.exp = exp;
            this.world = world;
            this.zone = zone;
            this.speed = speed;
        }
    }

    class OtherPlayerJSON
    {
        public string token;
        public string username;
        public string zone;
        public string world;
        public float positionX;
        public float positionY;
        public string attackType;
        public float attackRadian;
        public string itemsJSON;
        public float speed;

        public OtherPlayerJSON(string token, string username, float positionX, float positionY, string attackType, float attackRadian, string world, string zone, string itemsJSON, float speed)
        {
            this.token = token;
            this.username = username;
            this.positionX = positionX;
            this.positionY = positionY;
            this.attackType = attackType;
            this.attackRadian = attackRadian;
            this.world = world;
            this.zone = zone;
            this.itemsJSON = itemsJSON;
            this.speed = speed;
        }
    }

    class MessageJSON
    {
        public string token;
        public string username;
        public string message;

        public MessageJSON(string token, string username, string message)
        {
            this.token = token;
            this.username = username;
            this.message = message;
        }
    }

    class EnemyJSON
    {
        public string username;
        public string target;
        public float positionX;
        public float positionY;
        public float health;
        public float speed;
        public float maxHealth;
        public bool attack;
        public bool wait;
        public float targetPositionX;
        public float targetPositionY;

        public EnemyJSON(string username, float positionX, float positionY, string target, float health, float speed, float maxHealth, bool attack, bool wait, float targetPositionX, float targetPositionY)
        {
            this.username = username;
            this.positionX = positionX;
            this.positionY = positionY;
            this.target = target;
            this.health = health;
            this.speed = speed;
            this.maxHealth = maxHealth;
            this.attack = attack;
            this.wait = wait;
            this.targetPositionX = targetPositionX;
            this.targetPositionY = targetPositionY;
        }
    }

    #endregion

    class MessageObject
    {
        public string str;
        public GameObject obj;

        public MessageObject(string str, GameObject obj)
        {
            this.str = str;
            this.obj = obj;
        }
    }

    public void DisconnectFromServer()
    {
        manager.Close();
        SceneManager.LoadScene("Menu");
    }
    
    public float GetAverage(List<float> list)
    {
        float total = 0f;
        foreach (float f in list)
        {
            total += f;
        }
        return total / list.Count;
    }
}