using UnityEngine;

public class UpdateOtherPlayers : MonoBehaviour
{
    private AttackController attackController;
    private Rigidbody2D myRigidbody;
    private Animator myAnimator;
    private Vector3 targetPosition;
    private Vector2 lastMove;
    private string skillsJSON;
    private float moveH;
    private float moveV;
    private float health;
    private float mana;
    private string attackType;
    private float attackRadian;
    private float baseSpeed = 100f;
    private float attackTimer = 0f;

    void Start()
    {
        attackController = gameObject.GetComponent<AttackController>();

        myRigidbody = gameObject.GetComponent<Rigidbody2D>();
        myAnimator = gameObject.GetComponent<Animator>();

        targetPosition = transform.position;
    }

    void FixedUpdate()
    {
        var currentPosition = transform.position;
        var fps = 1f / Time.deltaTime;
        transform.position = Vector3.MoveTowards(currentPosition, targetPosition, baseSpeed / fps);
    }

    void Update()
    {
        #region Movement

        var currentPosition = transform.position;
        var playerMoving = false;
        var fps = 1f / Time.deltaTime;

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

        #endregion

        #region Attacking

        attackTimer += Time.deltaTime;
        var attackPerSecond = new TypeInfo().getPlayerAttacksPerSecond(attackType);
        var tick = 1f / attackPerSecond;

        if (attackType != "null")
        {
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

        myAnimator.SetFloat("MoveX", moveH);
        myAnimator.SetFloat("MoveY", moveV);
        myAnimator.SetBool("PlayerMoving", playerMoving);
        myAnimator.SetFloat("LastMoveX", lastMove.x);
        myAnimator.SetFloat("LastMoveY", lastMove.y);

        #endregion
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