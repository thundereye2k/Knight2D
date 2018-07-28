using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class OverlayController : MonoBehaviour
{
    public NetworkPlay networkPlay;
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

    public PlayerController playerController { get; set; }

    void Update()
    {
        if (playerController)
        {
            var str = Mathf.Floor(networkPlay.avgPing * 1000f).ToString();
            pingText.text = "Ping: " + str + "ms";
            tickerText.text = networkPlay.ticker;
            dpsText.text = "DPS: " + Mathf.Floor(playerController.dps).ToString();
            time = DateTime.Now.ToString("h:mm tt");

            //playerHealthBar.fillAmount = playerController.health / playerController.maxHealth;
            //playerHealthText.text = playerController.health + " / " + playerController.maxHealth;
            //playerNameText.text = playerController.gameObject.name;

            //var level = ExpScale.FindLevel(playerController.exp);
            var percent = ExpScale.FindPercent(playerController.exp);
            //playerLevelText.text = level.ToString();
            playerExpBar.fillAmount = percent;
        }

        if (shouldPause)
        {
            //pause = true;
        }
        else
        {
            //pause = false;
        }


        if (chatMouseOver)
        {
            colorLerpTime += Time.deltaTime;
            if (colorLerpTime > colorTime)
            {
                colorLerpTime = colorTime;
            }
            //var percent = colorLerpTime / colorTime;

            var images = chatObject.GetComponentsInChildren<Image>();
            foreach (Image image in images)
            {
                //image.color = Color.Lerp(new Color(0f, 0f, 0f, 0f), new Color(0f, 0f, 0f, 0.25f), percent);
            }
        }
        else
        {
            colorLerpTime += Time.deltaTime;
            if (colorLerpTime > colorTime)
            {
                colorLerpTime = colorTime;
            }
            //var percent = colorLerpTime / colorTime;

            var images = chatObject.GetComponentsInChildren<Image>();
            foreach (Image image in images)
            {
                //image.color = Color.Lerp(new Color(0f, 0f, 0f, 0.25f), new Color(0f, 0f, 0f, 0f), percent);
            }
        }
    }

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
            networkPlay.CommandMessage(input.text);
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
