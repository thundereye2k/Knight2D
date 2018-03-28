using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TypeInfo
{
    public AttackType getPlayerAttackInfo(string attackType)
    {
        var attack = new AttackType(1f, 1f, 1f, 1f);
        switch (attackType)
        {
            case "basic":
                attack.attackSpeed = 5f;
                attack.attacksPerSecond = 5f;
                attack.attackDamage = 5f;
                attack.attackDistance = 5f;
                break;
            case "fireball":
                attack.attackSpeed = 5f;
                attack.attacksPerSecond = 10f;
                attack.attackDamage = 10f;
                attack.attackDistance = 150f;
                break;
            default:
                break;
        }
        return attack;
    }

    public float getHealthBarHeight(string name)
    {
        var height = 64f;
        var str = name.Split();
        switch (str[0])
        {
            case "golems":
                height = 48f;
                break;
            default:
                break;
        }
        return height;
    }

    public class AttackType
    {
        public float attackSpeed;
        public float attacksPerSecond;
        public float attackDamage;
        public float attackDistance;

        public AttackType(float attackSpeed, float attacksPerSecond, float attackDamage, float attackDistance)
        {
            this.attackSpeed = attackSpeed;
            this.attacksPerSecond = attacksPerSecond;
            this.attackDamage = attackDamage;
            this.attackDistance = attackDistance;
        }
    }
}