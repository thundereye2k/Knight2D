using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitBox : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D other)
	{
		if (other.gameObject.tag == "Enemy") 
		{
			Destroy (other.gameObject);
			NetworkManager.instance.GetComponent<NetworkManager> ().CommandSlay (other.gameObject.name);
		}

		if (other.gameObject.tag == "Player") 
		{
			Destroy (other.gameObject);
			NetworkManager.instance.GetComponent<NetworkManager> ().CommandPlayerSlay (other.gameObject.name);
		}
	}

}
