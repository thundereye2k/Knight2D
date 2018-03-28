using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class EnemyController : MonoBehaviour
{
    private Animator myAnimator;
    private Vector2 lastMove;
    private GameObject healthBar;
    private RectTransform targetCanvas;

    public float height;

    public float health { get; set; }
    public float maxHealth { get; set; }
    public string target { get; set; }
    public float speed { get; set; }
    public bool attack { get; set; }
    public bool wait { get; set; }
    public Vector3 targetPosition { get; set; }
    public Vector3 serverPosition { get; set; }

    void Start()
    {
        myAnimator = GetComponent<Animator>();
        targetPosition = transform.position;

        var GUI = GameObject.FindGameObjectWithTag("HealthBars");
        targetCanvas = GUI.GetComponent<RectTransform>();

        var res = Resources.Load("EnemyHealthBar", typeof(GameObject));
        var pos = new Vector3(0, 0, 0);
        var rot = Quaternion.Euler(0, 0, 0);
        healthBar = Instantiate(res, pos, rot, GUI.transform) as GameObject;
        healthBar.SetActive(false);
        healthBar.name = gameObject.name;

        height = new TypeInfo().getHealthBarHeight(gameObject.name);
    }

    void OnGUI()
    {
        if (!healthBar.activeSelf)
            healthBar.SetActive(true);

        Vector2 ViewportPosition = Camera.main.WorldToViewportPoint(transform.position);
        Vector2 WorldObject_ScreenPosition = new Vector2(
        ((ViewportPosition.x * targetCanvas.sizeDelta.x) - (targetCanvas.sizeDelta.x * 0.5f)),
        ((ViewportPosition.y * targetCanvas.sizeDelta.y) - (targetCanvas.sizeDelta.y * 0.5f)) + height);
        healthBar.GetComponent<RectTransform>().anchoredPosition = WorldObject_ScreenPosition;
        healthBar.GetComponentInChildren<SimpleHealthBar>().UpdateBar(health, maxHealth);
    }

    void FixedUpdate()
    {
        var currentPosition = transform.position;
        var step = speed * Time.fixedDeltaTime;
        transform.position = Vector3.MoveTowards(currentPosition, targetPosition, step);

        if (currentPosition == targetPosition)
            transform.position = new Vector3(currentPosition.x + 0.0001f, currentPosition.y + 0.0001f, 0f);

    }

    void Update()
    {
        #region Movement

        var currentPosition = transform.position;
        var playerMoving = false;
        var moveH = 0f;
        var moveV = 0f;

        if (Vector3.Distance(currentPosition, targetPosition) > 1f)
        {
            playerMoving = true;
            var radian = Mathf.Atan2(targetPosition.y - currentPosition.y, targetPosition.x - currentPosition.x);
            if (Mathf.Abs(Mathf.Cos(radian)) >= Mathf.Abs(Mathf.Sin(radian)))
                moveH = currentPosition.x < targetPosition.x ? 1f : -1f;
            else
                moveV = currentPosition.y < targetPosition.y ? 1f : -1f;
        }

        if (moveH != 0)
        {
            lastMove.x = moveH;
            lastMove.y = 0f;
        }
        if (moveV != 0)
        {
            lastMove.x = 0f;
            lastMove.y = moveV;
        }

        Debug.DrawLine(currentPosition, targetPosition, Color.black);
        Debug.DrawLine(currentPosition, serverPosition, Color.red);

        #endregion

        #region Animation

        myAnimator.SetFloat("MoveX", moveH);
        myAnimator.SetFloat("MoveY", moveV);
        myAnimator.SetBool("PlayerMoving", playerMoving);
        myAnimator.SetFloat("LastMoveX", lastMove.x);
        myAnimator.SetFloat("LastMoveY", lastMove.y);

        #endregion

        if (health <= 0f)
        {
            Destroy(healthBar);
            Destroy(gameObject);
        }
    }

    public void DestroyObjects()
    {
        health = 0f;
    }
}