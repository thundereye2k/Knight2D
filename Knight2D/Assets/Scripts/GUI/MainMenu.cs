using System;
using System.Text.RegularExpressions;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    [SerializeField]
    private GameObject networkObject, warnObject;
    private string status;
    private float timer = 0f;

    void Awake()
    {
        var network = networkObject.GetComponent<NetworkMenu>();
        if (!network)
        {
            Application.Quit();
        }
    }

    void Start()
    {
        var usernameStored = PlayerPrefs.GetString("username");
        var passwordStored = PlayerPrefs.GetString("password");

        if (usernameStored != null && passwordStored != null)
        {
            var usernameLogin = GameObject.Find("LoginInputUsername").GetComponentInChildren<TMP_InputField>();
            var passwordLogin = GameObject.Find("LoginInputPassword").GetComponentInChildren<TMP_InputField>();

            usernameLogin.text = usernameStored;
            passwordLogin.text = passwordStored;
        }
    }

    void Update()
    {
        var tmp = warnObject.GetComponent<TextMeshProUGUI>();
        var network = networkObject.GetComponent<NetworkMenu>();
        status = network.Status;

        switch (status)
        {
            // Login
            case "play":
                tmp.SetText("Login successful");
                tmp.color = new Color(0, 1, 0, 1);
                break;

            case "wrong":
                tmp.SetText("Username or password are incorrect");
                tmp.color = new Color(1, 0, 0, 1);
                break;

            case "notfound":
                tmp.SetText("Username does not exist");
                tmp.color = new Color(1, 0, 0, 1);
                break;

            // Register
            case "register":
                tmp.SetText("Registration successful");
                tmp.color = new Color(0, 1, 0, 1);
                break;

            case "duplicate":
                tmp.SetText("Username or email already exist");
                tmp.color = new Color(1, 0, 0, 1);
                break;

            case "password":
                tmp.SetText("Password needs to be between 8-24 characters");
                tmp.color = new Color(1, 0, 0, 1);
                break;

            case "username":
                tmp.SetText("Username needs to be between 3-16 characters");
                tmp.color = new Color(1, 0, 0, 1);
                break;

            case "email":
                tmp.SetText("Email address is not valid");
                tmp.color = new Color(1, 0, 0, 1);
                break;

            case "bad":
                tmp.SetText("No bad words :(");
                tmp.color = new Color(1, 0, 0, 1);
                break;

            // Error
            case "error":
                tmp.SetText("Something bad happened");
                tmp.color = new Color(1, 0, 0, 1);
                break;

            default:
                tmp.SetText("");
                tmp.color = new Color(0, 0, 0, 0);
                break;
        }
    }

    public void SubmitLogin()
    {
        var usernameLogin = GameObject.Find("LoginInputUsername").GetComponentInChildren<TMP_InputField>();
        var passwordLogin = GameObject.Find("LoginInputPassword").GetComponentInChildren<TMP_InputField>();

        PlayerPrefs.SetString("username", usernameLogin.text);
        PlayerPrefs.SetString("password", passwordLogin.text);

        var network = networkObject.GetComponent<NetworkMenu>();
        network.CommandLogin(usernameLogin.text, passwordLogin.text);
    }

    public void SubmitRegister()
    {
        var usernameRegister = GameObject.Find("RegisterInputUsername").GetComponentInChildren<TMP_InputField>();
        var passwordRegister = GameObject.Find("RegisterInputPassword").GetComponentInChildren<TMP_InputField>();
        var emailRegister = GameObject.Find("RegisterInputEmail").GetComponentInChildren<TMP_InputField>();

        if (IsUsernameLong(usernameRegister.text) && IsPasswordLong(passwordRegister.text) && IsEmailValid(emailRegister.text))
        {
            var network = networkObject.GetComponent<NetworkMenu>();
            network.CommandRegister(usernameRegister.text, emailRegister.text, passwordRegister.text);
        }
    }

    private bool IsEmailValid(string email)
    {
        string pattern = @"^(?!\.)(""([^""\r\\]|\\[""\r\\])*""|"
          + @"([-a-z0-9!#$%&'*+/=?^_`{|}~]|(?<!\.)\.)*)(?<!\.)"
          + @"@[a-z0-9][\w\.-]*[a-z0-9]\.[a-z][a-z\.]*[a-z]$";

        Regex regex = new Regex(pattern, RegexOptions.IgnoreCase);
        if (regex.IsMatch(email))
        {
            return true;
        }
        else
        {
            var network = networkObject.GetComponent<NetworkMenu>();
            network.Status = "email";
            return false;
        }
    }

    private bool IsPasswordLong(string password)
    {
        if (password.Length >= 8 && password.Length <= 24)
        {
            return true;
        }
        else
        {
            var network = networkObject.GetComponent<NetworkMenu>();
            network.Status = "password";
            return false;
        }
    }

    private bool IsUsernameLong(string username)
    {
        if (username.Length >= 3 && username.Length <= 16)
        {
            return true;
        }
        else
        {
            var network = networkObject.GetComponent<NetworkMenu>();
            network.Status = "username";
            return false;
        }
    }
}