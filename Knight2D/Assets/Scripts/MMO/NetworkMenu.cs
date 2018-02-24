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

        var userJSON = new UserJSON(username, email, passhash, Convert.ToBase64String(salt), "[USER_REGISTER]", null);
        var json = userJSON.Jsonify();
        manager.Socket.Emit("menu-register", json, holder.Secret);
    }

    public void CommandLogin(string username, string password)
    {
        // Store password to check later
        playerPassword = password;
        Debug.Log(password);
        Debug.Log(username);
        var userJSON = new UserJSON(username, null, null, null, "[USER_LOGIN]", null);
        var json = JsonUtility.ToJson(userJSON);
        manager.Socket.Emit("menu-login", json, holder.Secret);
    }

    #endregion

    #region Listening

    void OnCompleteMenu(Socket socket, Packet packet, params object[] args)
    {
        var json = (string)args[0];
        var userJSON = JsonUtility.FromJson<UserJSON>(json);
        Debug.Log(json);

        switch (userJSON.status)
        {
            case "registered":
                Debug.Log("Registration successful");
                break;
            case "duplicate":
                Debug.Log("Username or email already exsit");
                break;
            case "error":
                Debug.Log("Something bad happened");
                break;
            case "password":
                Debug.Log("Password needs to be between 8-24 characters");
                break;
            case "username":
                Debug.Log("Username needs to be greater then 4 characters");
                break;
            case "email":
                Debug.Log("Email address not valid");
                break;
            case "notfound":
                Debug.Log("Username not found");
                break;
            case "logged":
                Debug.Log("Already logged in");
                break;
            case "login":
                CheckPassword(userJSON.passhash, userJSON.salt, userJSON.token, userJSON.username, userJSON.email);
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
    }

    #endregion

    #region JSON

    class UserJSON
    {
        public string username;
        public string email;
        public string passhash;
        public string salt;
        public string status;
        public string token;

        public UserJSON(string username, string email, string passhash, string salt, string status, string token)
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
        }

        if (login)
        {
            holder.PlayerToken = _token;
            holder.PlayerUsername = _username;
            holder.PlayerEmail = _email;
            manager.Close();
            SceneManager.LoadScene("Test");
        }
    }
}