using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackController : MonoBehaviour
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
        targetPosition = new Vector3((Mathf.Cos(Radian) * MaxDistance) + currentPostion.x, (Mathf.Sin(Radian) * MaxDistance) + currentPostion.y, 0);
    }

    void FixedUpdate()
    {
        var currentPostion = transform.position;
        transform.position = Vector3.MoveTowards(currentPostion, targetPosition, Speed);
    }

    void Update()
    {
        var currentPostion = transform.position;
        timer += Time.deltaTime;
        if (currentPostion == targetPosition || timer >= 5f)
        {
            hit = true;
        }
    }

    void OnTriggerEnter2D(Collider2D coll)
    {
        if (coll.gameObject.tag == "Enemy")
        {
            var pc = gameObject.GetComponentInParent<PlayerController>();
            var eh = new EnemyHit(coll.gameObject.name, Damage);
            pc.enemyHit(eh);
            hit = true;
        }
        if (coll.gameObject.tag == "Objects")
        {
            hit = true;
        }
    }

    void LateUpdate()
    {
        if (hit)
        {
            Destroy(gameObject);
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