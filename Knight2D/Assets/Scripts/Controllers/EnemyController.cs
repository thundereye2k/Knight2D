﻿using UnityEngine;

public class EnemyController : MonoBehaviour
{
    private Animator myAnimator;
    private Vector2 lastMove;
    private GameObject healthBar;
    private RectTransform targetCanvas;

    private float height;

    public float health { get; set; }
    public float maxHealth { get; set; }
    public string target { get; set; }
    public float speed { get; set; }
    public int attackType { get; set; }
    public Vector3 targetPosition { get; set; }
    public Vector3 serverPosition { get; set; }

    void Start()
    {
        myAnimator = GetComponent<Animator>();
        targetPosition = transform.position;

        var GUI = GameObject.FindGameObjectWithTag("GameGUI");
        targetCanvas = GUI.GetComponent<RectTransform>();

        var res = Resources.Load<GameObject>("HealthBar");
        var pos = new Vector3(0, 0, 0);
        var rot = Quaternion.Euler(0, 0, 0);
        healthBar = Instantiate(res, pos, rot, GUI.transform);
        healthBar.name = gameObject.name;

        height = EnemyTypes.getEnemyType(1).height;
    }

    void Update()
    {
        #region Movement

        var currentPosition = transform.position;
        var step = speed * Time.deltaTime;
        var playerMoving = false;
        var moveH = 0f;
        var moveV = 0f;

        if(serverPosition == new Vector3(0,0,0)) {
            Debug.Log("sfd");
        }

        transform.position = Vector3.MoveTowards(currentPosition, targetPosition, step);

        if (currentPosition == targetPosition)
        {
            var pon = Random.Range(0, 2) * 2 - 1;
            transform.position = new Vector3(currentPosition.x + (0.0001f * pon), currentPosition.y + (0.0001f * pon), 0f);
        }

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

        Vector2 ViewportPosition = Camera.main.WorldToViewportPoint(transform.position);
        Vector2 WorldObject_ScreenPosition = new Vector2(
        ((ViewportPosition.x * targetCanvas.sizeDelta.x) - (targetCanvas.sizeDelta.x * 0.5f)),
        ((ViewportPosition.y * targetCanvas.sizeDelta.y) - (targetCanvas.sizeDelta.y * 0.5f)) + height);
        healthBar.GetComponent<RectTransform>().anchoredPosition = WorldObject_ScreenPosition;
        healthBar.GetComponentInChildren<UltimateStatusBar>().UpdateStatus(health, maxHealth);
    }
}