using UnityEngine;

public class OtherPlayerController : MonoBehaviour
{
    private Animator myAnimator;
    private Vector2 lastMove, moveVelocity;
    private float attackTimer = 0f, baseSpeed = 100f;

    public NetworkPlay network { get; set; }
    public Vector3 targetPosition { get; set; }
    public string attackType { get; set; }
    public float attackRadian { get; set; }
    public float speed { get; set; }
    public string itemsJSON { get; set; }

    void Start()
    {
        myAnimator = gameObject.GetComponent<Animator>();
        targetPosition = transform.position;
    }

    void FixedUpdate()
    {
        var currentPosition = transform.position;
        speed = speed != 0f ? speed : baseSpeed;
        var perc = 1f / (1f + network.avgPing);
        var step = speed * Time.fixedDeltaTime * perc;
        transform.position = Vector3.MoveTowards(currentPosition, targetPosition, step);
    }

    void Update()
    {
        #region Movement

        var currentPosition = transform.position;
        var playerMoving = false;
        var moveH = 0f;
        var moveV = 0f;

        if (currentPosition != targetPosition)
        {
            playerMoving = true;
            var radian = Mathf.Atan2(targetPosition.y - currentPosition.y, targetPosition.x - currentPosition.x);
            if (Mathf.Abs(Mathf.Cos(radian)) >= Mathf.Abs(Mathf.Sin(radian)))
                moveH = currentPosition.x < targetPosition.x ? 1f : -1f;
            else
                moveV = currentPosition.y < targetPosition.y ? 1f : -1f;
        }

        if (moveH != 0f)
        {
            lastMove.x = moveH;
            lastMove.y = 0f;
        }
        if (moveV != 0f)
        {
            lastMove.x = 0f;
            lastMove.y = moveV;
        }

        Debug.DrawLine(currentPosition, targetPosition, Color.yellow);

        #endregion

        #region Attacking

        if (attackType != "null")
        {
            var attack = new TypeInfo().getPlayerAttackInfo(attackType);
            var tick = 1f / attack.attacksPerSecond;
            if (attackTimer > tick)
            {
                attackTimer = 0f;
                currentPosition.x = currentPosition.x + (Mathf.Cos(attackRadian) * 10);
                currentPosition.y = currentPosition.y + (Mathf.Sin(attackRadian) * 10);
                var res = Resources.Load(attackType, typeof(GameObject));
                var pos = new Vector3(currentPosition.x, currentPosition.y, 0);
                var rot = Quaternion.Euler(0, 0, 0);
                var obj = Instantiate(res, pos, rot, transform) as GameObject;
                var oc = obj.GetComponent<ObjectController>();
                oc.transform.Rotate(0f, 0f, attackRadian * Mathf.Rad2Deg);
                oc.Speed = attack.attackSpeed;
                oc.MaxDistance = attack.attackDistance;
                oc.Damage = attack.attackDamage;
                oc.Radian = attackRadian;
            }
        }

        attackTimer = attackTimer > 1f ? 1f : attackTimer + Time.deltaTime;

        #endregion

        #region Animation

        myAnimator.SetFloat("MoveX", moveH);
        myAnimator.SetFloat("MoveY", moveV);
        myAnimator.SetBool("PlayerMoving", playerMoving);
        myAnimator.SetFloat("LastMoveX", lastMove.x);
        myAnimator.SetFloat("LastMoveY", lastMove.y);

        #endregion
    }

    public void DestroyObject()
    {
        Destroy(gameObject);
    }
}