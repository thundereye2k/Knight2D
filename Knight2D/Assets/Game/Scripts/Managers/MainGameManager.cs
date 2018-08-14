using System.Collections.Generic;
using Cinemachine;
using TMPro;
using UnityEngine;

public class MainGameManager : MonoBehaviour
{
    public GameObject attacks, avatars, content, ingame;
    public RectTransform targetCanvas;
    public CinemachineVirtualCamera cameraCM;
    public CameraOrbit cameraOrbit;
    private NetworkPlay networkPlay;
    private PlayerController playerController;

    private bool isPaused = false;
    private float ping = 0f;
    private float timer = 0f;
    private float dpsLast = 0f;
    private float updatesPerSecond = 10f;
    public List<float> dpsList = new List<float>();
    private List<float> pingList = new List<float>();
    private List<string> jsonList = new List<string>();
    private int maxMessages = 100;
    private List<ClassesJSON.MessageObject> messageList = new List<ClassesJSON.MessageObject>();

    public float dps { get; private set; }
    public float avgPing { get; private set; }
    public string ticker { get; private set; }

    //networkPlay.CommandMove(transform.position, (int)attackType, attackRadian, skillsArray, health, mana, itemsArray, jsonList.ToArray());
    //networkPlay.SpawnAttack(gameObject, this, attack, attackRadian);


    void Awake()
    {
        networkPlay = new NetworkPlay(this);
    }

    void OnApplicationFocus(bool hasFocus)
    {
        isPaused = !hasFocus;
    }

    void OnApplicationPause(bool pauseStatus)
    {
        isPaused = pauseStatus;
        if (isPaused)
        {
            networkPlay.CommandDisconnect();
        }
    }

    void OnApplicationQuit()
    {
        PlayerPrefs.DeleteKey("token");
        Debug.Log("Application ending after " + Time.time + " seconds");
    }


    void Update()
    {
        ping += Time.deltaTime;
        timer += Time.deltaTime;
        pingList.Add(ping);
        if (timer > 1f)
        {
            avgPing = ExpScale.GetAverage(pingList);
            if (avgPing > 10f)
            {
                //CommandDisconnect();
            }
            pingList.Clear();

            var totaldps = ExpScale.GetTotal(dpsList);
            dps = (totaldps + dpsLast) / 2f;
            dpsLast = dps < 1f ? 0f : dps;
            dpsList.Clear();


            var networkTick = 1f / updatesPerSecond;

            if (timer > networkTick)
            {
            }

            cameraCM.gameObject.transform.rotation = Camera.main.transform.rotation;

            /*
            if (playerExpBar)
            {
                var str = Mathf.Floor(avgPing * 1000f).ToString();
                pingText.text = "Ping: " + str + "ms";
                tickerText.text = ticker;
                //dpsText.text = "DPS: " + Mathf.Floor(playerController.dps).ToString();
                time = DateTime.Now.ToString("h:mm tt");

                //playerHealthBar.fillAmount = playerController.health / playerController.maxHealth;
                //playerHealthText.text = playerController.health + " / " + playerController.maxHealth;
                //playerNameText.text = playerController.gameObject.name;

                //var level = ExpScale.FindLevel(playerController.exp);
                //var percent = ExpScale.FindPercent(playerController.exp);
                //playerLevelText.text = level.ToString();
                //playerExpBar.fillAmount = percent;
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
            */
        }
    }

    public void BuildMap(int[][] grid, int worldWidth, int worldLength)
    {
        StartCoroutine(TileController.CreateMap(grid, worldWidth, worldLength));
    }

    public void ResetPing()
    {
        ping = 0;
    }

    public void SetTicker(string ticker)
    {
        this.ticker = ticker;
    }

    public void SpawnPlayer(ClassesJSON.PlayerJSON data)
    {
        var pos = new Vector3(data.positionX, data.positionY, 0);
        var rot = new Quaternion(0, 0, 0, 0);
        var res = Resources.Load<GameObject>("Player");
        var obj = Instantiate(res, pos, rot, avatars.transform);
        obj.name = data.username;
        cameraCM.Follow = obj.transform;
        cameraOrbit.targetTransform = obj.transform;
        cameraOrbit.enableRotation = true;
    }

    public void UpdatePlayer(ClassesJSON.PlayerJSON data)
    {
        //playerController.exp = data.exp;
        //playerController.fame = data.fame;
        //playerController.gold = data.gold;
        // TODO: Add what server changes for the player
    }

