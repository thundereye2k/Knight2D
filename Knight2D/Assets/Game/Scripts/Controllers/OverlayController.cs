using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class OverlayController
{
    public TextMeshProUGUI tickerText;
    public TextMeshProUGUI pingText;
    public TextMeshProUGUI dpsText;

    //public TextMeshProUGUI playerNameText;
    //public TextMeshProUGUI playerHealthText;
    //public TextMeshProUGUI playerManaText;
    //public TextMeshProUGUI playerLevelText;
    public TMP_InputField input;
    public GameObject chatObject;
    public GameObject pauseObject;
    //public GameObject moveJoystick;
    //public GameObject shootJoystick;
    //public Image playerHealthBar;
    //public Image playerManaBar;
    public Image playerExpBar;

    private float colorTime = 0.5f;
    private float colorLerpTime = 0f;
    private bool shouldPause = false;
    private bool chatMouseOver = false;
    private string time = DateTime.Now.ToString("h:mm tt");

    //public PlayerController playerController { get; set; }

    public void QuitGame()
    {
        //networkPlay.CommandDisconnect();
    }

    public void ShowPasueMenu()
    {
        if (pauseObject.activeSelf)
        {
            pauseObject.SetActive(false);
            shouldPause = false;
        }
        else
        {
            pauseObject.SetActive(true);
            shouldPause = true;
        }
    }

    #region Chat

    public void ShowChat()
    {
        chatObject.SetActive(!chatObject.activeSelf);
    }

    public void ChatSelected()
    {
        shouldPause = true;
        input.text = "";
        colorLerpTime = 0f;
        chatMouseOver = true;
    }

    public void ChatDeselected()
    {
        shouldPause = false;
        input.text = "";
        colorLerpTime = 0f;
        chatMouseOver = false;
    }

    public void ChatSendMessage()
    {
        if (input.text.Length > 0)
        {
            //networkPlay.CommandMessage(input.text);
            input.text = "";
            input.DeactivateInputField();
        }
        else if (input.text.Length == 0)
        {
            input.text = "";
            input.DeactivateInputField();
        }
    }

    #endregion
}
