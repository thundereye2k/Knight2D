using UnityEngine;

public class SpriteSorting : MonoBehaviour
{
    private SpriteRenderer objectSR;

    void Start()
    {
        objectSR = GetComponent<SpriteRenderer>();
        transform.rotation = Quaternion.Euler(0f, 0f, Camera.main.transform.rotation.eulerAngles.z);
    }

    void Update()
    {
        if (objectSR)
        {
            objectSR.sortingOrder = -(int)transform.position.y; //(transform.position.y * 10);
            transform.rotation = Quaternion.Euler(0f, 0f, Camera.main.transform.rotation.eulerAngles.z);
        }
    }
}
