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
    private float attackType;
    private float attackRadian;
    private float baseMoveSpeed = 100f;

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
            moveSpeed = baseMoveSpeed * 1 / Mathf.Sqrt(2);
        }

        moveVelocity = new Vector3(moveH * moveSpeed, moveV * moveSpeed, 0f);

        #endregion

        #region Attacking

        var aimPosition = new Vector3(currentPosition.x + Mathf.Cos(attackRadian) * 100, currentPosition.y + Mathf.Sin(attackRadian) * 100, 0f);

        if (attackType == 1f)
        {
            Debug.DrawLine(currentPosition, aimPosition, Color.green);
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
        if (Vector3.Distance(currentPosition, targetPosition) > 20f)
        {
            transform.position = Vector3.MoveTowards(currentPosition, targetPosition, 1f);
        }
    }

    public void UpdateOtherPlayer(Vector3 targetPosition, Vector2 lastMove, float moveH, float moveV, float attackType, float attackRadian, string skillsJSON, string world, string zone, float health, float mana)
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