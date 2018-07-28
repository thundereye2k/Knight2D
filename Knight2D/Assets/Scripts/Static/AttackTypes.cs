public class AttackTypes
{
    public enum EnumAttacks { None, Fireball }

    public float attackSpeed;
    public float attacksPerSecond;
    public float attackDamage;
    public float attackDistance;
    public string attackName;

    public AttackTypes(float attackSpeed, float attacksPerSecond, float attackDamage, float attackDistance, string attackName)
    {
        this.attackSpeed = attackSpeed;
        this.attacksPerSecond = attacksPerSecond;
        this.attackDamage = attackDamage;
        this.attackDistance = attackDistance;
        this.attackName = attackName;
    }

    public static AttackTypes GetAttackType(EnumAttacks attackType)
    {
        AttackTypes attack;
        switch (attackType)
        {
            case EnumAttacks.Fireball:
                attack = new AttackTypes(10f, 10f, 10f, 250f, attackType.ToString());
                break;
            default:
                attack = new AttackTypes(0f, 0f, 0f, 0f, null);
                break;
        }
        return attack;
    }
}