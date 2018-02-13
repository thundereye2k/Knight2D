using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackController : MonoBehaviour
{
    private Vector3 targetPosition;

    public float Radian { get; set; }
    public float MaxDistance { get; set; }
    public float Speed { get; set; }

    void Start()
    {
        var currentPostion = transform.position;
        targetPosition = new Vector3((Mathf.Cos(Radian) * MaxDistance) + currentPostion.x, (Mathf.Sin(Radian) * MaxDistance) + currentPostion.y, 0);
    }

    void Update()
    {
        var currentPostion = transform.position;
        transform.position = Vector3.MoveTowards(currentPostion, targetPosition, Speed);

        if (currentPostion == targetPosition)
        {
            Destroy(gameObject);
        }
    }

    void OnTriggerEnter2D(Collider2D coll)
    {
        if (coll.gameObject.tag == "Enemy")
        {
            Debug.Log("Hit:" + coll.gameObject.name);
            Destroy(gameObject);
        }
    }
}