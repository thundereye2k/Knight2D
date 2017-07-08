using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetPlayerName : MonoBehaviour {

	public TextMesh t;

	// Use this for initialization
	void Start () {
		
		t.text = transform.parent.name;

	}
	
	// Update is called once per frame
	void Update () {
		
	}

}
