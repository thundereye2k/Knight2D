using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameMenu : MonoBehaviour
{
    [SerializeField]
    private GameObject fullScreenObject, networkObject, tickerObject, chatObject, sharderObject;
    private bool shouldPause = false;

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
#if UNITY_IOS || UNITY_ANDROID || UNITY_XBOXONE || UNITY_PS4
        fullScreenObject.SetActive(false);        
#endif

#if UNITY_STANDALONE || UNITY_WEBGL
        fullScreenObject.SetActive(true);
#endif
    }

    void Update()
    {
        var network = networkObject.GetComponent<NetworkPlay>();
        var ticker = tickerObject.GetComponent<TextMeshProUGUI>();
        ticker.SetText(network.ticker);

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
        var network = networkObject.GetComponent<NetworkPlay>();
        network.DisconnectFromServer();
    }

    public void ShouldFullscreen()
    {
        Screen.fullScreen = !Screen.fullScreen;
    }

    public void ShowChat()
    {
        var canvas = chatObject.GetComponent<Canvas>();
        if (canvas.enabled)
        {
            canvas.enabled = false;
            shouldPause = false;
        }
        else
        {
            canvas.enabled = true;
            shouldPause = true;
        }
    }

    public void sharderPanel()
    {
        if (sharderObject.activeSelf)
        {
            sharderObject.SetActive(false);
            shouldPause = false;
        }
        else
        {
            sharderObject.SetActive(true);
            shouldPause = true;
        }
    }
}
