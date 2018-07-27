using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour
{
    public GameObject GUI;
    public GameObject attacks;
    public GameObject avatars;
    public GameObject content;
    public RectTransform targetCanvas;
    public CinemachineVirtualCamera myCamera;
    public string ticker = "";

    private int maxMessages = 100;
    private List<ClassesJSON.MessageObject> messageList = new List<ClassesJSON.MessageObject>();

    protected void spawnPlayer(ClassesJSON.PlayerJSON data, NetworkPlay networkPlay)
    {
        var pos = new Vector3(data.positionX, data.positionY, 0);
        var rot = new Quaternion(0, 0, 0, 0);
        var res = Resources.Load<GameObject>("Player");

        var player = Instantiate(res, pos, rot, avatars.transform);
        player.name = data.username;
        myCamera.Follow = player.transform;

        var playerController = player.GetComponent<PlayerController>();
        playerController.health = data.health;
        playerController.mana = data.mana;
        playerController.exp = data.exp;
        playerController.fame = data.fame;
        playerController.gold = data.gold;
        playerController.itemsArray = data.itemsArray;
        playerController.skillsArray = data.skillsArray;
        playerController.networkPlay = networkPlay;
    }

    protected void spawnOtherPlayer(ClassesJSON.OtherPlayerJSON data)
    {
        var res = Resources.Load<GameObject>("Avatar");
        var pos = new Vector3(data.positionX, data.positionY, 0f);
        var rot = Quaternion.Euler(0, 0, 0);
        var obj = Instantiate(res, pos, rot, avatars.transform);
        obj.name = data.username;
    }

    protected void updateOtherPlayer(GameObject gameObj, ClassesJSON.OtherPlayerJSON data)
    {
        var otherPlayer = gameObj.GetComponent<OtherPlayerController>();
        otherPlayer.targetPosition = new Vector3(data.positionX, data.positionY, 0f);
        otherPlayer.attackRadian = data.attackRadian;
        otherPlayer.attackType = data.attackType;
        otherPlayer.skillsArray = data.skillsArray;
        otherPlayer.speed = data.speed;
    }

    protected void spawnEnemy(ClassesJSON.EnemyJSON data)
    {
        var res = Resources.Load<GameObject>("Enemy");
        var pos = new Vector3(data.positionX, data.positionY, 0f);
        var rot = Quaternion.Euler(0, 0, 0);
        var obj = Instantiate(res, pos, rot, avatars.transform);
        obj.name = data.enemyID;
    }

    public void updateEnemy(GameObject gameObj, ClassesJSON.EnemyJSON data)
    {
        var enemy = gameObj.GetComponent<EnemyController>();
        enemy.targetPosition = new Vector3(data.targetPositionX, data.targetPositionY, 0f);
        enemy.serverPosition = new Vector3(data.positionX, data.positionY, 0f);
        enemy.health = data.health;
        enemy.maxHealth = data.maxHealth;
        enemy.speed = data.speed;
        enemy.target = data.target;
        enemy.attackType = data.attackType;
    }

    protected GameObject spawnHealthBar(GameObject gameObj)
    {
        var res = Resources.Load<GameObject>("HealthBar");
        var pos = new Vector3(0, 0, 0);
        var rot = Quaternion.Euler(0, 0, 0);
        var healthBar = Instantiate(res, pos, rot, GUI.transform);
        healthBar.name = gameObj.name;
        return healthBar;
    }

    protected void updateHealthBar(GameObject gameObj, GameObject healthBar)
    {
        var ViewportPosition = Camera.main.WorldToViewportPoint(gameObj.transform.position);
        var WorldObject_ScreenPosition = new Vector2(
            ((ViewportPosition.x * targetCanvas.sizeDelta.x) - (targetCanvas.sizeDelta.x * 0.5f)),
            ((ViewportPosition.y * targetCanvas.sizeDelta.y) - (targetCanvas.sizeDelta.y * 0.5f)) - 48f);

        healthBar.GetComponent<RectTransform>().anchoredPosition = WorldObject_ScreenPosition;
        //HealthBar.GetComponentInChildren<UltimateStatusBar>().UpdateStatus(health, maxHealth);
    }

    protected void spawnFloatingText(GameObject gameObj)
    {
        var distance = Vector3.Distance(gameObj.transform.position, gameObj.transform.position);
        if (distance < 250f)
        {
            //var expToAdd = EnemyTypes.getEnemyType(1).exp;
            //exp += expToAdd;

            var res = Resources.Load<GameObject>("FloatingText");
            var pos = new Vector3(0, 0, 0);
            var rot = Quaternion.Euler(0, 0, 0);
            var obj = Instantiate(res, pos, rot, GUI.transform);

            var ViewportPosition = Camera.main.WorldToViewportPoint(gameObj.transform.position);
            var WorldObject_ScreenPosition = new Vector2(
            ((ViewportPosition.x * targetCanvas.sizeDelta.x) - (targetCanvas.sizeDelta.x * 0.5f) + Random.Range(-8, 8f)),
            ((ViewportPosition.y * targetCanvas.sizeDelta.y) - (targetCanvas.sizeDelta.y * 0.5f)) + 64f);

            obj.GetComponent<RectTransform>().anchoredPosition = WorldObject_ScreenPosition;
            //obj.GetComponent<FloatingTextController>().setText(expToAdd.ToString(), FloatingTextController.EnumFloatingText.exp);
        }
    }
    public void spawnAttack(GameObject gameObj, AttackTypes attackType, float attackRadian)
    {
        var x = gameObj.transform.position.x + (Mathf.Cos(attackRadian) * 10);
        var y = gameObj.transform.position.y + (Mathf.Sin(attackRadian) * 10);
        var res = Resources.Load<GameObject>(attackType.attackName);
        var pos = new Vector3(x, y, 0);
        var rot = Quaternion.Euler(0, 0, 0);
        var obj = Instantiate(res, pos, rot, attacks.transform);
        var attackController = obj.GetComponent<AttackController>();
        attackController.transform.Rotate(0f, 0f, attackRadian * Mathf.Rad2Deg);
        attackController.Speed = attackType.attackSpeed;
        attackController.MaxDistance = attackType.attackDistance;
        attackController.Damage = attackType.attackDamage;
        attackController.Radian = attackRadian;
        attackController.Source = gameObj;
    }

    protected void spawnMessage(ClassesJSON.MessageJSON data)
    {
        var source = "[Global] ";
        var author = "<b>" + data.username + "</b>: ";
        var text = BadWords.FilterProfanity(data.message);

        if (data.username == "")
        {
            ticker = text;
        }
        else
        {
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
}
