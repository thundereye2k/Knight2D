using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TypeInfo : MonoBehaviour
{
    public float getEnemyMoveSpeed(string name)
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

        public float getPlayerAttackSpeed(string name)
    {
        var speed = 1f;
        switch (name)
        {
            case "basic":
                speed = 10f;
                break;
            default:
                break;
        }
        return speed;
    }
}