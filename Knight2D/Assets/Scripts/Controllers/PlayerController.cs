using UnityEngine;
using Cinemachine;
using System.Collections.Generic;
using UnityStandardAssets.CrossPlatformInput;

public class PlayerController : MonoBehaviour
{
    private CinemachineVirtualCamera myCamera;
    private Rigidbody myRigidbody;
    private Animator myAnimator;
    private Vector2 lastMove;
    private Vector3 moveVelocity;
    private GameObject healthBar;
    private GameObject GUI;
    private RectTransform targetCanvas;
    private float dpsTimer = 0f;
    private float attackTimer = 0f;
    private float networkTimer = 0f;
    private float baseSpeed = 100f;
    private float updatesPerSecond = 10f;
    private float hitTimer = 0f;
    private float baseMaxHealth = 100f;
    private float baseMaxMana = 100f;
    private float lastdps = 0f;
    private List<string> jsonList = new List<string>();
    private List<float> dpsList = new List<float>();

    public bool wasHit = false;
    public bool canHit = true;

    public NetworkPlay network { get; set; }
    public float dps { get; set; }
    public float health { get; set; }
    public float mana { get; set; }
    public float exp { get; set; }
    public float maxHealth { get; set; }
    public float maxMana { get; set; }
    public string worldName { get; set; }
    public string zoneName { get; set; }
    public bool pause { get; set; }
    public string[] itemsArray { get; set; }
    public string[] skillsArray { get; set; }


#if MOBILE_INPUT
    //private FloatingJoystick joystickMovement, joystickAttack;
#endif

    void Start()
    {
        myCamera = GameObject.FindGameObjectWithTag("CMCamera").GetComponent<CinemachineVirtualCamera>();
        myCamera.Follow = transform;

        myRigidbody = GetComponent<Rigidbody>();
        myAnimator = GetComponent<Animator>();

        pause = false;

        GUI = GameObject.FindGameObjectWithTag("GameGUI");
        targetCanvas = GUI.GetComponent<RectTransform>();

        var res = Resources.Load<GameObject>("HealthBar");
        var pos = new Vector3(0, 0, 0);
        var rot = Quaternion.Euler(0, 0, 0);
        healthBar = Instantiate(res, pos, rot, GUI.transform);
        healthBar.name = gameObject.name;

#if MOBILE_INPUT
        //joystickMovement = GameObject.FindGameObjectWithTag("JoystickMove").GetComponent<FloatingJoystick>();
        //joystickAttack = GameObject.FindGameObjectWithTag("JoystickShoot").GetComponent<FloatingJoystick>();
#endif
    }

    void FixedUpdate()
    {
        myRigidbody.velocity = moveVelocity;
    }

