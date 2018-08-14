using UnityEngine;

[CreateAssetMenu(fileName = "Attack", menuName = "Attack")]
public class Attack : ScriptableObject {
    public float attackSpeed;
    public float attacksPerSecond;
    public float attackDamage;
    public float attackDistance;
    public string attackName;
}
