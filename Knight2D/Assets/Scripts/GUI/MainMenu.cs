using System;
using System.Text.RegularExpressions;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    public NetworkMenu network;
    public TextMeshProUGUI warn;
    private string status;

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
        status = network.Status;

        switch (status)
        {
            // Login
            case "play":
                warn.SetText("Login successful");
                warn.color = new Color(0, 1, 0, 1);
                break;

            case "wrong":
                warn.SetText("Username or password are incorrect");
                warn.color = new Color(1, 0, 0, 1);
                break;

            case "notfound":
                warn.SetText("Username does not exist");
                warn.color = new Color(1, 0, 0, 1);
                break;

            // Register
            case "register":
                warn.SetText("Registration successful");
                warn.color = new Color(0, 1, 0, 1);
                break;

            case "duplicate":
                warn.SetText("Username or email already exist");
                warn.color = new Color(1, 0, 0, 1);
                break;

            case "password":
                warn.SetText("Password needs to be between 8-24 characters");
                warn.color = new Color(1, 0, 0, 1);
                break;

            case "username":
                warn.SetText("Username needs to be between 3-16 characters");
                warn.color = new Color(1, 0, 0, 1);
                break;

            case "email":
                warn.SetText("Email address is not valid");
                warn.color = new Color(1, 0, 0, 1);
                break;

            case "bad":
                warn.SetText("No bad words :(");
                warn.color = new Color(1, 0, 0, 1);
                break;

            // Error
            case "error":
                warn.SetText("Well this isn't good...");
                warn.color = new Color(1, 0, 0, 1);
                break;

            default:
                warn.SetText("");
                warn.color = new Color(0, 0, 0, 0);
                break;
        }
    }

    public void SubmitLogin()
    {
        var usernameLogin = GameObject.Find("LoginInputUsername").GetComponentInChildren<TMP_InputField>();
        var passwordLogin = GameObject.Find("LoginInputPassword").GetComponentInChildren<TMP_InputField>();

        PlayerPrefs.SetString("username", usernameLogin.text);
        PlayerPrefs.SetString("password", passwordLogin.text);

        network.CommandLogin(usernameLogin.text, passwordLogin.text);
    }

    public void SubmitRegister()
    {
        var usernameRegister = GameObject.Find("RegisterInputUsername").GetComponentInChildren<TMP_InputField>();
        var passwordRegister = GameObject.Find("RegisterInputPassword").GetComponentInChildren<TMP_InputField>();
        var emailRegister = GameObject.Find("RegisterInputEmail").GetComponentInChildren<TMP_InputField>();

        if (IsUsernameLong(usernameRegister.text) && IsPasswordLong(passwordRegister.text) && IsEmailValid(emailRegister.text))
        {
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
            network.Status = "username";
            return false;
        }
    }
}