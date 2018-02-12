using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitBox : MonoBehaviour
{

    public float force;

    void Start()
    {
        force = 20f;
    }
    void OnTriggerStay2D(Collider2D coll)
    {
        if (coll.gameObject.tag == "Enemy")
        {
            float radian = Mathf.Atan2(gameObject.transform.position.y - coll.gameObject.transform.position.y, gameObject.transform.position.x - coll.gameObject.transform.position.x);
            float movex = Mathf.Cos(radian) * force;
            float movey = Mathf.Sin(radian) * force;
            gameObject.transform.position = new Vector3(gameObject.transform.position.x + movex, gameObject.transform.position.y + movey, 0);
        }

        if (coll.gameObject.tag == "Player")
        {

        }
    }

}
