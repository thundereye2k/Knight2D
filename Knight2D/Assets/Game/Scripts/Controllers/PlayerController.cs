using UnityEngine;
using System.Collections.Generic;
using UnityStandardAssets.CrossPlatformInput;

public class PlayerController : MonoBehaviour
{
    [SerializeField]
    private Player player;
    private Rigidbody myRigidbody;
    private Animator myAnimator;
    private float attackTimer = 0f;
    private Vector2 lastMove = new Vector2(0f, 0f);
    private Vector3 moveVelocity = new Vector3(0f, 0f, 0f);

    public bool pause = false;

#if MOBILE_INPUT

    //private FloatingJoystick joystickMovement, joystickAttack;

#endif

    void Start()
    {
        myRigidbody = GetComponent<Rigidbody>();
        myAnimator = GetComponent<Animator>();
        //healthBar = gameManager.SpawnHealthBar(gameObject);
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
        var speed = player.baseSpeed;
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

        //UpdateHealthBar(gameObject, healthBar, health, maxHealth, height);

        #endregion

    }
}