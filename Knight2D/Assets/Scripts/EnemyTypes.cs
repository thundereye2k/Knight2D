using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyTypes
{
    public enum EnumEnemies { basic, golems }

    public float height;

    public EnemyTypes(float height)
    {
        height = this.height;
    }

    public static EnemyTypes getEnemyType(EnumEnemies enemyType)
    {
        EnemyTypes enemy;
        switch (enemyType)
        {
            case EnumEnemies.golems:
                enemy = new EnemyTypes(48f);
                break;
            default:
                enemy = new EnemyTypes(64f);
                break;
        }
        return enemy;
    }

    public static EnumEnemies getEnemyEnum(string username)
    {
        var str = username.Split(' ');
        var enemy = (EnumEnemies)Enum.Parse(typeof(EnumEnemies), str[0]);
        return enemy;
    }
}
