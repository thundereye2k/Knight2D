using UnityEngine;

public class ObjectFollow : MonoBehaviour
{
    public GameObject obj;    

    void Start()
    {
        if (!obj)
            obj = transform.parent.gameObject;
    }

    void Update()
    {
        if (obj)
            transform.position = obj.transform.position;
    }
}
