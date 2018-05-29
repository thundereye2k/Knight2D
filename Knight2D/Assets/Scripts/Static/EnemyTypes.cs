using System;

public class EnemyTypes
{
    public enum EnumEnemies { basic, golems }

    public float height;
    public float exp;

    public EnemyTypes(float height, float exp)
    {
        this.height = height;
        this.exp = exp;
    }

    public static EnemyTypes getEnemyType(int enemyType)
    {
        EnemyTypes enemy;
        switch (enemyType)
        {
            case (int)EnumEnemies.golems:
                enemy = new EnemyTypes(48f, 100f);
                break;
            default:
                enemy = new EnemyTypes(0f, 0f);
                break;
        }
        return enemy;
    }
}
