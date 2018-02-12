using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpeed : MonoBehaviour
{
    public float getEnemySpeed(string name)
    {
        var strArray = name.Split(' ');
        var speed = 1f;
        switch (strArray[0])
        {
            case "golems":
                speed = 0.2f;
                break;
            default:
                break;
        }
        return speed;
    }
}