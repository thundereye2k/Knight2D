using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ChatMenu : MonoBehaviour
{
    public NetworkPlay network;
    public TMP_InputField input;

    public void SendChatMessage()
    {
        if (input.text.Length > 0)
        {
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
