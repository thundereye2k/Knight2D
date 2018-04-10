using UnityEngine;

public class DrawSphere : MonoBehaviour
{
    public float radius;

    void OnDrawGizmos()
    {
        Gizmos.color = Color.yellow;
        Gizmos.DrawSphere(transform.position, radius);
    }
}
