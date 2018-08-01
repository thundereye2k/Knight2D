using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using BestHTTP.SocketIO;
using System.Security.Cryptography;

public class NetworkMenu : MonoBehaviour
{
    private Holder holder;
    private SocketManager manager;
    private string playerPassword;
    private Boolean isPaused = false;

    public string status { get; set; }

    void Awake()
    {
        var obj = GameObject.FindGameObjectWithTag("Holder");

        if (obj == null)
        {
            Application.Quit();
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
            Application.Quit();
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
            //ConnectWith = BestHTTP.SocketIO.Transports.TransportTypes.WebSocket,
            Reconnection = false,
        };

        //manager = new SocketManager(new Uri("http://knight2d-env.wgbanyzntw.us-east-2.elasticbeanstalk.com/socket.io/"), options);
        manager = new SocketManager(new Uri("http://localhost:5000/socket.io/"), options);

        manager.Socket.On("menu-player", OnMenuResponse);
        manager.Socket.On(SocketIOEventTypes.Error, OnError);

        if (holder.warn)
        {
            status = "warn";
        }
    }

    #region Commands

    public void CommandRegister(string username, string email, string password)
    {
        byte[] bytes;
        new RNGCryptoServiceProvider().GetNonZeroBytes(bytes = new byte[16]);
        var salt = Convert.ToBase64String(bytes);
        var passhash = GeneratePassHash(salt, password);

        var data = new UserJSON(username, email, passhash, salt, null, null);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("menu-register", json);
    }

    public void CommandSalt(string username, string password)
    {
        playerPassword = password;
        var data = new UserJSON(username, null, null, null, null, null);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("menu-salt", json);
    }


    public void CommandLogin(string username, string passhash)
    {
        var data = new UserJSON(username, null, passhash, null, null, null);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("menu-login", json);
    }

    #endregion

    #region Listening

    void OnMenuResponse(Socket socket, Packet packet, params object[] args)
    {
        var json = (string)args[0];
        var data = JsonUtility.FromJson<UserJSON>(json);
        Debug.Log(json);

        status = data.status;
        switch (status)
        {
            case "salt":
                holder.username = data.username;
                var passhash = GeneratePassHash(data.salt, playerPassword);
                CommandLogin(data.username, passhash);
                break;

            case "login":
                holder.token = data.token;
                manager.Close();
                SceneManager.LoadScene("Game");
                break;

            case "register":
                // TODO: gets username and email?
                break;

            default:
                break;
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

        Application.Quit();
    }

    #endregion

    #region JSON

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

    #endregion

    private string GeneratePassHash(string salt, string password)
    {
        var bytes = Convert.FromBase64String(salt);
        var pbkdf2 = new Rfc2898DeriveBytes(password, bytes, 10000);
        var hash = pbkdf2.GetBytes(20);
        var hashBytes = new byte[36];
        Array.Copy(bytes, 0, hashBytes, 0, 16);
        Array.Copy(hash, 0, hashBytes, 16, 20);
        return Convert.ToBase64String(hashBytes);
    }
}
