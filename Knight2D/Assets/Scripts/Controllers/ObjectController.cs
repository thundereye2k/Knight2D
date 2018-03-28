using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectController : MonoBehaviour
{
    private Vector3 targetPosition;
    private float timer = 0f;
    private bool hit = false;

    public float Radian { get; set; }
    public float MaxDistance { get; set; }
    public float Speed { get; set; }
    public float Damage { get; set; }

    void Start()
    {
        var currentPostion = transform.position;
        targetPosition = new Vector3((Mathf.Cos(Radian) * MaxDistance) + currentPostion.x, (Mathf.Sin(Radian) * MaxDistance) + currentPostion.y, 0f);
    }

    void FixedUpdate()
    {
        var currentPostion = transform.position;
        transform.position = Vector3.MoveTowards(currentPostion, targetPosition, Speed);
    }

    void Update()
    {
        var currentPostion = transform.position;
        if (currentPostion == targetPosition)
        {
            hit = true;
        }

        if (hit)
        {
            Destroy(gameObject);
        }
    }

    void OnTriggerEnter2D(Collider2D coll)
    {
        if (coll.gameObject.tag == "Enemy")
        {
            hit = true;
            var pc = gameObject.GetComponentInParent<PlayerController>();
            if (pc)
            {
                pc.enemyHit(new EnemyHit(coll.gameObject.name, Damage));
            }
        }
        if (coll.gameObject.tag == "Objects")
        {
            hit = true;
        }
    }

    public class EnemyHit
    {
        public string username;
        public float damage;

        public EnemyHit(string username, float damage)
        {
            this.username = username;
            this.damage = damage;
        }
    }
}