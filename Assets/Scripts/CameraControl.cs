﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraControl : MonoBehaviour {

	public GameObject followTarget;
	public float moveSpeed;

	private Vector3 targetPos;

	// Use this for initialization
	void Start () {
		
	}

	// Update is called once per frame
	void LateUpdate () {
		if (followTarget != null) 
		{
			targetPos = new Vector3 (followTarget.transform.position.x, followTarget.transform.position.y, transform.position.z);
			transform.position = Vector3.Lerp (transform.position, targetPos, moveSpeed * Time.deltaTime);
		}
	}

	public void CameraSetup (GameObject o)
	{
		followTarget = o;
	}
}
