using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpdateOther : MonoBehaviour {

	public bool playerMoving;

	public float attackTime;
	public bool attacking;
	public bool playerMovingAttack;
	public float attackTimeCounter;

	public Vector2 currentPosition;
	public Vector2 oldPosition;
	public Vector2 lastMove;
	public Animator anim;

	public float moveHorizontal;
	public float moveVertical;

	// Use this for initialization
	void Start () {

		anim = GetComponent<Animator> ();

		oldPosition = transform.position;
		currentPosition = oldPosition;
	}

	// Update is called once per frame
	void Update () {

		if (moveHorizontal != 0f) {
			lastMove = new Vector2 (moveHorizontal, 0f);
		}

		if (moveVertical != 0f) {
			lastMove = new Vector2 (0f, moveVertical);

		}
			
		if (currentPosition != oldPosition) {
			transform.position = currentPosition;
			oldPosition = currentPosition;
		} 

		anim.SetBool ("Attack", attacking);
		anim.SetFloat ("MoveX", moveHorizontal);
		anim.SetFloat ("MoveY", moveVertical);
		anim.SetBool ("PlayerMoving", playerMoving);
		anim.SetFloat ("LastMoveX", lastMove.x);
		anim.SetFloat ("LastMoveY", lastMove.y);
	}

	void LateUpdate () {

	}

	public void updatePos (Vector2 pos, bool moving, float H, float V)
	{
		currentPosition = pos;
		playerMoving = moving;
		moveHorizontal = H;
		moveVertical = V;
		//gameObject.SetActive (true);
	}

	public void updateAtk (bool attack)
	{
		attacking = attack; 
	}

}
