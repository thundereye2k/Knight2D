using UnityEngine;

public class OtherPlayerController : MonoBehaviour
{
    private Animator myAnimator;
    private Vector2 lastMove, moveVelocity;
    private GameObject GUI;
    private RectTransform targetCanvas;
    private float attackTimer = 0f;
    private float baseSpeed = 100f;

    public Vector3 targetPosition { get; set; }
    public int attackType { get; set; }
    public float attackRadian { get; set; }
    public float speed { get; set; }
    public float avgPing { get; set; }
    public string[] itemsArray { get; set; }

    void Start()
    {
        myAnimator = gameObject.GetComponent<Animator>();
        targetPosition = transform.position;

        GUI = GameObject.FindGameObjectWithTag("GameGUI");
        targetCanvas = GUI.GetComponent<RectTransform>();
    }

    void FixedUpdate()
    {
        var currentPosition = transform.position;
        speed = speed != 0f ? speed : baseSpeed;
        //var perc = 1f / (1f + avgPing);
        //var step = speed * Time.fixedDeltaTime * perc;
        var step = speed * Time.fixedDeltaTime;
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

        if (attackType != 0)
        {
            var attack = AttackTypes.getAttackType((AttackTypes.EnumAttacks)attackType);
            var tick = 1f / attack.attacksPerSecond;
            if (attackTimer > tick)
            {
                attackTimer = 0f;
                var offsetX = currentPosition.x + (Mathf.Cos(attackRadian) * 10);
                var offsetY = currentPosition.y + (Mathf.Sin(attackRadian) * 10);
                var res = Resources.Load(attackType.ToString(), typeof(GameObject));
                var pos = new Vector3(offsetX, offsetY, 0f);
                var rot = Quaternion.Euler(0f, 0f, attackRadian * Mathf.Rad2Deg);
                var obj = Instantiate(res, pos, rot, transform) as GameObject;
                var oc = obj.GetComponent<AttackController>();
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

    public void addExp(GameObject o)
    {
        var distance = Vector3.Distance(o.transform.position, transform.position);
        if (distance < 250f)
        {
            var expToAdd = EnemyTypes.getEnemyType(1).exp;
            //exp += expToAdd;

            var res = Resources.Load("FloatingText", typeof(GameObject));
            var pos = new Vector3(0, 0, 0);
            var rot = Quaternion.Euler(0, 0, 0);
            var obj = Instantiate(res, pos, rot, GUI.transform) as GameObject;

            var ViewportPosition = Camera.main.WorldToViewportPoint(transform.position);
            var WorldObject_ScreenPosition = new Vector2(
            ((ViewportPosition.x * targetCanvas.sizeDelta.x) - (targetCanvas.sizeDelta.x * 0.5f) + Random.Range(-8, 8f)),
            ((ViewportPosition.y * targetCanvas.sizeDelta.y) - (targetCanvas.sizeDelta.y * 0.5f)) + 64f);

            obj.GetComponent<RectTransform>().anchoredPosition = WorldObject_ScreenPosition;
            obj.GetComponent<FloatingTextController>().setText(expToAdd.ToString(), FloatingTextController.EnumFloatingText.exp);
        }
    }

    public void DestroyObject()
    {
        Destroy(gameObject);
    }
}