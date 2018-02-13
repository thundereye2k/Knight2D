using UnityEngine;
using Cinemachine;

public class PlayerController : MonoBehaviour
{
    private Rigidbody2D myRigidbody;
    private Animator myAnimator;
    private Vector3 moveVelocity;
    private Vector2 lastMove;
    private float updatesPerSecond = 10f;
    private float baseMoveSpeed = 100f;
    private float timer = 0f;
    private Vector3 currentPosition;
    private float moveH;
    private float moveV;
    private float attackRadian;
    private float attackCounter;
    private string skillsJSON;
    private string attackType;
    private string world;
    private string zone;

    public NetworkPlay Net { get; set; }
    public float Health { get; set; }
    public float Mana { get; set; }

    void Start()
    {
        CinemachineVirtualCamera vCamera = GameObject.FindGameObjectWithTag("vCamera").GetComponent<CinemachineVirtualCamera>();
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

        currentPosition = transform.position;
        world = "test"; // TODO
        zone = "test"; // TODO
        moveH = Input.GetAxisRaw("Horizontal");
        moveV = Input.GetAxisRaw("Vertical");

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

        var mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        var attackRadian = Mathf.Atan2(mousePosition.y - currentPosition.y, mousePosition.x - currentPosition.x);
        var aimPosition = new Vector3(currentPosition.x + Mathf.Cos(attackRadian) * 100, currentPosition.y + Mathf.Sin(attackRadian) * 100, 0f);

        if (Input.GetAxisRaw("Fire1") > 0f)
        {
            attackType = "basic";
            skillsJSON = "test skill"; // TODO
            Debug.DrawLine(currentPosition, aimPosition, Color.blue);

            var resource = Resources.Load("Attack1", typeof(GameObject));
            var pos = new Vector3(currentPosition.x, currentPosition.y, 0);
            var rot = Quaternion.Euler(0, 0, 0);
            var attack = Instantiate(resource, pos, rot) as GameObject;
            var ac = attack.GetComponent<AttackController>();
            ac.Radian = attackRadian;
            ac.Speed = new TypeInfo().getPlayerAttackSpeed(attackType);
            ac.MaxDistance = baseMoveSpeed * 5;
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
            Net.CommandMove(currentPosition, moveH, moveV, lastMove, attackType, attackRadian, skillsJSON, world, zone, Health, Mana);
        }

        #endregion
    }
}