    void Update()
    {
        #region Movement

        var moveH = 0f;
        var moveV = 0f;
        var playerMoving = false;
        var currentPosition = transform.position;
        var speed = baseSpeed;
        // TODO: Check items

#if MOBILE_INPUT
        //moveH = joystickMovement.Horizontal;
        //moveV = joystickMovement.Vertical;
#else
        moveH = CrossPlatformInputManager.GetAxisRaw("Horizontal");
        moveV = CrossPlatformInputManager.GetAxisRaw("Vertical");
#endif

        if (moveH != 0f)
        {
            lastMove.x = moveH;
            lastMove.y = 0f;
            playerMoving = true;
        }
        else if (moveV != 0f)
        {
            lastMove.x = 0f;
            lastMove.y = moveV;
            playerMoving = true;
        }
        else
        {
            speed = 0f;
        }

        var walkRadian = Mathf.Atan2(moveV, moveH);
        moveVelocity = new Vector3(Mathf.Cos(walkRadian) * speed, Mathf.Sin(walkRadian) * speed, 0f);

        #endregion

        #region Attacking

        var isAttacking = false;
        var attackRadian = 0f;
        AttackTypes.EnumAttacks attackType = 0; // TODO: attack filter

#if MOBILE_INPUT
        //isAttacking = joystickAttack.Horizontal != 0f || joystickAttack.Vertical != 0f;
        //if (isAttacking)
        //{
        //    attackType = "Fireball";
        //    attackRadian = Mathf.Atan2(joystickAttack.Vertical, joystickAttack.Horizontal);
        //}
#else
        isAttacking = CrossPlatformInputManager.GetAxisRaw("Fire1") != 0f;
        if (isAttacking)
        {
            attackType = AttackTypes.EnumAttacks.Fireball;
            var mousePosition = Camera.main.ScreenToWorldPoint(CrossPlatformInputManager.mousePosition);
            attackRadian = Mathf.Atan2(mousePosition.y - currentPosition.y, mousePosition.x - currentPosition.x);
        }
#endif
        // TODO: Get attacks
        if (attackType != 0)
        {
            var attack = AttackTypes.getAttackType(AttackTypes.EnumAttacks.Fireball);
            var tick = 1f / attack.attacksPerSecond;

            if (attackTimer > tick)
            {
                attackTimer = 0f;
                currentPosition.x = currentPosition.x + (Mathf.Cos(attackRadian) * 10);
                currentPosition.y = currentPosition.y + (Mathf.Sin(attackRadian) * 10);
                var res = Resources.Load<GameObject>(attackType.ToString());
                var pos = new Vector3(currentPosition.x, currentPosition.y, 0);
                var rot = Quaternion.Euler(0, 0, 0);
                var obj = Instantiate(res, pos, rot, transform);
                var oc = obj.GetComponent<AttackController>();
                oc.transform.Rotate(0f, 0f, attackRadian * Mathf.Rad2Deg);
                oc.Speed = attack.attackSpeed;
                oc.MaxDistance = attack.attackDistance;
                oc.Damage = attack.attackDamage;
                oc.Radian = attackRadian;
            }
        }

        attackTimer = attackTimer > 1f ? 1f : attackTimer + Time.deltaTime;

        dpsTimer += Time.deltaTime;
        var dpsTick = 1f;
        if (dpsTimer > dpsTick)
        {
            var totaldps = getTotal(dpsList);
            dps = (totaldps + lastdps) / 2;
            lastdps = dps < 1 ? 0 : dps;
            dpsList.Clear();
            dpsTimer = 0f;
        }

        #endregion

        #region Animation

        myAnimator.SetFloat("MoveX", moveH);
        myAnimator.SetFloat("MoveY", moveV);
        myAnimator.SetBool("PlayerMoving", playerMoving);
        myAnimator.SetFloat("LastMoveX", lastMove.x);
        myAnimator.SetFloat("LastMoveY", lastMove.y);

        #endregion

        #region Health

        maxHealth = baseMaxHealth;
        maxMana = baseMaxMana;

        if (health > 0f)
        {
            if (wasHit && canHit)
            {
                wasHit = false;
                canHit = false;
                health -= 1f;
                var sr = GetComponent<SpriteRenderer>();
                sr.color = new Color(1f, 1f, 1f, 0.5f);
            }
        }
        else
        {
            transform.position = new Vector3(0f, 0f, 0f);
            health = maxHealth;
        }

        if (!canHit)
        {
            hitTimer += Time.deltaTime;

            if (hitTimer > 1f)
            {
                hitTimer = 0f;
                canHit = true;
                var sr = GetComponent<SpriteRenderer>();
                sr.color = new Color(1f, 1f, 1f, 1f);
            }
        }

        var ViewportPosition = Camera.main.WorldToViewportPoint(transform.position);
        var WorldObject_ScreenPosition = new Vector2(
            ((ViewportPosition.x * targetCanvas.sizeDelta.x) - (targetCanvas.sizeDelta.x * 0.5f)),
            ((ViewportPosition.y * targetCanvas.sizeDelta.y) - (targetCanvas.sizeDelta.y * 0.5f)) - 32f);

        healthBar.GetComponent<RectTransform>().anchoredPosition = WorldObject_ScreenPosition;
        healthBar.GetComponentInChildren<UltimateStatusBar>().UpdateStatus(health, maxHealth);

        #endregion

        #region Network

        networkTimer += Time.deltaTime;
        var networkTick = 1f / updatesPerSecond;

        if (networkTimer > networkTick)
        {
            var jsonArray = jsonList.ToArray();
            network.CommandMove(currentPosition, (int)attackType, attackRadian, skillsArray, worldName, zoneName, health, mana, exp, itemsArray, speed, jsonArray);
            jsonList.Clear();
            networkTimer = 0f;
        }

        #endregion
    }

    public void enemyHit(AttackController.EnemyHit hit)
    {
        var json = JsonUtility.ToJson(hit);
        jsonList.Add(json);
        dpsList.Add(hit.damage);
    }

    public void addExp(GameObject o)
    {
        var distance = Vector3.Distance(o.transform.position, transform.position);
        if (distance < 250f)
        {
            var expToAdd = EnemyTypes.getEnemyType(1).exp;
            exp += expToAdd;

            var res = Resources.Load<GameObject>("FloatingText");
            var pos = new Vector3(0, 0, 0);
            var rot = Quaternion.Euler(0, 0, 0);
            var obj = Instantiate(res, pos, rot, GUI.transform);

            var ViewportPosition = Camera.main.WorldToViewportPoint(transform.position);
            var WorldObject_ScreenPosition = new Vector2(
            ((ViewportPosition.x * targetCanvas.sizeDelta.x) - (targetCanvas.sizeDelta.x * 0.5f) + Random.Range(-8, 8f)),
            ((ViewportPosition.y * targetCanvas.sizeDelta.y) - (targetCanvas.sizeDelta.y * 0.5f)) + 64f);

            obj.GetComponent<RectTransform>().anchoredPosition = WorldObject_ScreenPosition;
            obj.GetComponent<FloatingTextController>().setText(expToAdd.ToString(), FloatingTextController.EnumFloatingText.exp);
        }
    }

    private float getTotal(List<float> list)
    {
        float total = 0f;
        foreach (float f in list)
        {
            total += f;
        }
        return total;
    }
}
