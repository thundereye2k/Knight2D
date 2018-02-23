using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZoneUpdater : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D coll)
    {
        if (coll.gameObject.tag == "Player")
        {
            Debug.Log("Update zone: " + gameObject.name);
            var pc = coll.gameObject.GetComponent<PlayerController>();
            pc.Zone = gameObject.name;
        }
    }

    void OnTriggerExit2D(Collider2D coll)
    {
        if (coll.gameObject.tag == "Player")
        {
            Debug.Log("Update zone: " + gameObject.name);
            var pc = coll.gameObject.GetComponent<PlayerController>();
            pc.Zone = "safe";
        }
    }
}
