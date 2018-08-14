using System;
using UnityEngine;
using BestHTTP.SocketIO;
using UnityEngine.SceneManagement;
using System.Collections.Generic;

public class NetworkPlay
{
    private SocketManager manager;
    private MainGameManager gameManager;

    public NetworkPlay(MainGameManager gameManager)
    {
        this.gameManager = gameManager;
        //manager = new SocketManager(new Uri("http://knight2d-env.wgbanyzntw.us-east-2.elasticbeanstalk.com/socket.io/"), options);
        manager = new SocketManager(new Uri("http://localhost:5000/socket.io/"));

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
        var data = new ClassesJSON.UserJSON(PlayerPrefs.GetString("username"), null, null, null, PlayerPrefs.GetString("token"), null);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("player-start", json);
    }

    public void CommandMove(Vector3 position, int attackType, float attackRadian, string[] skillsArray, float health, float mana, string[] itemsArray, string[] jsonArray)
    {
        var data = new ClassesJSON.PlayerJSON(PlayerPrefs.GetString("username"), PlayerPrefs.GetString("token"), position.x, position.y, attackType, attackRadian, skillsArray, health, mana, itemsArray, 0f, 0f, 0f);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("player-move", json, jsonArray);
    }

    public void CommandMessage(string message)
    {
        var data = new ClassesJSON.MessageJSON(PlayerPrefs.GetString("username"), PlayerPrefs.GetString("token"), message);
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

        if (PlayerPrefs.GetString("username") == data.username)
        {
            gameManager.SpawnPlayer(data);
        }
        else
        {
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
            var data = JsonUtility.FromJson<ClassesJSON.PlayerJSON>(n);
            if (PlayerPrefs.GetString("username") == data.username)
            {
                gameManager.UpdatePlayer(data);
                gameManager.ResetPing();
                continue;
            }

            var gameObj = allPlayers.Find(player => player.name == data.username);
            deleteEnemies.Remove(gameObj);
            if (gameObj)
            {
                //gameManager.UpdateOtherPlayer(gameObj, data);
            }
            else
            {
                //gameManager.SpawnOtherPlayer(data, this);
            }
        }

        foreach (SimpleJSON.JSONNode n in enemyN)
        {
            var data = JsonUtility.FromJson<ClassesJSON.EnemyJSON>(n);
            var gameObj = allEnemies.Find(enemy => enemy.name == data.enemyID);
            deleteEnemies.Remove(gameObj);
            if (gameObj)
            {
                gameManager.UpdateEnemy(gameObj, data);
            }
            else
            {
                gameManager.SpawnEnemy(data);
            }
        }

        foreach (GameObject player in deletePlayers)
        {
            //var otherPlayerController = player.GetComponent<OtherPlayerController>();
            //Destroy(otherPlayerController.healthBar);
            //Destroy(player);
        }

        foreach (GameObject enemy in deleteEnemies)
        {
            var enemyController = enemy.GetComponent<EnemyController>();
            //Destroy(enemyController.healthBar);
            //Destroy(enemy);
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

        gameManager.BuildMap(grid, data.worldWidth, data.worldLength);
    }

    void OnPlayerMessage(Socket socket, Packet packet, params object[] args)
    {
        var json = (string)args[0];
        var data = JsonUtility.FromJson<ClassesJSON.MessageJSON>(json);
        Debug.Log(json);
        if (data.username == "")
        {
            gameManager.SetTicker(data.message);
        }
        else
        {
            gameManager.SpawnMessage(data);
        }
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
}