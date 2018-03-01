using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using BestHTTP.SocketIO;
using System.Security.Cryptography;
using System.Text.RegularExpressions;

public class NetworkMenu : MonoBehaviour
{
    [SerializeField]
    private Holder holder;
    private SocketManager manager;
    private string playerPassword;

    public string Status { get; set; }

    void Awake()
    {
        holder = GameObject.FindGameObjectWithTag("Holder").GetComponent<Holder>();

        if (holder == null)
        {
            Application.Quit();
        }
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

        manager.Socket.On("menu-player", OnCompleteMenu);
        manager.Socket.On(SocketIOEventTypes.Error, OnError);
    }

    #region Commands

    public void CommandRegister(string username, string email, string password)
    {
        byte[] salt;
        new RNGCryptoServiceProvider().GetNonZeroBytes(salt = new byte[16]);
        var pbkdf2 = new Rfc2898DeriveBytes(password, salt, 10000);
        var hash = pbkdf2.GetBytes(20);
        var hashBytes = new byte[36];
        Array.Copy(salt, 0, hashBytes, 0, 16);
        Array.Copy(hash, 0, hashBytes, 16, 20);
        var passhash = Convert.ToBase64String(hashBytes);

        var data = new UserJSON(username, email, passhash, Convert.ToBase64String(salt), null, null);
        var json = data.Jsonify();
        manager.Socket.Emit("menu-register", json, holder.Secret);
    }

    public void CommandLogin(string username, string password)
    {
        // Store password to check later
        playerPassword = password;
        Debug.Log(password);
        Debug.Log(username);
        var data = new UserJSON(username, null, null, null, null, null);
        var json = JsonUtility.ToJson(data);
        manager.Socket.Emit("menu-login", json, holder.Secret);
    }

    #endregion

    #region Listening

    void OnCompleteMenu(Socket socket, Packet packet, params object[] args)
    {
        var json = (string)args[0];
        var data = JsonUtility.FromJson<UserJSON>(json);
        Debug.Log(json);

        Status = data.status;
        if (Status == "login")
        {
            CheckPassword(data.passhash, data.salt, data.token, data.username, data.email);
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

        public string Jsonify()
        {
            return JsonUtility.ToJson(this);
        }
    }

    #endregion

    private void CheckPassword(string _passhash, string _salt, string _token, string _username, string _email)
    {
        var login = false;
        var salt = Convert.FromBase64String(_salt);
        var pbkdf2 = new Rfc2898DeriveBytes(playerPassword, salt, 10000);
        var hash = pbkdf2.GetBytes(20);
        var hashBytes = new byte[36];
        Array.Copy(salt, 0, hashBytes, 0, 16);
        Array.Copy(hash, 0, hashBytes, 16, 20);
        var passhash = Convert.ToBase64String(hashBytes);

        if (passhash.Equals(_passhash))
        {
            login = true;
        }
        else
        {
            Debug.Log("Password incorrect");
            Status = "wrong";
        }

        if (login)
        {
            Status = "play";
            holder.PlayerToken = _token;
            holder.PlayerUsername = _username;
            holder.PlayerEmail = _email;
            manager.Close();
            SceneManager.LoadScene("Test");
        }
    }
}