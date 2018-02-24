using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    private NetworkMenu network;

    void Awake()
    {
        network = GameObject.FindGameObjectWithTag("NetworkMenu").GetComponent<NetworkMenu>();
        
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
        if (IsValidEmail(emailRegister.text) && IsPasswordLong(passwordRegister.text))
        {
            network.CommandRegister(usernameRegister.text, emailRegister.text, passwordRegister.text);
        }
    }

    private bool IsValidEmail(string email)
    {
        try
        {
            var addr = new System.Net.Mail.MailAddress(email);
            return addr.Address == email;
        }
        catch
        {
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
            return false;
        }
    }
}