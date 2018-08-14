using UnityEngine;

[CreateAssetMenu(fileName = "Player", menuName = "Player")]
public class Player : ScriptableObject
{
    public string username;
    public float health;
    public float mana;
    public float exp;
    public float level;
	public float baseSpeed;
    public GameObject healthBar;
}
