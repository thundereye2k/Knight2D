using UnityEngine;

public class AttackController : MonoBehaviour
{
    private Vector3 targetPosition;
    private bool hit = false;

    public float radian { get; set; }
    public float maxDistance { get; set; }
    public float speed { get; set; }
    public float damage { get; set; }
    public PlayerController playerController { get; set; }

    void Start()
    {
        targetPosition = new Vector3((Mathf.Cos(radian) * maxDistance) + transform.position.x, (Mathf.Sin(radian) * maxDistance) + transform.position.y, 0f);
    }

    void Update()
    {
        transform.position = Vector3.MoveTowards(transform.position, targetPosition, speed);

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
            if (playerController)
            {
                //playerController.EnemyHit(new ClassesJSON.EnemyHitObject(coll.gameObject.name, damage));
            }
        }

        if (coll.gameObject.tag == "Object")
        {
            hit = true;
        }
    }
}