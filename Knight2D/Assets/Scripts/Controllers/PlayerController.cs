using UnityEngine;
using System.Collections.Generic;
using UnityStandardAssets.CrossPlatformInput;

public class PlayerController : MonoBehaviour
{
    private Rigidbody myRigidbody;
    private Animator myAnimator;
    private GameObject healthBar;
    private float height = -40;
    private float updatesPerSecond = 10f;
    private float baseSpeed = 150f;
    private float maxHealth = 100f;
    private float maxMana = 100f;
    //private bool wasHit = false;
    //private bool canHit = true;
    private float dpsLast = 0f;
    private float dpsTimer = 0f;
    private float attackTimer = 0f;
    private float networkTimer = 0f;
    //private float hitTimer = 0f;
    private Vector2 lastMove = new Vector2(0f, 0f);
    private Vector3 moveVelocity = new Vector3(0f, 0f, 0f);
    private List<string> jsonList = new List<string>();
    public List<float> dpsList = new List<float>();

    public NetworkPlay networkPlay { get; set; }
    public OverlayController overlayController { get; set; }
    public float health { get; set; }
    public float mana { get; set; }
    public float exp { get; set; }
    public float fame { get; set; }
    public float gold { get; set; }
    public string[] itemsArray { get; set; }
    public string[] skillsArray { get; set; }
    public float dps { get; private set; }
    //public bool pause { get; private set; }


#if MOBILE_INPUT
    //private FloatingJoystick joystickMovement, joystickAttack;
#endif

    void Start()
    {
        overlayController.playerController = this;
        myRigidbody = GetComponent<Rigidbody>();
        myAnimator = GetComponent<Animator>();
        healthBar = networkPlay.SpawnHealthBar(gameObject);
        //pause = false;

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

        var angle = Camera.main.transform.rotation.eulerAngles.z * Mathf.Deg2Rad;
        var walkRadian = Mathf.Atan2(moveV, moveH);
        moveVelocity = new Vector3(Mathf.Cos(walkRadian + angle) * speed, Mathf.Sin(walkRadian + angle) * speed, 0f);

        #endregion

        #region Attacking

        // TODO: Get attacks
        var isAttacking = false;
        var attackRadian = 0f;
        var attackType = AttackTypes.EnumAttacks.None;

#if MOBILE_INPUT
        //isAttacking = joystickAttack.Horizontal != 0f || joystickAttack.Vertical != 0f;
        //attackRadian = Mathf.Atan2(joystickAttack.Vertical, joystickAttack.Horizontal);
#else
        isAttacking = CrossPlatformInputManager.GetAxisRaw("Fire1") != 0f;
        var mousePosition = Camera.main.ScreenToWorldPoint(CrossPlatformInputManager.mousePosition);
        attackRadian = Mathf.Atan2(mousePosition.y - transform.position.y, mousePosition.x - transform.position.x);

#endif
        attackTimer = attackTimer > 1f ? 1f : attackTimer + Time.deltaTime;
        if (isAttacking)
        {
            attackType = AttackTypes.EnumAttacks.Fireball;
            var attack = AttackTypes.GetAttackType(attackType);
            var tick = 1f / attack.attacksPerSecond;
            if (attackTimer > tick)
            {
                attackTimer = 0f;
                networkPlay.SpawnAttack(gameObject, this, attack, attackRadian);
            }
        }

        dpsTimer += Time.deltaTime;
        if (dpsTimer > 1f)
        {
            var totaldps = ExpScale.GetTotal(dpsList);
            dps = (totaldps + dpsLast) / 2f;
            dpsLast = dps < 1f ? 0f : dps;
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
        /*
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
        */

        networkPlay.UpdateHealthBar(gameObject, healthBar, health, maxHealth, height);

        #endregion

        #region Timers

        networkTimer += Time.deltaTime;
        var networkTick = 1f / updatesPerSecond;

        if (networkTimer > networkTick)
        {
            networkPlay.CommandMove(transform.position, (int)attackType, attackRadian, skillsArray, health, mana, itemsArray, jsonList.ToArray());
            jsonList.Clear();
            networkTimer = 0f;
        }

        #endregion
    }

    public void EnemyHit(ClassesJSON.EnemyHitObject hit)
    {
        var json = JsonUtility.ToJson(hit);
        jsonList.Add(json);
        dpsList.Add(hit.damage);
    }
}