using UnityEngine;

public class ObjectFollow : MonoBehaviour
{
    public GameObject obj;

    void LateUpdate()
    {
        if (obj)
        {
            transform.position = obj.transform.position;
        }
    }
}
