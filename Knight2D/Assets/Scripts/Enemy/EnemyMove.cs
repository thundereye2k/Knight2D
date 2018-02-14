using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMove : MonoBehaviour
{
    private Animator animator;
    private Vector3 targetPosition;
    private Vector2 lastMove;
    private string target;
    private float health;

    // Use this for initialization
    void Start()
    {
        animator = GetComponent<Animator>();
        targetPosition = transform.position;
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
        if (health < 0)
        {
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
