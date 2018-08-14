using System.Text.RegularExpressions;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MainMenuManager : MonoBehaviour
{
    public TMP_InputField loginUsername, loginPassword, registerUsername, registerEmail, registerPassword, registerVerify;
    public TextMeshProUGUI warnLogin, warnRegister;
    private NetworkMenu networkMenu;
    private bool isPaused = false;

    void Awake()
    {
        networkMenu = new NetworkMenu(this);
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
            Application.Quit();
        }
    }

    void OnApplicationQuit()
    {
        PlayerPrefs.DeleteKey("token");
        Debug.Log("Application ending after " + Time.time + " seconds");
    }

    void Start()
    {
        var username = PlayerPrefs.GetString("username");
        var password = PlayerPrefs.GetString("password");

        if (username != null && password != null)
        {
            loginUsername.text = username;
            loginPassword.text = password;
        }
    }

    public void SetStatus(string status)
    {
        switch (status)
        {
            // Login
            case "login":
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

            // Error
            case "error":
                warnLogin.SetText("Well, this isn't good... it broke. :(");
                warnLogin.color = new Color(1, 0, 0, 1);
                warnRegister.SetText("Well, this isn't good... it broke. :(");
                warnRegister.color = new Color(1, 0, 0, 1);
                break;

            default:
                break;
        }
    }

    public void SubmitLogin()
    {
        networkMenu.CommandSalt(loginUsername.text, loginPassword.text);
    }

    public void SubmitRegister()
    {
        if (APIHelper.IsProfanity(registerUsername.text))
        {
            warnRegister.SetText("This is why we can't have nice things :(");
            warnRegister.color = new Color(1, 0, 0, 1);
        }
        else if (APIHelper.IsUsernameLong(registerUsername.text))
        {
            warnRegister.SetText("Username needs to be between 3-24 characters");
            warnRegister.color = new Color(1, 0, 0, 1);
        }
        else if (APIHelper.IsPasswordLong(registerPassword.text))
        {
            warnRegister.SetText("Password needs to be greater then 8 characters");
            warnRegister.color = new Color(1, 0, 0, 1);
        }
        else if (APIHelper.IsEmailValid(registerEmail.text))
        {
            warnRegister.SetText("Email address is not valid");
            warnRegister.color = new Color(1, 0, 0, 1);
        }
        else if (APIHelper.IsPasswordMatch(registerPassword.text, registerVerify.text))
        {
            warnRegister.SetText("Passwords do not match");
            warnRegister.color = new Color(1, 0, 0, 1);
        }
        else
        {
            networkMenu.CommandRegister(registerUsername.text, registerEmail.text, registerPassword.text);
        }
    }
}