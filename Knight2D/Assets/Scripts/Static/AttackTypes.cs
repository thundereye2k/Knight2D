public class AttackTypes
{
    public enum EnumAttacks { basic, fireball }

    public float attackSpeed;
    public float attacksPerSecond;
    public float attackDamage;
    public float attackDistance;

    public AttackTypes(float attackSpeed, float attacksPerSecond, float attackDamage, float attackDistance)
    {
        this.attackSpeed = attackSpeed;
        this.attacksPerSecond = attacksPerSecond;
        this.attackDamage = attackDamage;
        this.attackDistance = attackDistance;
    }

    public static AttackTypes getAttackType(EnumAttacks attackType)
    {
        AttackTypes attack;
        switch (attackType)
        {
            case EnumAttacks.basic:
                attack = new AttackTypes(5f, 5f, 5f, 5f);
                break;
            case EnumAttacks.fireball:
                attack = new AttackTypes(5f, 10f, 10f, 200f);
                break;
            default:
                attack = new AttackTypes(1f, 1f, 1f, 1f);
                break;
        }
        return attack;
    }
}