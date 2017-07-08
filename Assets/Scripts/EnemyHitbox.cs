using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyHitbox : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnCollisionEnter2D (Collision2D other)
	{
		if (other.gameObject.tag == "Player") 
		{
			Destroy (other.gameObject);
			NetworkManager.instance.GetComponent<NetworkManager> ().CommandPlayerSlay (other.gameObject.name);
		}
	}
}
