using UnityEngine;

public class SpriteSorting : MonoBehaviour
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
