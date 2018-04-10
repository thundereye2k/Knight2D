using UnityEngine;

public class ZoneUpdater : MonoBehaviour
{
    public float distance;
    private PlayerController pc;

    void Update()
    {

        if (!pc)
        {
            var obj = GameObject.FindGameObjectWithTag("Player");
            if (obj)
                pc = obj.GetComponent<PlayerController>();
        }
        else
        {
            float distanceToTarget = Vector3.Distance(transform.position, pc.transform.position);
            if (distanceToTarget <= distance)
            {
                pc.zone = gameObject.name;
            }
            else
            {
                pc.zone = "safe";
            }
        }
    }
}
