using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class OverlayGUI : MonoBehaviour
{
    public NetworkPlay network;
    public TextMeshProUGUI tickerText;
    public TextMeshProUGUI pingText;
    public TextMeshProUGUI playerNameText;
    public TextMeshProUGUI playerHealthText;
    public TextMeshProUGUI playerManaText;
    public TextMeshProUGUI playerLevelText;
    public TextMeshProUGUI dpsText;
    public TMP_InputField input;
    public GameObject chatObject;
    public GameObject pauseObject;
    public GameObject moveJoystick;
    public GameObject shootJoystick;
    public GameObject player;
    public Image playerHealthBar;
    public Image playerManaBar;
    public Image playerExpBar;
    private float colorTime = 0.5f;
    private float colorLerpTime = 0f;
    private bool shouldPause = false;
    private bool chatMouseOver = false;

    void Start()
    {

    }

    void Update()
    {
        tickerText.text = network.ticker;
        //var time = DateTime.Now.ToString("h:mm tt");

        var str = Mathf.Floor((network.avgPing) * 1000f).ToString();
        pingText.text = "Ping: " + str + "ms";

        if (player)
        {
            var pc = player.GetComponent<PlayerController>();
            dpsText.text = "DPS: " + Mathf.Floor(pc.dps).ToString();

            //playerHealthBar.fillAmount = pc.health / pc.maxHealth;
            //playerHealthText.text = pc.health + " / " + pc.maxHealth;
            //playerNameText.text = pc.gameObject.name;

            var level = ExpScale.FindLevel(pc.exp);
            var percent = ExpScale.FindPercent(pc.exp);
            //playerLevelText.text = level.ToString();
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
        else
        {
            player = GameObject.FindGameObjectWithTag("Player");
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
