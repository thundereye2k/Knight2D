﻿using System;
using System.Collections;
using UnityEngine;
using BestHTTP.SocketIO;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using TMPro;

public class NetworkPlay : MonoBehaviour
{
    private SocketManager manager;
    private GameObject player;
    private Holder holder;
    private bool isPaused = false;
    private int maxMessages = 25;
    private List<MessageObject> messageList = new List<MessageObject>();
    private float ping = 0;

    public GameObject content;
    public GameObject[] allPlayers;
    public GameObject[] allEnemies;

    public string Ticker { get; set; }

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
        manager.Close();
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
        //manager = new SocketManager(new Uri("localhost:5000/socket.io/"), options);

        manager.Socket.On("player-start", OnStartUp);
        manager.Socket.On("player-disconnect", OnPlayerDisconnect);
        manager.Socket.On("player-message", OnMessage);
        manager.Socket.On("get-moves", OnPlayerMoves);
        manager.Socket.On(SocketIOEventTypes.Error, OnError);

        CommandConnect();
    }

    void Update()
    {
        allPlayers = GameObject.FindGameObjectsWithTag("OtherPlayer");
        allEnemies = GameObject.FindGameObjectsWithTag("Enemy");

        ping = +Time.deltaTime;

        if (ping > 1000f)
        {
            manager.Close();
            SceneManager.LoadScene("Menu");
        }
    }

    #region Commands

    public void CommandConnect()
    {
        var data = new UserJSON(holder.PlayerToken, holder.PlayerUsername, 0, 0);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("player-start", json, holder.Secret);
    }

    public void CommandMove(Vector3 vec3, float moveH, float moveV, Vector2 lastMove, string attackType, float attackRadian, string skillsJSON, string world, string zone, float health, float mana, string[] jsonArray)
    {
        var position = new Vector2(vec3.x, vec3.y);
        var data = new PlayerJSON(holder.PlayerToken, holder.PlayerUsername, position.x, position.y, moveH, moveV, lastMove.x, lastMove.y, attackType, attackRadian, skillsJSON, world, zone, health, mana);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("player-move", json, jsonArray, holder.Secret);
        ping = 0;
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

            //var textmesh = avatar.GetComponentInChildren<TextMesh>();
            //textmesh.text = userJSON.username;

            PlayerController pc = player.GetComponent<PlayerController>();
            pc.Net = gameObject.GetComponent<NetworkPlay>();
            pc.Health = data.health;
            pc.Mana = data.mana;
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

        // Players
        for (int i = 0; i < playerN.Count; i++)
        {
            var data = JsonUtility.FromJson<PlayerJSON>(playerN[i]);
            var position = new Vector3(data.positionX, data.positionY, 0);
            var lastMove = new Vector2(data.lastMoveX, data.lastMoveY);

            if (holder.PlayerUsername == data.username)
            {
                //Debug.Log("Ping: " + ping * 1000);
            }
            else if (Vector3.Distance(player.transform.position, position) < 500.0f)
            {
                //var obj = GameObject.Find(data.username) as GameObject; 
                GameObject obj = null;
                for (var j = 0; j < allPlayers.Length; j++)
                {
                    if (allPlayers[j].name == data.username)
                    {
                        obj = allPlayers[j];
                    }
                }

                if (obj != null)
                {
                    var up = obj.GetComponent<UpdateOtherPlayers>();
                    up.UpdateOtherPlayer(position, lastMove, data.moveH, data.moveV, data.attackType, data.attackRadian, data.skillsJSON, data.world, data.zone, data.health, data.mana);
                }
                else
                {
                    var res = Resources.Load("Avatar", typeof(GameObject));
                    var pos = new Vector3(position.x, position.y, 0);
                    var rot = Quaternion.Euler(0, 0, 0);
                    obj = Instantiate(res, pos, rot) as GameObject;
                    obj.name = data.username;
                }
            }
            else
            {
                Destroy(GameObject.Find(data.username));
            }
        }

        // Enemies
        for (int i = 0; i < enemyN.Count; i++)
        {
            var data = JsonUtility.FromJson<EnemyMoveJSON>(enemyN[i]);
            var position = new Vector3(data.positionX, data.positionY, 0);

            var pc = player.GetComponent<PlayerController>();
            if (pc.World == data.world)
            {
                GameObject obj = null;
                for (var j = 0; j < allEnemies.Length; j++)
                {
                    if (allEnemies[j].name == data.username)
                    {
                        obj = allEnemies[j];
                        break;
                    }
                }

                if (obj != null)
                {
                    var em = obj.GetComponent<EnemyMove>();
                    em.UpdatePosition(position, data.target, data.health, data.speed);
                }
                else
                {
                    var res = Resources.Load("Enemy", typeof(GameObject));
                    var pos = new Vector3(position.x, position.y, 0);
                    var rot = Quaternion.Euler(0, 0, 0);
                    obj = Instantiate(res, pos, rot) as GameObject;
                    obj.name = data.username;
                    var em = obj.GetComponent<EnemyMove>();
                    em.UpdatePosition(position, data.target, data.health, data.speed);
                }
            }
            else
            {
                Destroy(GameObject.Find(data.username));
            }
        }
    }

    void OnMessage(Socket socket, Packet packet, params object[] args)
    {
        // token, username, message
        var json = (string)args[0];
        var data = JsonUtility.FromJson<MessageJSON>(json);
        Debug.Log(json);

        if (messageList.Count >= maxMessages)
        {
            Destroy(messageList[0].textObject.gameObject);
            messageList.Remove(messageList[0]);
        }

        var res = Resources.Load("Text", typeof(GameObject));
        var obj = Instantiate(res, content.transform) as GameObject;
        var tmp = obj.GetComponentInChildren<TextMeshProUGUI>();
        tmp.text = data.username + ": " + data.message;
        Ticker = tmp.text;

        var messageObject = new MessageObject(tmp.text, obj);
        messageList.Add(messageObject);
    }

    void OnPlayerDisconnect(Socket socket, Packet packet, params object[] args)
    {
        var json = (string)args[0];
        var data = JsonUtility.FromJson<UserJSON>(json);
        Destroy(GameObject.Find(data.username));
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

        SceneManager.LoadScene("Menu");
    }

    #endregion

    #region JSONMessageClasses

    class UserJSON
    {
        public string token;
        public string username;
        public float positionX;
        public float positionY;

        public UserJSON(string token, string username, float positionX, float positionY)
        {
            this.token = token;
            this.username = username;
            this.positionX = positionX;
            this.positionY = positionY;
        }
    }

    class PlayerJSON
    {
        public string token;
        public string username;
        public string zone;
        public string world;
        public string skillsJSON;
        public float positionX;
        public float positionY;
        public float moveH;
        public float moveV;
        public float lastMoveX;
        public float lastMoveY;
        public string attackType;
        public float attackRadian;
        public float health;
        public float mana;

        public PlayerJSON(string token, string username, float positionX, float positionY, float moveH, float moveV, float lastMoveX, float lastMoveY, string attackType, float attackRadian, string skillsJSON, string world, string zone, float health, float mana)
        {
            this.token = token;
            this.username = username;
            this.positionX = positionX;
            this.positionY = positionY;
            this.moveH = moveH;
            this.moveV = moveV;
            this.lastMoveX = lastMoveX;
            this.lastMoveY = lastMoveY;
            this.attackType = attackType;
            this.attackRadian = attackRadian;
            this.skillsJSON = skillsJSON;
            this.world = world;
            this.zone = zone;
            this.health = health;
            this.mana = mana;
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

    class EnemyMoveJSON
    {
        public string username;
        public string zone;
        public string world;
        public string target;
        public float positionX;
        public float positionY;
        public float health;
        public float speed;

        public EnemyMoveJSON(string username, float positionX, float positionY, string world, string zone, string target, float health, float speed)
        {
            this.username = username;
            this.positionX = positionX;
            this.positionY = positionY;
            this.world = world;
            this.zone = zone;
            this.target = target;
            this.health = health;
            this.speed = speed;
        }
    }

    #endregion

    class MessageObject
    {
        public string text;
        public GameObject textObject;

        public MessageObject(string text, GameObject textObject)
        {
            this.text = text;
            this.textObject = textObject;
        }
    }

    public void DisconnectFromServer()
    {
        manager.Close();
        SceneManager.LoadScene("Menu");
    }
}