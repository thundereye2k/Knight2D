using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using BestHTTP.SocketIO;
using System.Security.Cryptography;

public class NetworkMenu
{
    private SocketManager manager;
    private MainMenuManager menuManager;

    public NetworkMenu(MainMenuManager menuManager)
    {
        this.menuManager = menuManager;
        //manager = new SocketManager(new Uri("http://knight2d-env.wgbanyzntw.us-east-2.elasticbeanstalk.com/socket.io/"), options);
        manager = new SocketManager(new Uri("http://localhost:5000/socket.io/"));

        manager.Socket.On("menu-player", OnMenuResponse);
        manager.Socket.On(SocketIOEventTypes.Error, OnError);
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
        PlayerPrefs.SetString("username", username);
        PlayerPrefs.SetString("password", password);
        
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

    private void OnMenuResponse(Socket socket, Packet packet, params object[] args)
    {
        var json = (string)args[0];
        var data = JsonUtility.FromJson<UserJSON>(json);
        Debug.Log(json);
                
        menuManager.SetStatus(data.status);
        switch (data.status)
        {
            case "salt":
                var passhash = GeneratePassHash(data.salt, PlayerPrefs.GetString("password"));
                CommandLogin(data.username, passhash);
                break;

            case "login":
                PlayerPrefs.SetString("token", data.token);
                SceneManager.LoadScene("Game");
                break;

            case "register":
                // TODO: gets username and email?
                break;

            default:
                break;
        }
    }

    private void OnError(Socket socket, Packet packet, params object[] args)
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
        public string username { get; private set; }
        public string email { get; private set; }
        public string passhash { get; private set; }
        public string salt { get; private set; }
        public string token { get; private set; }
        public string status { get; private set; }

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
