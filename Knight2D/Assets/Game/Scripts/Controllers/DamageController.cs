using UnityEngine;

public class DamageController : MonoBehaviour
{
    private float takeDamage;

    void OnTriggerEnter2D(Collider2D coll)
    {
        if (coll.gameObject.tag == "Enemy")
        {
            //var pc = gameObject.GetComponent<PlayerController>();
            //if (pc.canHit)
            //    pc.wasHit = true;
        }
    }

    void OnTriggerStay2D(Collider2D coll)
    {
        if (coll.gameObject.tag == "Enemy")
        {
            //var pc = gameObject.GetComponent<PlayerController>();
            //if (pc.canHit)
            //    pc.wasHit = true;
        }
    }
}