    public void SpawnOtherPlayer(ClassesJSON.PlayerJSON data)
    {
        var res = Resources.Load<GameObject>("Avatar");
        var pos = new Vector3(data.positionX, data.positionY, 0f);
        var rot = Quaternion.Euler(0, 0, 0);
        var obj = Instantiate(res, pos, rot, avatars.transform);
        obj.name = data.username;

        var otherPlayerController = obj.GetComponent<OtherPlayerController>();
        otherPlayerController.targetPosition = new Vector3(data.positionX, data.positionY, 0f);
        otherPlayerController.attackRadian = data.attackRadian;
        otherPlayerController.attackType = data.attackType;
        otherPlayerController.attackRadian = data.attackRadian;
        otherPlayerController.skillsArray = data.skillsArray;
        //otherPlayerController.exp = data.exp;
        //otherPlayerController.fame = data.fame;
        //otherPlayerController.gold = data.gold;
        //otherPlayerController.health = data.health;
        //otherPlayerController.mana = data.mana;
    }

    public void UpdateOtherPlayer(GameObject gameObj, ClassesJSON.PlayerJSON data)
    {
        var otherPlayerController = gameObj.GetComponent<OtherPlayerController>();
        otherPlayerController.targetPosition = new Vector3(data.positionX, data.positionY, 0f);
        otherPlayerController.attackRadian = data.attackRadian;
        otherPlayerController.attackType = data.attackType;
        otherPlayerController.attackRadian = data.attackRadian;
        otherPlayerController.skillsArray = data.skillsArray;
        //otherPlayerController.exp = data.exp;
        //otherPlayerController.fame = data.fame;
        //otherPlayerController.gold = data.gold;
        //otherPlayerController.health = data.health;
        //otherPlayerController.mana = data.mana;
    }

    public void SpawnEnemy(ClassesJSON.EnemyJSON data)
    {
        var res = Resources.Load<GameObject>("Enemy");
        var pos = new Vector3(data.positionX, data.positionY, 0f);
        var rot = Quaternion.Euler(0, 0, 0);
        var obj = Instantiate(res, pos, rot, avatars.transform);
        obj.name = data.enemyID;

        var enemyController = obj.GetComponent<EnemyController>();
        enemyController.networkPlay = networkPlay;
        enemyController.targetPosition = new Vector3(data.targetPositionX, data.targetPositionY, 0f);
        enemyController.serverPosition = new Vector3(data.positionX, data.positionY, 0f);
        enemyController.health = data.health;
        enemyController.maxHealth = data.maxHealth;
        enemyController.speed = data.speed;
        enemyController.height = data.height;
        enemyController.attackType = data.attackType;
        enemyController.attackRadian = data.attackRadian;
    }

    public void UpdateEnemy(GameObject gameObj, ClassesJSON.EnemyJSON data)
    {
        var enemyController = gameObj.GetComponent<EnemyController>();
        enemyController.targetPosition = new Vector3(data.targetPositionX, data.targetPositionY, 0f);
        enemyController.serverPosition = new Vector3(data.positionX, data.positionY, 0f);
        enemyController.health = data.health;
        //enemyController.maxHealth = data.maxHealth;
        //enemyController.speed = data.speed;
        //enemyController.height = data.height;
        enemyController.attackType = data.attackType;
        enemyController.attackRadian = data.attackRadian;
    }

    public GameObject SpawnHealthBar(GameObject gameObj)
    {
        var str = "HealthBar";
        if (gameObj.tag == "Enemy")
        {
            str = "EnemyHealthBar";
        }
        var res = Resources.Load<GameObject>(str);
        var pos = new Vector3(0, 0, 0);
        var rot = Quaternion.Euler(0, 0, 0);
        var healthBar = Instantiate(res, pos, rot, ingame.transform);
        healthBar.name = gameObj.name;
        return healthBar;
    }

    public void UpdateHealthBar(GameObject gameObj, GameObject healthBar, float health, float maxHealth, float height)
    {
        var ViewportPosition = Camera.main.WorldToViewportPoint(gameObj.transform.position);
        var WorldObject_ScreenPosition = new Vector2(
            ((ViewportPosition.x * targetCanvas.sizeDelta.x) - (targetCanvas.sizeDelta.x * 0.5f)),
            ((ViewportPosition.y * targetCanvas.sizeDelta.y) - (targetCanvas.sizeDelta.y * 0.5f)) + height);

        healthBar.GetComponent<RectTransform>().anchoredPosition = WorldObject_ScreenPosition;
        healthBar.GetComponentInChildren<UltimateStatusBar>().UpdateStatus(health, maxHealth);
    }

