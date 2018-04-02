using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectFollow : MonoBehaviour
{
    public GameObject obj;

    void Start()
    {
        if (!obj)
        {
            obj = transform.parent.gameObject;
        }
    }

    void Update()
    {
        transform.position = obj.transform.position;
    }
}
