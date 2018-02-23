using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PauseMenu : MonoBehaviour
{
    private NetworkPlay network;

    void Start()
    {
        network = GameObject.FindGameObjectWithTag("NetworkPlay").GetComponent<NetworkPlay>();
        if (!network)
        {
            Application.Quit();
        }
    }

    void OnGUI()
    {
        if(!Screen.fullScreen) {
            Screen.fullScreen = true;
        }
    }

    public void QuitGame()
    {
        network.DisconnectFromServer();
    }
}
