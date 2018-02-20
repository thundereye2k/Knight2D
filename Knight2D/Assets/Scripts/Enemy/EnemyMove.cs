using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMove : MonoBehaviour
{
    private Animator animator;
    private Vector3 targetPosition;
    private Vector2 lastMove;
    private GameObject healthBar;
    private RectTransform targetCanvas;
    private string target;
    private float health;

    // Use this for initialization
    void Start()
    {
        animator = GetComponent<Animator>();
        targetPosition = transform.position;

        var GUI = GameObject.FindGameObjectWithTag("GUI");
        targetCanvas = GUI.GetComponent<RectTransform>();

        var res = Resources.Load("EnemyHealthBar", typeof(GameObject));
        var pos = new Vector3(0, 0, 0);
        var rot = Quaternion.Euler(0, 0, 0);
        healthBar = Instantiate(res, pos, rot, GUI.transform) as GameObject;
        healthBar.SetActive(false);
        healthBar.name = gameObject.name;
    }

    void OnGUI()
    {
        healthBar.SetActive(true);
        Vector2 ViewportPosition = Camera.main.WorldToViewportPoint(gameObject.transform.position);
        Vector2 WorldObject_ScreenPosition = new Vector2(
        ((ViewportPosition.x * targetCanvas.sizeDelta.x) - (targetCanvas.sizeDelta.x * 0.5f)),
        ((ViewportPosition.y * targetCanvas.sizeDelta.y) - (targetCanvas.sizeDelta.y * 0.5f)) + 64f);
        //now you can set the position of the ui element
        healthBar.GetComponent<RectTransform>().anchoredPosition = WorldObject_ScreenPosition;
    }

    // Update is called once per frame
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
            if (Mathf.Abs(Mathf.Cos(radian)) > Mathf.Abs(Mathf.Sin(radian)))
            {
                if (currentPosition.x < targetPosition.x)
                    moveH = 1f;
                else
                    moveH = -1f;
            }
            else
            {
                if (currentPosition.y < targetPosition.y)
                    moveV = 1f;
                else
                    moveV = -1f;
            }

            var speed = new TypeInfo().getEnemyMoveSpeed(gameObject.name);
            transform.position = Vector3.MoveTowards(currentPosition, targetPosition, speed);

            if (moveH != 0f)
            {
                lastMove.x = moveH;
                lastMove.y = 0f;
            }
            else
            {
                lastMove.x = 0f;
                lastMove.y = moveV;
            }
        }

        Debug.DrawLine(currentPosition, targetPosition, Color.black);

        #endregion

        #region Damage and Health

        var shb = healthBar.GetComponentInChildren<SimpleHealthBar>();
        shb.UpdateBar(health, 100);

        #endregion

        #region Animation

        animator.SetFloat("MoveX", moveH);
        animator.SetFloat("MoveY", moveV);
        animator.SetBool("PlayerMoving", playerMoving);
        animator.SetFloat("LastMoveX", lastMove.x);
        animator.SetFloat("LastMoveY", lastMove.y);

        #endregion
    }

    void LateUpdate()
    {
        if (health > 0f)
        {

        }
        else
        {
            Destroy(healthBar);
            Destroy(gameObject);
        }
    }

    public void UpdatePosition(Vector3 position, string target, float health)
    {
        targetPosition = position;
        this.target = target;
        this.health = health;
    }
}
