using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameHelper : MonoBehaviour
{
    public GameObject ingame;
    public GameObject attacks;
    public GameObject avatars;
    public GameObject content;
    public RectTransform targetCanvas;
    public CinemachineVirtualCamera cameraCM;
    public CameraOrbit cameraOrbit;
    public OverlayController overlayController;

    private int maxMessages = 100;
    private List<ClassesJSON.MessageObject> messageList = new List<ClassesJSON.MessageObject>();

    public string ticker { get; protected set; }

    public void SpawnPlayer(ClassesJSON.PlayerJSON data, NetworkPlay networkPlay)
    {
        var pos = new Vector3(data.positionX, data.positionY, 0);
        var rot = new Quaternion(0, 0, 0, 0);
        var res = Resources.Load<GameObject>("Player");
        var obj = Instantiate(res, pos, rot, avatars.transform);
        obj.name = data.username;
        cameraCM.Follow = obj.transform;
        cameraOrbit.targetTransform = obj.transform;
        cameraOrbit.enableRotation = true;

        var playerController = obj.GetComponent<PlayerController>();
        playerController.networkPlay = networkPlay;
        playerController.overlayController = overlayController;
        playerController.health = data.health;
        playerController.mana = data.mana;
        playerController.exp = data.exp;
        playerController.fame = data.fame;
        playerController.gold = data.gold;
        playerController.itemsArray = data.itemsArray;
        playerController.skillsArray = data.skillsArray;
    }

    public void UpdatePlayer(ClassesJSON.PlayerJSON data)
    {
        var playerController = overlayController.playerController;
        playerController.exp = data.exp;
        playerController.fame = data.fame;
        playerController.gold = data.gold;
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

    public void SpawnEnemy(ClassesJSON.EnemyJSON data, NetworkPlay networkPlay)
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
        var text = BadWords.FilterProfanity(data.message);

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
}
