using UnityEngine;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{

    private NetworkMenu net;

    // Use this for initialization
    void Start()
    {
        net = GameObject.FindGameObjectWithTag("NetworkMenu").GetComponent<NetworkMenu>();
    }

    public void SubmitLogin()
    {
        InputField name = GameObject.Find("LoginUser").GetComponent<InputField>();
        InputField password = GameObject.Find("LoginPass").GetComponent<InputField>();
        net.CommandLogin(name.text, password.text);
    }

    public void SubmitReg()
    {
        InputField username = GameObject.Find("RegUser").GetComponent<InputField>();
        InputField email = GameObject.Find("RegEmail").GetComponent<InputField>();
        InputField password = GameObject.Find("RegPass").GetComponent<InputField>();
        net.CommandReg(username.text, email.text, password.text);
    }

}