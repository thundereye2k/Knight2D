using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sorting : MonoBehaviour
{

    private SpriteRenderer objectSR;

    // Use this for initialization
    void Start()
    {
        objectSR = GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        objectSR.sortingOrder = -(int)transform.position.y; //(transform.position.y * 10);
    }
}
