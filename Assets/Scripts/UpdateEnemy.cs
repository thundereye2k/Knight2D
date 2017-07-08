using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpdateEnemy : MonoBehaviour {

	public int health;

	// Use this for initialization
	void Start () {

		health = 100;
	}
	
	// Update is called once per frame
	void Update () {

		if (health <= 0)
			Destroy (gameObject);
	}
		
	public void SetHealth (int h)
	{
		health = h;
	}
		
}
