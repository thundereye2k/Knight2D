using UnityEngine;
using Cinemachine;
using System.Collections.Generic;
using CnControls;

public class PlayerController : MonoBehaviour
{
    private CinemachineVirtualCamera vCamera;
    private AttackController attackController;
    private Rigidbody2D myRigidbody;
    private Animator myAnimator;
    private Vector3 moveVelocity;
    private Vector2 lastMove;
    private Vector3 currentPosition;
    private float moveH;
    private float moveV;
    private float attackRadian;
    private string skillsJSON;
    private string attackType;
    private float updatesPerSecond = 10f;
    private float baseMoveSpeed = 100f;
    private float timer = 0f;
    private float attackTimer = 0f;
    private List<string> jsonList = new List<string>();

    public NetworkPlay Net { get; set; }
    public float Health { get; set; }
    public float Mana { get; set; }
    public string World { get; set; }
    public string Zone { get; set; }
    public bool Menu { get; set; }

    void Start()
    {
        attackController = gameObject.GetComponent<AttackController>();

        vCamera = GameObject.FindGameObjectWithTag("vCamera").GetComponent<CinemachineVirtualCamera>();
        vCamera.Follow = transform;

        myRigidbody = GetComponent<Rigidbody2D>();
        myAnimator = GetComponent<Animator>();

        World = "test";
        Zone = "safe";
        Menu = false;
    }

    void FixedUpdate()
    {
        myRigidbody.velocity = moveVelocity;
    }

    void Update()
    {
        #region Movement

        var moveFactor = 1f;
        var playerMoving = false;

        moveH = CnInputManager.GetAxisRaw("Horizontal");
        moveV = CnInputManager.GetAxisRaw("Vertical");
        currentPosition = transform.position;

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

        if (moveH != 0f && moveV != 0f)
        {
            moveFactor = Mathf.Sqrt(Mathf.Pow(moveH, 2) + Mathf.Pow(moveV, 2));
        }

        if (Menu)
        {
            moveH = 0f;
            moveV = 0f;
            lastMove.x = 0f;
            lastMove.y = 0f;
        }

        var moveSpeed = baseMoveSpeed * (1 / moveFactor);
        moveVelocity = new Vector3(moveH * moveSpeed, moveV * moveSpeed, 0f);

        #endregion

        #region Attacking

        var isAttacking = false;
        attackTimer += Time.deltaTime;
        attackRadian = 0f;
        attackType = "null"; // TODO
        skillsJSON = "IDK"; // TODO

#if UNITY_IOS || UNITY_ANDROID || UNITY_XBOXONE || UNITY_PS4
        if (CnInputManager.GetAxisRaw("Fire X") != 0f || CnInputManager.GetAxisRaw("Fire Y") != 0f)
        {
            isAttacking = true;
            attackRadian = Mathf.Atan2(CnInputManager.GetAxisRaw("Fire Y"), CnInputManager.GetAxisRaw("Fire X"));
        }
#endif

#if UNITY_STANDALONE || UNITY_WEBGL
        if (Input.GetMouseButton(0) || Input.GetMouseButton(1))
        {
            isAttacking = true;
            var mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            attackRadian = Mathf.Atan2(mousePosition.y - currentPosition.y, mousePosition.x - currentPosition.x);
        }
#endif   

        if (isAttacking && !Menu)
        {
            attackType = "basic"; // TODO
            var attackPerSecond = new TypeInfo().getPlayerAttacksPerSecond(attackType);
            var tick = 1f / attackPerSecond;

            if (attackTimer > tick)
            {
                attackTimer = 0f;
                attackController.CreateAttack(attackRadian, attackType);
                //var aimPosition = new Vector3(currentPosition.x + Mathf.Cos(attackRadian) * 100, currentPosition.y + Mathf.Sin(attackRadian) * 100, 0f);
                //Debug.DrawLine(currentPosition, aimPosition, Color.blue);
            }
        }

        if (attackTimer > 1f)
        {
            attackTimer = 1f;
        }

        #endregion

        #region Animation

        if (!Menu)
        {
            myAnimator.SetFloat("MoveX", moveH);
            myAnimator.SetFloat("MoveY", moveV);
            myAnimator.SetBool("PlayerMoving", playerMoving);
            myAnimator.SetFloat("LastMoveX", lastMove.x);
            myAnimator.SetFloat("LastMoveY", lastMove.y);
        }
        
        #endregion
    }

    void LateUpdate()
    {
        #region Network

        timer += Time.deltaTime;
        var tick = 1f / updatesPerSecond;

        if (timer > tick)
        {
            var jsonArray = jsonList.ToArray();
            Net.CommandMove(currentPosition, moveH, moveV, lastMove, attackType, attackRadian, skillsJSON, World, Zone, Health, Mana, jsonArray);
            jsonList.Clear();
            timer = 0f;
        }

        #endregion
    }

    public void enemyHit(AttackObject.EnemyHit hit)
    {
        var json = JsonUtility.ToJson(hit);
        jsonList.Add(json);
    }
}