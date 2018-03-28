using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageController : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D coll)
    {
        if (coll.gameObject.tag == "Player")
        {
            var pc = coll.gameObject.GetComponent<PlayerController>();
            if (pc.canHit)
                pc.wasHit = true;
        }
    }

    void OnTriggerStay2D(Collider2D coll)
    {
        if (coll.gameObject.tag == "Player")
        {
            var pc = coll.gameObject.GetComponent<PlayerController>();
            if (pc.canHit)
                pc.wasHit = true;
        }
    }
}
