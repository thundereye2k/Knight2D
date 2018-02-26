using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TypeInfo
{
    public float getEnemyMoveSpeed(string name)
    {
        var strArray = name.Split(' ');
        var speed = 1f;
        switch (strArray[0])
        {
            case "golems":
                speed = 0.8f;
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
                speed = 5f;
                break;
            default:
                break;
        }
        return speed;
    }

    public float getPlayerAttacksPerSecond(string name)
    {
        var speed = 1f;
        switch (name)
        {
            case "basic":
                speed = 5f;
                break;
            default:
                break;
        }
        return speed;
    }
}