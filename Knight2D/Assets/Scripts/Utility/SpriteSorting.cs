using UnityEngine;

public class SpriteSorting : MonoBehaviour
{
    private SpriteRenderer objectSR;

    void Start()
    {
        objectSR = GetComponent<SpriteRenderer>();
    }

    void Update()
    {
        objectSR.sortingOrder = -(int)transform.position.y; //(transform.position.y * 10);
    }
}
