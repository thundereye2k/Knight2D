using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    public Transform target;

    void FixedUpdate()
    {
        var currentPosition = target.position;
        transform.position = new Vector3(currentPosition.x, currentPosition.y, -1f);
    }
}