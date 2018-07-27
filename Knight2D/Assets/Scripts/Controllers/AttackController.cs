using UnityEngine;

public class AttackController : MonoBehaviour
{
    private Vector3 targetPosition;
    private GameObject source;
    private bool hit = false;

    public float Radian { get; set; }
    public float MaxDistance { get; set; }
    public float Speed { get; set; }
    public float Damage { get; set; }
    public GameObject Source { get; set; }

    void Start()
    {
        targetPosition = new Vector3((Mathf.Cos(Radian) * MaxDistance) + transform.position.x, (Mathf.Sin(Radian) * MaxDistance) + transform.position.y, 0f);
    }

    void Update()
    {
        transform.position = Vector3.MoveTowards(transform.position, targetPosition, Speed);

        if (transform.position == targetPosition)
        {
            hit = true;
        }

        if (hit)
        {
            Destroy(gameObject);
        }
    }

    void OnTriggerEnter(Collider coll)
    {
        if (coll.gameObject.tag == "Enemy")
        {
            hit = true;
            if (Source.tag == "Player")
            {
                var playerController = Source.GetComponent<PlayerController>();
                if (playerController)
                    playerController.enemyHit(new EnemyHit(coll.gameObject.name, Damage));
                else
                    Debug.LogError("No playerController");
            }
        }

        if (coll.gameObject.tag == "Object")
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