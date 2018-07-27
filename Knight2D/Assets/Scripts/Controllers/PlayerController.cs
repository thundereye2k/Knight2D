using UnityEngine;
using System.Collections.Generic;
using UnityStandardAssets.CrossPlatformInput;

public class PlayerController : MonoBehaviour
{
    private Rigidbody myRigidbody;
    private Animator myAnimator;
    private Vector2 lastMove;
    private Vector3 moveVelocity;
    private float timerAttack = 0f;
    //private float timerHit = 0f;
    private float timerNetwork = 0f;
    private float updatesPerSecond = 10f;
    private float baseSpeed = 100f;
    //private float baseMaxHealth = 100f;
    //private float baseMaxMana = 100f;
    //private bool wasHit = false;
    //private bool canHit = true;
    private List<string> jsonList = new List<string>();

    public NetworkPlay networkPlay { get; set; }
    public OverlayController overlayController { get; set; }
    public float health { get; set; }
    public float mana { get; set; }
    public float gold { get; set; }
    public float fame { get; set; }
    public float exp { get; set; }
    public bool pause { get; set; }
    public string[] itemsArray { get; set; }
    public string[] skillsArray { get; set; }


#if MOBILE_INPUT
    //private FloatingJoystick joystickMovement, joystickAttack;
#endif

    void Start()
    {
        overlayController = GameObject.FindGameObjectWithTag("Overlay").GetComponent<OverlayController>();
        overlayController.player = gameObject;
        if(!overlayController) {
            networkPlay.CommandDisconnect();
        }
        myRigidbody = GetComponent<Rigidbody>();
        myAnimator = GetComponent<Animator>();
        pause = false;

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

        var walkRadian = Mathf.Atan2(moveV, moveH);
        moveVelocity = new Vector3(Mathf.Cos(walkRadian) * speed, Mathf.Sin(walkRadian) * speed, 0f);

        #endregion

        #region Attacking

        // TODO: Get attacks
        var isAttacking = false;
        var attackRadian = 0f;
        var attackType = AttackTypes.EnumAttacks.Fireball;

#if MOBILE_INPUT
        //isAttacking = joystickAttack.Horizontal != 0f || joystickAttack.Vertical != 0f;
        //attackRadian = Mathf.Atan2(joystickAttack.Vertical, joystickAttack.Horizontal);
#else
        isAttacking = CrossPlatformInputManager.GetAxisRaw("Fire1") != 0f;
        var mousePosition = Camera.main.ScreenToWorldPoint(CrossPlatformInputManager.mousePosition);
        attackRadian = Mathf.Atan2(mousePosition.y - transform.position.y, mousePosition.x - transform.position.x);

#endif
        timerAttack = timerAttack > 1f ? 1f : timerAttack + Time.deltaTime;
        if (isAttacking)
        {
            var attack = AttackTypes.getAttackType(attackType);
            var tick = 1f / attack.attacksPerSecond;
            if (timerAttack > tick)
            {
                timerAttack = 0f;
                networkPlay.spawnAttack(gameObject, attack, attackRadian);
            }
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
            timerHit += Time.deltaTime;

            if (timerHit > 1f)
            {
                timerHit = 0f;
                canHit = true;
                var sr = GetComponent<SpriteRenderer>();
                sr.color = new Color(1f, 1f, 1f, 1f);
            }
        }
        */
        #endregion

        #region Network

        timerNetwork += Time.deltaTime;
        var networkTick = 1f / updatesPerSecond;
        if (timerNetwork > networkTick)
        {
            networkPlay.CommandMove(transform.position, (int)attackType, attackRadian, skillsArray, health, mana, itemsArray, speed, jsonList.ToArray());
            jsonList.Clear();
            timerNetwork = 0f;
        }

        #endregion
    }

    public void enemyHit(AttackController.EnemyHit hit)
    {
        var json = JsonUtility.ToJson(hit);
        jsonList.Add(json);
        overlayController.dpsList.Add(hit.damage);
    }
}