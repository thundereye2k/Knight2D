using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PauseMenu : MonoBehaviour
{
    private NetworkPlay network;
    public GameObject fullScreen;

    void Awake()
    {
        network = GameObject.FindGameObjectWithTag("NetworkPlay").GetComponent<NetworkPlay>();

        if (!network)
        {
            Application.Quit();
        }
    }

    void Start()
    {
#if UNITY_IOS || UNITY_ANDROID || UNITY_XBOXONE || UNITY_PS4
        fullScreen.SetActive(false);
#endif

#if UNITY_STANDALONE || UNITY_WEBGL
        fullScreen.SetActive(true);
#endif
    }

    public void QuitGame()
    {
        network.DisconnectFromServer();
    }

    public void ShouldFullscreen()
    {
        Screen.fullScreen = !Screen.fullScreen;
    }
}
