using System;
using UnityEngine;
using BestHTTP.SocketIO;
using UnityEngine.SceneManagement;
using System.Collections.Generic;

public class NetworkPlay : GameController
{
    private Holder holder;
    private SocketManager manager;
    private bool isPaused = false;

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
            Reconnection = false
        };

        //manager = new SocketManager(new Uri("http://knight2d-env.wgbanyzntw.us-east-2.elasticbeanstalk.com/socket.io/"), options);
        manager = new SocketManager(new Uri("http://localhost:5000/socket.io/"), options);

        manager.Socket.On("player-start", OnPlayerStart);
        manager.Socket.On("player-message", OnPlayerMessage);
        manager.Socket.On("get-moves", OnGetMoves);
        manager.Socket.On("get-map", OnGetMap);
        manager.Socket.On(SocketIOEventTypes.Error, OnError);

        CommandConnect();
    }

    #region Commands

    public void CommandConnect()
    {
        var data = new ClassesJSON.UserJSON(holder.username, null, null, null, holder.token, null);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("player-start", json);
    }

    public void CommandMove(Vector3 position, int attackType, float attackRadian, string[] skillsArray, float health, float mana, string[] itemsArray, float speed, string[] jsonArray)
    {
        var data = new ClassesJSON.PlayerJSON(holder.token, holder.username, position.x, position.y, attackType, attackRadian, skillsArray, health, mana, itemsArray, 0f, 0f, 0f, speed);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("player-move", json, jsonArray);
    }

    public void CommandMessage(string message)
    {
        var data = new ClassesJSON.MessageJSON(holder.token, holder.username, message);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("player-message", json);
    }

    public void CommandDisconnect()
    {
        manager.Close();
        SceneManager.LoadScene("Menu");

    }

    #endregion

    #region Listening

    void OnPlayerStart(Socket socket, Packet packet, params object[] args)
    {
        var json = (string)args[0];
        var data = JsonUtility.FromJson<ClassesJSON.PlayerJSON>(json);
        Debug.Log(json);

        if (holder.username == data.username)
        {
            spawnPlayer(data, this);
        }
        else
        {
            holder.warn = true;
            manager.Close();
            SceneManager.LoadScene("Menu");
        }
    }

    void OnGetMoves(Socket socket, Packet packet, params object[] args)
    {
        var playerJSON = (string)args[0];
        var enemyJSON = (string)args[1];
        var playerN = SimpleJSON.JSONNode.Parse(playerJSON);
        var enemyN = SimpleJSON.JSONNode.Parse(enemyJSON);
        var allPlayers = new List<GameObject>(GameObject.FindGameObjectsWithTag("OtherPlayer"));
        var allEnemies = new List<GameObject>(GameObject.FindGameObjectsWithTag("Enemy"));
        var deletePlayers = allPlayers;
        var deleteEnemies = allEnemies;

        foreach (SimpleJSON.JSONNode n in playerN)
        {
            var data = JsonUtility.FromJson<ClassesJSON.OtherPlayerJSON>(n);
            if (holder.username == data.username)
            {

                //ping = 0;
                continue;
            }

            GameObject gameObj = null;
            foreach (GameObject player in allPlayers)
            {
                if (player.name == data.username)
                {
                    gameObj = player;
                    deletePlayers.Remove(gameObj);
                    break;
                }
            }

            if (!gameObj)
            {
                spawnOtherPlayer(data);
                deletePlayers.Remove(gameObj);
            }

            updateOtherPlayer(gameObj, data);
        }

        foreach (SimpleJSON.JSONNode n in enemyN)
        {
            var data = JsonUtility.FromJson<ClassesJSON.EnemyJSON>(n);
            GameObject gameObj = null;
            foreach (GameObject enemy in allEnemies)
            {
                if (enemy.name == data.enemyID)
                {
                    gameObj = enemy;
                    deleteEnemies.Remove(gameObj);
                    break;
                }
            }

            if (!gameObj)
            {
                spawnEnemy(data);
                deleteEnemies.Remove(gameObj);
            }

            updateEnemy(gameObj, data);
        }

        foreach (GameObject player in allPlayers)
        {
            Destroy(player);
        }

        foreach (GameObject enemy in allEnemies)
        {
            Destroy(enemy);
        }
    }

    void OnGetMap(Socket socket, Packet packet, params object[] args)
    {
        var json = (string)args[0];
        var data = JsonUtility.FromJson<ClassesJSON.MapJSON>(json);
        Debug.Log(json);

        var list = new List<int[]>();
        foreach (string str in data.worldString)
        {
            var strArray = str.Split(',');
            var intArray = Array.ConvertAll(strArray, int.Parse);
            list.Add(intArray);
        }
        var grid = list.ToArray();

        StartCoroutine(TileController.CreateMap(grid, data.worldWidth, data.worldLength));
    }

    void OnPlayerMessage(Socket socket, Packet packet, params object[] args)
    {
        var json = (string)args[0];
        var data = JsonUtility.FromJson<ClassesJSON.MessageJSON>(json);
        Debug.Log(json);
        spawnMessage(data);
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
        holder.warn = true;
        manager.Close();
        SceneManager.LoadScene("Menu");
    }

    #endregion
}