using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ChatMenu : MonoBehaviour
{
    [SerializeField]
    private GameObject networkObject, inputObject;

    void Awake()
    {
        var network = networkObject.GetComponent<NetworkPlay>();

        if (!network)
        {
            Application.Quit();
        }
    }

    void Start()
    {
    }

    public void SendChatMessage()
    {
        var input = inputObject.GetComponent<TMP_InputField>();
        if (input.text.Length > 0)
        {
            var network = networkObject.GetComponent<NetworkPlay>();
            network.CommandMessage(input.text);
            input.text = "";
            input.DeactivateInputField();
            Debug.Log("SEND MESSAGE");

        }
        else if (input.text.Length == 0)
        {
            input.text = "";
            input.DeactivateInputField();
            Debug.Log("INPUT EMPTY");
        }
    }
}
