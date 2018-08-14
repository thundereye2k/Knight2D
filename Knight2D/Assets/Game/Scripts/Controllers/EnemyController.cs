using UnityEngine;

public class EnemyController : MonoBehaviour
{
    private Animator myAnimator;
    private Vector2 lastMove;

    public NetworkPlay networkPlay { get; set; }
    public GameObject healthBar { get; set; }
    public Vector3 targetPosition { get; set; }
    public Vector3 serverPosition { get; set; }
    public float health { get; set; }
    public float maxHealth { get; set; }
    public float speed { get; set; }
    public float height { get; set; }
    public float attackRadian { get; set; }
    public int attackType { get; set; }

    void Start()
    {
        myAnimator = GetComponent<Animator>();
        targetPosition = transform.position;
        //healthBar = networkPlay.SpawnHealthBar(gameObject);
        height = 24f;
    }

    void Update()
    {
        #region Movement

        var step = speed * Time.deltaTime;
        var playerMoving = false;
        var moveH = 0f;
        var moveV = 0f;

        transform.position = Vector3.MoveTowards(transform.position, targetPosition, step);

        if (transform.position == targetPosition)
        {
            var pon = Random.Range(0, 2) * 2 - 1;
            transform.position = new Vector3(transform.position.x + (0.0001f * pon), transform.position.y + (0.0001f * pon), 0f);
        }
        else
        {
            playerMoving = true;
            var radian = Mathf.Atan2(targetPosition.y - transform.position.y, targetPosition.x - transform.position.x);
            if (Mathf.Abs(Mathf.Cos(radian)) >= Mathf.Abs(Mathf.Sin(radian)))
                moveH = transform.position.x < targetPosition.x ? 1f : -1f;
            else
                moveV = transform.position.y < targetPosition.y ? 1f : -1f;
        }

        if (moveH != 0)
        {
            lastMove.x = moveH;
            lastMove.y = 0f;
        }
        else if (moveV != 0)
        {
            lastMove.x = 0f;
            lastMove.y = moveV;
        }

        //networkPlay.UpdateHealthBar(gameObject, healthBar, health, maxHealth, height);
        Debug.DrawLine(transform.position, targetPosition, Color.black);
        Debug.DrawLine(transform.position, serverPosition, Color.red);

        #endregion

        #region Animation

        myAnimator.SetFloat("MoveX", moveH);
        myAnimator.SetFloat("MoveY", moveV);
        myAnimator.SetBool("PlayerMoving", playerMoving);
        myAnimator.SetFloat("LastMoveX", lastMove.x);
        myAnimator.SetFloat("LastMoveY", lastMove.y);

        #endregion
    }
}