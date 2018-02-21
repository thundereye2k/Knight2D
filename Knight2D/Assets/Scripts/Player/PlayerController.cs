using UnityEngine;
using Cinemachine;
using System.Collections.Generic;
using CnControls;

public class PlayerController : MonoBehaviour
{
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
    private string world;
    private string zone;
    private float updatesPerSecond = 10f;
    private float baseMoveSpeed = 100f;
    private float timer = 0f;
    private float attackTimer = 0f;
    private List<string> jsonList = new List<string>();
    private CinemachineVirtualCamera vCamera;

    public NetworkPlay Net { get; set; }
    public float Health { get; set; }
    public float Mana { get; set; }

    void Start()
    {
        vCamera = GameObject.FindGameObjectWithTag("vCamera").GetComponent<CinemachineVirtualCamera>();
        vCamera.Follow = transform;

        myRigidbody = GetComponent<Rigidbody2D>();
        myAnimator = GetComponent<Animator>();
    }

    void FixedUpdate()
    {
        myRigidbody.velocity = moveVelocity;
    }

    void Update()
    {
        #region Movement

        var moveSpeed = baseMoveSpeed;
        var playerMoving = false;
        var xAxis = CnInputManager.GetAxisRaw("Horizontal");
        var yAxis = CnInputManager.GetAxisRaw("Vertical");

        currentPosition = transform.position;
        world = "test"; // TODO
        zone = "test"; // TODO
        moveH = 0f;
        moveV = 0f;

        if (xAxis > 0.5f)
        {
            moveH = 1;
        }
        if (xAxis < -0.5f)
        {
            moveH = -1;
        }
        if (yAxis > 0.5f)
        {
            moveV = 1;
        }
        if (yAxis < -0.5f)
        {
            moveV = -1;
        }

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
            moveSpeed *= 1 / Mathf.Sqrt(2);
        }

        moveVelocity = new Vector3(moveH * moveSpeed, moveV * moveSpeed, 0f);

        #endregion

        #region Attacking

        var isAttacking = false;
        attackTimer += Time.deltaTime;
        attackRadian = 0f;
        attackType = "null"; // TODO
        skillsJSON = "IDK"; // TODO

        if (Input.GetMouseButton(0) || Input.GetMouseButton(1))
        {
            isAttacking = true;
            var mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            attackRadian = Mathf.Atan2(mousePosition.y - currentPosition.y, mousePosition.x - currentPosition.x);
        }
        else if (CnInputManager.GetAxisRaw("Fire X") != 0f || CnInputManager.GetAxisRaw("Fire Y") != 0f)
        {
            isAttacking = true;
            attackRadian = Mathf.Atan2(CnInputManager.GetAxisRaw("Fire Y"), CnInputManager.GetAxisRaw("Fire X"));
        }

        if (isAttacking)
        {
            attackType = "basic"; // TODO
            var attackPerSecond = new TypeInfo().getPlayerAttacksPerSecond(attackType);
            var tick = 1f / attackPerSecond;

            if (attackTimer > tick)
            {
                //var aimPosition = new Vector3(currentPosition.x + Mathf.Cos(attackRadian) * 100, currentPosition.y + Mathf.Sin(attackRadian) * 100, 0f);
                //Debug.DrawLine(currentPosition, aimPosition, Color.blue);
                attackTimer = 0f;
                var res = Resources.Load("Attack1", typeof(GameObject));
                var pos = new Vector3(currentPosition.x, currentPosition.y, 0);
                var rot = Quaternion.Euler(0, 0, 0);
                var obj = Instantiate(res, pos, rot, gameObject.transform) as GameObject;
                var ac = obj.GetComponent<AttackController>();
                ac.Radian = attackRadian;
                ac.Speed = new TypeInfo().getPlayerAttackSpeed(attackType);
                ac.MaxDistance = baseMoveSpeed * 5;
                ac.Damage = 10f;
            }
        }

        if (attackTimer > 1f)
        {
            attackTimer = 1f;
        }

        #endregion

        #region Animation

        myAnimator.SetFloat("MoveX", moveH);
        myAnimator.SetFloat("MoveY", moveV);
        myAnimator.SetBool("PlayerMoving", playerMoving);
        myAnimator.SetFloat("LastMoveX", lastMove.x);
        myAnimator.SetFloat("LastMoveY", lastMove.y);

        #endregion
    }

    void LateUpdate()
    {
        #region Network

        timer += Time.deltaTime;
        var tick = 1f / updatesPerSecond;

        if (timer > tick)
        {
            timer = 0f;
            var jsonArray = jsonList.ToArray();
            jsonList.Clear();
            Net.CommandMove(currentPosition, moveH, moveV, lastMove, attackType, attackRadian, skillsJSON, world, zone, Health, Mana, jsonArray);
        }

        #endregion
    }

    public void enemyHit(AttackController.EnemyHit hit)
    {
        var json = JsonUtility.ToJson(hit);
        jsonList.Add(json);
    }
}