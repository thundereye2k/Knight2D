using UnityEngine;

public class UpdateOtherPlayers : MonoBehaviour
{
    private Rigidbody2D myRigidbody;
    private Animator myAnimator;
    private Vector3 moveVelocity;
    private Vector3 targetPosition;
    private Vector2 lastMove;
    private string skillsJSON;
    private float moveH;
    private float moveV;
    private float health;
    private float mana;
    private string attackType;
    private float attackRadian;
    private float baseMoveSpeed = 100f;
    private float attackTimer = 0f;

    void Start()
    {
        myRigidbody = GetComponent<Rigidbody2D>();
        myAnimator = GetComponent<Animator>();

        targetPosition = transform.position;
    }

    void FixedUpdate()
    {
        myRigidbody.velocity = moveVelocity;
    }

    void Update()
    {
        #region Movement

        var currentPosition = transform.position;
        var moveSpeed = baseMoveSpeed;
        var playerMoving = false;

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

        attackTimer += Time.deltaTime;
        var attackPerSecond = new TypeInfo().getPlayerAttacksPerSecond(attackType);
        var tick = 1f / attackPerSecond;

        if (attackType != "null")
        {
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
            attackTimer = 0;
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
        var currentPosition = transform.position;
        //if (Vector3.Distance(currentPosition, targetPosition) > 20f)
        if (currentPosition != targetPosition)
        {
            transform.position = Vector3.MoveTowards(currentPosition, targetPosition, 0.001f);
        }
    }

    public void UpdateOtherPlayer(Vector3 targetPosition, Vector2 lastMove, float moveH, float moveV, string attackType, float attackRadian, string skillsJSON, string world, string zone, float health, float mana)
    {
        this.targetPosition = targetPosition;
        this.lastMove = lastMove;
        this.moveH = moveH;
        this.moveV = moveV;
        this.attackType = attackType;
        this.attackRadian = attackRadian;
        this.skillsJSON = skillsJSON;
        this.health = health;
        this.mana = mana;
    }
}