using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackController : MonoBehaviour
{

    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void CreateAttack(float attackRadian, string attackType)
    {
        var currentPosition = gameObject.transform.position;
        var res = Resources.Load("Attack1", typeof(GameObject));
        var pos = new Vector3(currentPosition.x, currentPosition.y, 0);
        var rot = Quaternion.Euler(0, 0, 0);
        var obj = Instantiate(res, pos, rot, gameObject.transform) as GameObject;
        var ac = obj.GetComponent<AttackObject>();
        ac.Speed = new TypeInfo().getPlayerAttackSpeed(attackType);
        ac.Radian = attackRadian;
        ac.MaxDistance = 500f;
        ac.Damage = 10f;
    }
}
