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
    public GameObject chat, pause, move, shoot;
    public Image playerHealthBar, playerManaBar;

    private float colorTime = 0.5f, colorLerpTime = 0f;
    private bool shouldPause = false, chatMouseOver = false;

    void Start()
    {
        chat.SetActive(false);
        //chat.SetActive(true);
    }

    void OnGUI()
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
            playerLevelText.text = Mathf.Floor(pc.exp / 1000f).ToString();

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

            var images = chat.GetComponentsInChildren<Image>();
            foreach (Image image in images)
            {
                switch (image.gameObject.name)
                {
                    case "Panel":
                        image.color = Color.Lerp(new Color(0f, 0f, 0f, 0f), new Color(0f, 0f, 0f, 0.25f), percent);
                        break;
                    case "Scrollbar Vertical":
                        image.color = Color.Lerp(new Color(0f, 0f, 0f, 0f), new Color(1f, 1f, 1f, 1f), percent);
                        break;
                    case "Bottom Bar":
                        image.color = Color.Lerp(new Color(0f, 0f, 0f, 0f), new Color(1f, 1f, 1f, 1f), percent);
                        break;
                    case "Input":
                        image.color = Color.Lerp(new Color(0f, 0f, 0f, 0f), new Color(1f, 1f, 1f, 1f), percent);
                        break;
                    case "Handle":
                        image.color = Color.Lerp(new Color(0f, 0f, 0f, 0f), new Color(1f, 1f, 1f, 1f), percent);
                        break;
                    default:
                        break;
                }
            }
        }
        else if (!chatMouseOver)
        {
            colorLerpTime += Time.deltaTime;
            if (colorLerpTime > colorTime)
            {
                colorLerpTime = colorTime;
            }
            var percent = colorLerpTime / colorTime;

            var images = chat.GetComponentsInChildren<Image>();
            foreach (Image image in images)
            {
                switch (image.gameObject.name)
                {
                    case "Panel":
                        image.color = Color.Lerp(new Color(0f, 0f, 0f, 0.25f), new Color(0f, 0f, 0f, 0f), percent);
                        break;
                    case "Scrollbar Vertical":
                        image.color = Color.Lerp(new Color(1f, 1f, 1f, 1f), new Color(0f, 0f, 0f, 0f), percent);
                        break;
                    case "Bottom Bar":
                        image.color = Color.Lerp(new Color(1f, 1f, 1f, 1f), new Color(0f, 0f, 0f, 0f), percent);
                        break;
                    case "Input":
                        image.color = Color.Lerp(new Color(1f, 1f, 1f, 1f), new Color(0f, 0f, 0f, 0f), percent);
                        break;
                    case "Handle":
                        image.color = Color.Lerp(new Color(1f, 1f, 1f, 1f), new Color(0f, 0f, 0f, 0f), percent);
                        break;
                    default:
                        break;
                }
            }
        }
        else
        {
            colorLerpTime = 1f;
            chatMouseOver = false;
        }
    }

    public void QuitGame()
    {
        network.DisconnectFromServer();
    }

    public void ShowPasueMenu()
    {
        if (pause.activeSelf)
        {
            pause.SetActive(false);
            shouldPause = false;
        }
        else
        {
            pause.SetActive(true);
            shouldPause = true;
        }
    }

    #region Chat

    public void ShowChat()
    {
        if (chat.activeSelf)
        {
            chat.SetActive(false);
        }
        else
        {
            chat.SetActive(true);
        }
    }

    public void ChatSelected()
    {
        shouldPause = true;
        input.text = "";
    }

    public void ChatDeselected()
    {
        shouldPause = false;
        input.text = "";
    }

    public void ChatPointerEnter()
    {
        if (CrossPlatformInputManager.GetAxisRaw("Fire1") == 0f)
        {
            colorLerpTime = 0f;
            chatMouseOver = true;
        }
    }

    public void ChatPointerExit()
    {
        if (CrossPlatformInputManager.GetAxisRaw("Fire1") == 0f)
        {
            colorLerpTime = 0f;
            chatMouseOver = false;
        }
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