    public void SpawnFloatingText(GameObject gameObj)
    {
        var distance = Vector3.Distance(gameObj.transform.position, gameObj.transform.position);
        if (distance < 250f)
        {
            //var expToAdd = EnemyTypes.getEnemyType(1).exp;
            //exp += expToAdd;

            var res = Resources.Load<GameObject>("FloatingText");
            var pos = new Vector3(0, 0, 0);
            var rot = Quaternion.Euler(0, 0, 0);
            var obj = Instantiate(res, pos, rot, ingame.transform);

            var ViewportPosition = Camera.main.WorldToViewportPoint(gameObj.transform.position);
            var WorldObject_ScreenPosition = new Vector2(
            ((ViewportPosition.x * targetCanvas.sizeDelta.x) - (targetCanvas.sizeDelta.x * 0.5f) + Random.Range(-8, 8f)),
            ((ViewportPosition.y * targetCanvas.sizeDelta.y) - (targetCanvas.sizeDelta.y * 0.5f)) + 64f);

            obj.GetComponent<RectTransform>().anchoredPosition = WorldObject_ScreenPosition;
            //obj.GetComponent<FloatingTextController>().setText(expToAdd.ToString(), FloatingTextController.EnumFloatingText.exp);
        }
    }
    public void SpawnAttack(GameObject gameObj, PlayerController playerController, AttackTypes attackType, float attackRadian)
    {
        var x = gameObj.transform.position.x + (Mathf.Cos(attackRadian) * 10);
        var y = gameObj.transform.position.y + (Mathf.Sin(attackRadian) * 10);
        var res = Resources.Load<GameObject>(attackType.attackName);
        var pos = new Vector3(x, y, 0);
        var rot = Quaternion.Euler(0, 0, 0);
        var obj = Instantiate(res, pos, rot, attacks.transform);
        var attackController = obj.GetComponent<AttackController>();
        attackController.transform.Rotate(0f, 0f, attackRadian * Mathf.Rad2Deg);
        attackController.speed = attackType.attackSpeed;
        attackController.maxDistance = attackType.attackDistance;
        attackController.damage = attackType.attackDamage;
        attackController.radian = attackRadian;
        attackController.playerController = playerController;
    }

    public void SpawnOtherAttack(GameObject gameObj, AttackTypes attackType, float attackRadian)
    {
        var x = gameObj.transform.position.x + (Mathf.Cos(attackRadian) * 10);
        var y = gameObj.transform.position.y + (Mathf.Sin(attackRadian) * 10);
        var res = Resources.Load<GameObject>(attackType.attackName);
        var pos = new Vector3(x, y, 0);
        var rot = Quaternion.Euler(0, 0, 0);
        var obj = Instantiate(res, pos, rot, attacks.transform);
        var attackController = obj.GetComponent<AttackController>();
        attackController.transform.Rotate(0f, 0f, attackRadian * Mathf.Rad2Deg);
        attackController.speed = attackType.attackSpeed;
        attackController.maxDistance = attackType.attackDistance;
        attackController.damage = attackType.attackDamage;
        attackController.radian = attackRadian;
    }

    public void SpawnMessage(ClassesJSON.MessageJSON data)
    {
        var source = "[Global] ";
        var author = "<b>" + data.username + "</b>: ";
        var text = APIHelper.FilterProfanity(data.message);

        if (messageList.Count >= maxMessages)
        {
            Destroy(messageList[0].obj.gameObject);
            messageList.Remove(messageList[0]);
        }

        var res = Resources.Load<GameObject>("Message");
        var obj = Instantiate(res, content.transform);
        var tmp = obj.GetComponentInChildren<TextMeshProUGUI>();
        var str = source + author + text;

        var messageObject = new ClassesJSON.MessageObject(str, obj);
        tmp.text = str;
        messageList.Add(messageObject);
    }

    public void EnemyHit(ClassesJSON.EnemyHitObject hit)
    {
        var json = JsonUtility.ToJson(hit);
        jsonList.Add(json);
        dpsList.Add(hit.damage);
    }
}
