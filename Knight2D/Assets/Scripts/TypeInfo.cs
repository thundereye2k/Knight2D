using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TypeInfo
{
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
                speed = 10f;
                break;
            default:
                break;
        }
        return speed;
    }
}