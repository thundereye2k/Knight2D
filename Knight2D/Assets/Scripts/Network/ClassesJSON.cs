using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClassesJSON : MonoBehaviour
{
    public class UserJSON
    {
        public string username;
        public string email;
        public string passhash;
        public string salt;
        public string token;
        public string status;

        public UserJSON(string username, string email, string passhash, string salt, string token, string status)
        {
            this.username = username;
            this.email = email;
            this.passhash = passhash;
            this.salt = salt;
            this.status = status;
            this.token = token;
        }
    }

    public class PlayerJSON
    {
        public string token;
        public string username;
        public float positionX;
        public float positionY;
        public float health;
        public float mana;
        public float exp;
        public float gold;
        public float fame;
        public string[] skillsArray;
        public string[] itemsArray;
        public int attackType;
        public float attackRadian;

        public PlayerJSON(string token, string username, float positionX, float positionY, int attackType, float attackRadian, string[] skillsArray, float health, float mana, string[] itemsArray, float exp, float gold, float fame)
        {
            this.token = token;
            this.username = username;
            this.positionX = positionX;
            this.positionY = positionY;
            this.skillsArray = skillsArray;
            this.itemsArray = itemsArray;
            this.attackType = attackType;
            this.attackRadian = attackRadian;
            this.health = health;
            this.mana = mana;
            this.exp = exp;
            this.gold = gold;
            this.fame = fame;
        }
    }

    public class OtherPlayerJSON
    {
        public string username;
        public float positionX;
        public float positionY;
        public int attackType;
        public float attackRadian;
        public string[] skillsArray;

        public OtherPlayerJSON(string username, float positionX, float positionY, int attackType, float attackRadian, string[] skillsArray)
        {
            this.username = username;
            this.positionX = positionX;
            this.positionY = positionY;
            this.attackType = attackType;
            this.attackRadian = attackRadian;
            this.skillsArray = skillsArray;
        }
    }

    public class EnemyJSON
    {
        public string enemyID;
        public float positionX;
        public float positionY;
        public float health;
        public float height;
        public float speed;
        public float maxHealth;
        public int attackType;
        public float attackRadian;
        public float targetPositionX;
        public float targetPositionY;

        public EnemyJSON(string enemyID, float positionX, float positionY, float health, float speed, float attackRadian, float maxHealth, int attackType, float targetPositionX, float targetPositionY, float height)
        {
            this.enemyID = enemyID;
            this.positionX = positionX;
            this.positionY = positionY;
            this.health = health;
            this.maxHealth = maxHealth;
            this.height = height;
            this.speed = speed;
            this.attackType = attackType;
            this.attackRadian = attackRadian;
            this.targetPositionX = targetPositionX;
            this.targetPositionY = targetPositionY;
        }
    }

    public class MessageJSON
    {
        public string token;
        public string username;
        public string message;

        public MessageJSON(string token, string username, string message)
        {
            this.token = token;
            this.username = username;
            this.message = message;
        }
    }

    public class MapJSON
    {
        public int worldWidth;
        public int worldLength;
        public string[] worldString;

        public MapJSON(string[] worldString, int worldWidth, int worldLength)
        {
            this.worldWidth = worldWidth;
            this.worldLength = worldLength;
            this.worldString = worldString;
        }
    }

    public class MessageObject
    {
        public string str;
        public GameObject obj;

        public MessageObject(string str, GameObject obj)
        {
            this.str = str;
            this.obj = obj;
        }
    }

    public class EnemyHitObject
    {
        public string enemyID;
        public float damage;

        public EnemyHitObject(string enemyID, float damage)
        {
            this.enemyID = enemyID;
            this.damage = damage;
        }
    }
}
