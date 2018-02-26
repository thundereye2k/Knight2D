﻿using System.Collections;
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
    private float speed;
    private float timer = 0f;

    void Start()
    {
        animator = GetComponent<Animator>();
        targetPosition = transform.position;
        speed = new TypeInfo().getEnemyMoveSpeed(gameObject.name);

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
        healthBar.GetComponent<RectTransform>().anchoredPosition = WorldObject_ScreenPosition;
        healthBar.GetComponentInChildren<SimpleHealthBar>().UpdateBar(health, 100);
    }

    void FixedUpdate()
    {
        var currentPosition = transform.position;
        transform.position = Vector3.MoveTowards(currentPosition, targetPosition, speed);
    }

    void Update()
    {
        #region Movement

        var currentPosition = transform.position;
        var playerMoving = false;
        var moveH = 0f;
        var moveV = 0f;
        timer += Time.deltaTime;

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
        if (health <= 0f || timer >= 1f)
        {
            Destroy(healthBar);
            Destroy(gameObject);
        }
    }

    public void UpdatePosition(Vector3 targetPosition, string target, float health)
    {
        this.targetPosition = targetPosition;
        this.target = target;
        this.health = health;
        timer = 0f;
    }
}
