using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    private NetworkMenu network;

    // Use this for initialization
    void Start()
    {
        network = GameObject.FindGameObjectWithTag("NetworkMenu").GetComponent<NetworkMenu>();
        if (!network)
        {
            Application.Quit();
        }
    }

    public void SubmitLogin()
    {
        var username = GameObject.Find("LoginUsername").GetComponentInChildren<TextMeshProUGUI>();
        var password = GameObject.Find("LoginPassword").GetComponentInChildren<TextMeshProUGUI>();
        Debug.Log(username.text);
        Debug.Log(password.text);
        network.CommandLogin(username.text, password.text);
    }

    public void SubmitRegister()
    {
        var username = GameObject.Find("RegisterUsername").GetComponentInChildren<TextMeshProUGUI>();
        var password = GameObject.Find("RegisterPassword").GetComponentInChildren<TextMeshProUGUI>();
        var email = GameObject.Find("RegisterEmail").GetComponentInChildren<TextMeshProUGUI>();
        Debug.Log(username.text);
        Debug.Log(password.text);
        Debug.Log(email.text);
        network.CommandRegister(username.text, email.text, password.text);
    }
}