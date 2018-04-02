using System;
using System.Text.RegularExpressions;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    public NetworkMenu network;
    public TMP_InputField loginUsername, loginPassword, registerUsername, registerEmail, registerPassword, registerVerify;
    public TextMeshProUGUI warnLogin, warnRegister;
    public Button loginSubmit, loginRegister, registerBack, registerSubmit, popupAccept;
    public GameObject Login, Regsiter, Popup;

    void Start()
    {
        var usernameStored = PlayerPrefs.GetString("username");
        var passwordStored = PlayerPrefs.GetString("password");

        if (usernameStored != null && passwordStored != null)
        {
            loginUsername.text = usernameStored;
            loginPassword.text = passwordStored;
        }

        loginSubmit.onClick.AddListener(SubmitLogin);
        loginRegister.onClick.AddListener(ToRegister);
        registerBack.onClick.AddListener(ToLogin);
        registerSubmit.onClick.AddListener(SubmitRegister);
        popupAccept.onClick.AddListener(AcceptPopup);
    }

    void LateUpdate()
    {
        if (network.Status == "warn")
        {
            if (!Popup.activeSelf)
            {
                Popup.SetActive(true);
            }
        }

        switch (network.Status)
        {
            // Login
            case "play":
                warnLogin.SetText("Login successful");
                warnLogin.color = new Color(0, 1, 0, 1);
                break;

            case "wrong":
                warnLogin.SetText("Username or password are incorrect");
                warnLogin.color = new Color(1, 0, 0, 1);
                break;

            case "notfound":
                warnLogin.SetText("Username does not exist");
                warnLogin.color = new Color(1, 0, 0, 1);
                break;

            // Register
            case "register":
                warnRegister.SetText("Registration successful");
                warnRegister.color = new Color(0, 1, 0, 1);
                break;

            case "duplicate":
                warnRegister.SetText("Username or email already exist");
                warnRegister.color = new Color(1, 0, 0, 1);
                break;

            case "password":
                warnRegister.SetText("Password needs to be greater then 8 characters");
                warnRegister.color = new Color(1, 0, 0, 1);
                break;

            case "username":
                warnRegister.SetText("Username needs to be between 3-16 characters");
                warnRegister.color = new Color(1, 0, 0, 1);
                break;

            case "email":
                warnRegister.SetText("Email address is not valid");
                warnRegister.color = new Color(1, 0, 0, 1);
                break;

            case "bad":
                warnRegister.SetText("This is why we can't have nice things :(");
                warnRegister.color = new Color(1, 0, 0, 1);
                break;

            case "nomatch":
                warnRegister.SetText("Passwords do not match");
                warnRegister.color = new Color(1, 0, 0, 1);
                break;

            // Error
            case "error":
                warnLogin.SetText("Well this isn't good... it broke :(");
                warnLogin.color = new Color(1, 0, 0, 1);
                warnRegister.SetText("Well this isn't good... it broke :(");
                warnRegister.color = new Color(1, 0, 0, 1);
                break;

            default:
                warnLogin.SetText("");
                warnLogin.color = new Color(0, 0, 0, 0);
                warnRegister.SetText("");
                warnRegister.color = new Color(0, 0, 0, 0);
                break;
        }
    }

    private void AcceptPopup()
    {
        network.Status = "";
        Popup.SetActive(false);
    }

    private void ToRegister()
    {
        Login.SetActive(false);
        Regsiter.SetActive(true);
    }

    private void ToLogin()
    {
        Regsiter.SetActive(false);
        Login.SetActive(true);
    }

    private void SubmitLogin()
    {
        PlayerPrefs.SetString("username", loginUsername.text);
        PlayerPrefs.SetString("password", loginPassword.text);

        network.CommandLogin(loginUsername.text, loginPassword.text);
    }

    private void SubmitRegister()
    {
        if (IsProfanity(registerUsername.text) && IsUsernameLong(registerUsername.text) && IsPasswordLong(registerPassword.text) && IsEmailValid(registerEmail.text) && IsPasswordMatch(registerPassword.text, registerVerify.text))
        {
            network.CommandRegister(registerUsername.text, registerEmail.text, registerPassword.text);
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
        if (password.Length >= 8)
        {
            return true;
        }
        else
        {
            network.Status = "password";
            return false;
        }
    }

    private bool IsPasswordMatch(string password, string verify)
    {
        if (password == verify)
        {
            return true;
        }
        else
        {
            network.Status = "nomatch";
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

    private bool IsProfanity(string username)
    {
        var input = new BadWords().FilterProfanity(username);
        if (input == username)
        {
            return true;
        }
        else
        {
            network.Status = "bad";
            return false;
        }
    }
}