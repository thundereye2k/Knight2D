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
        public string[] skillsArray;
        public string[] itemsArray;
        public float positionX;
        public float positionY;
        public int attackType;
        public float attackRadian;
        public float health;
        public float mana;
        public float exp;
        public float gold;
        public float fame;
        public float speed;

        public PlayerJSON(string token, string username, float positionX, float positionY, int attackType, float attackRadian, string[] skillsArray, float health, float mana, string[] itemsArray, float exp, float gold, float fame, float speed)
        {
            this.token = token;
            this.username = username;
            this.positionX = positionX;
            this.positionY = positionY;
            this.attackType = attackType;
            this.attackRadian = attackRadian;
            this.skillsArray = skillsArray;
            this.itemsArray = itemsArray;
            this.health = health;
            this.mana = mana;
            this.exp = exp;
            this.gold = gold;
            this.fame = fame;
            this.speed = speed;
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
        public float speed;

        public OtherPlayerJSON(string username, float positionX, float positionY, int attackType, float attackRadian, string[] skillsArray, float speed)
        {
            this.username = username;
            this.positionX = positionX;
            this.positionY = positionY;
            this.attackType = attackType;
            this.attackRadian = attackRadian;
            this.skillsArray = skillsArray;
            this.speed = speed;
        }
    }

    public class EnemyJSON
    {
        public string enemyID;
        public string target;
        public float positionX;
        public float positionY;
        public float health;
        public float speed;
        public float maxHealth;
        public int attackType;
        public float targetPositionX;
        public float targetPositionY;

        public EnemyJSON(string enemyID, float positionX, float positionY, string target, float health, float speed, float maxHealth, int attackType, float targetPositionX, float targetPositionY)
        {
            this.enemyID = enemyID;
            this.positionX = positionX;
            this.positionY = positionY;
            this.target = target;
            this.health = health;
            this.speed = speed;
            this.maxHealth = maxHealth;
            this.attackType = attackType;
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
}
