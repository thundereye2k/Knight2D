using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyTypes
{
    public enum EnumEnemies { basic, golems }

    public class Enemy
    {
        public float height;
        public float exp;

        public Enemy(float height, float exp)
        {
            this.height = height;
            this.exp = exp;
        }
    }

    public static Enemy getEnemyType(EnumEnemies enemyType)
    {
        Enemy enemy;
        switch (enemyType)
        {
            case EnumEnemies.golems:
                enemy = new Enemy(48f, 100f);
                break;
            default:
                enemy = new Enemy(0f, 0f);
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
