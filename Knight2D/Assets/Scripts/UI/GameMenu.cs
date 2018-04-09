using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityStandardAssets.CrossPlatformInput;

public class GameMenu : MonoBehaviour
{
    public NetworkPlay network;
    public TextMeshProUGUI tickerText, pingText, dpsText, playerNameText, playerHealthText, playerManaText, playerLevelText;
    public TMP_InputField input;
    public GameObject chatObject, pauseObject, moveJoystick, shootJoystick;
    public Image playerHealthBar, playerManaBar, playerExpBar;

    private float colorTime = 0.5f, colorLerpTime = 0f;
    private bool shouldPause = false, chatMouseOver = false;

    void Start()
    {
        //chatObject.SetActive(false);
    }

    void Update()
    {
        tickerText.text = network.ticker;
        //var time = DateTime.Now.ToString("h:mm tt");

        var str = Mathf.Floor((network.avgPing) * 1000f).ToString();
        pingText.text = "Ping: " + str + "ms";

        var player = GameObject.FindGameObjectWithTag("Player");
        if (player)
        {
            var pc = player.GetComponent<PlayerController>();
            dpsText.text = pc.dps == 0f ? "DPS: 0" : "DPS: " + pc.dps.ToString();

            playerHealthBar.fillAmount = pc.health / pc.maxHealth;
            playerHealthText.text = pc.health + " / " + pc.maxHealth;
            playerNameText.text = pc.gameObject.name;

            var level = ExpScale.FindLevel(pc.exp);
            var percent = ExpScale.FindPercent(pc.exp);
            playerLevelText.text = level.ToString();
            playerExpBar.fillAmount = percent;

            if (shouldPause)
            {
                pc.pause = true;
            }
            else
            {
                pc.pause = false;
            }
        }

        if (chatMouseOver)
        {
            colorLerpTime += Time.deltaTime;
            if (colorLerpTime > colorTime)
            {
                colorLerpTime = colorTime;
            }
            var percent = colorLerpTime / colorTime;

            var images = chatObject.GetComponentsInChildren<Image>();
            foreach (Image image in images)
            {
                image.color = Color.Lerp(new Color(0f, 0f, 0f, 0f), new Color(0f, 0f, 0f, 0.25f), percent);
            }
        }
        else
        {
            colorLerpTime += Time.deltaTime;
            if (colorLerpTime > colorTime)
            {
                colorLerpTime = colorTime;
            }
            var percent = colorLerpTime / colorTime;

            var images = chatObject.GetComponentsInChildren<Image>();
            foreach (Image image in images)
            {
                image.color = Color.Lerp(new Color(0f, 0f, 0f, 0.25f), new Color(0f, 0f, 0f, 0f), percent);
            }
        }
    }

    public void QuitGame()
    {
        network.DisconnectFromServer();
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
        if (input.text.Length > 0f)
        {
            network.CommandMessage(input.text);
            input.text = "";
            //input.DeactivateInputField();
        }
        else if (input.text.Length == 0f)
        {
            input.text = "";
            input.DeactivateInputField();
        }
    }

    #endregion
}
