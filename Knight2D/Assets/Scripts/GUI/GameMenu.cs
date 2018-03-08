using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameMenu : MonoBehaviour
{
    public NetworkPlay network;
    public TextMeshProUGUI ticker;
    public Canvas chat;
    public GameObject sharder;
    public GameObject fullScreen;

    private bool shouldPause = false;

    void Start()
    {
#if UNITY_IOS || UNITY_ANDROID || UNITY_XBOXONE || UNITY_PS4
        fullScreen.SetActive(false);
#endif

#if UNITY_STANDALONE || UNITY_WEBGL
        fullScreen.SetActive(true);
#endif
    }

    void OnGUI()
    {
        ticker.text = network.Ticker;

        var player = GameObject.FindGameObjectWithTag("Player");
        if (player)
        {
            var pc = player.GetComponent<PlayerController>();
            if (shouldPause)
            {
                pc.Menu = true;
            }
            else
            {
                pc.Menu = false;
            }
        }
    }

    public void QuitGame()
    {
        network.DisconnectFromServer();
    }

    public void ShouldFullscreen()
    {
        Screen.fullScreen = !Screen.fullScreen;
    }

    public void ShowChat()
    {
        if (chat.enabled)
        {
            chat.enabled = false;
            shouldPause = false;
        }
        else
        {
            chat.enabled = true;
            shouldPause = true;
        }
    }

    public void sharderPanel()
    {
        if (sharder.activeSelf)
        {
            sharder.SetActive(false);
            shouldPause = false;
        }
        else
        {
            sharder.SetActive(true);
            shouldPause = true;
        }
    }
}
