using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

	public float moveSpeed;
	public float tempMoveSpeed;

	public bool playerMoving;
	public float attackTime;
	public bool attacking;
	public float attackTimeCounter;
	public float moveH;
	public float moveV;
	public bool moveCheck;
	public bool attackCheck;

	public Animator anim;
	public Vector2 lastMove;
	public Vector2 currentPosition;
	public Vector2 oldPosition;
	public Rigidbody2D playerRB;

	public BoxCollider2D hitUp;
	public BoxCollider2D hitLeft;
	public BoxCollider2D hitRight;
	public BoxCollider2D hitDown;

	// Use this for initialization
	void Start () {

		anim = GetComponent<Animator> ();
		playerRB = GetComponent<Rigidbody2D> ();

		oldPosition = transform.position;
		currentPosition = oldPosition;

		attacking = false;
		moveCheck = false;
		attackCheck = false;

	}

	// Update is called once per frame
	void Update () {

		playerMoving = false;

		hitLeft.enabled = false;
		hitUp.enabled = false;
		hitDown.enabled = false;
		hitRight.enabled = false;

		moveV = 0f;
		moveH = 0f;

		if (Input.GetAxisRaw ("Horizontal") > 0f || Input.GetAxisRaw ("Horizontal") < 0f) {
			//transform.Translate (new Vector3(Input.GetAxisRaw("Horizontal") * moveSpeed * Time.deltaTime, 0f, 0f ));
			playerRB.velocity = new Vector2 (Input.GetAxisRaw ("Horizontal") * tempMoveSpeed, playerRB.velocity.y);
			playerMoving = true;
			lastMove = new Vector2 (Input.GetAxisRaw ("Horizontal"), 0f);
			moveH = Input.GetAxisRaw ("Horizontal");
		}

		if (Input.GetAxisRaw ("Vertical") > 0f || Input.GetAxisRaw ("Vertical") < 0f) {
			//transform.Translate(new Vector3(0f, Input.GetAxisRaw("Vertical") * moveSpeed * Time.deltaTime, 0f));
			playerRB.velocity = new Vector2 (playerRB.velocity.x, Input.GetAxisRaw ("Vertical") * tempMoveSpeed);
			playerMoving = true;
			lastMove = new Vector2 (0f, Input.GetAxisRaw ("Vertical"));
			moveV = Input.GetAxisRaw ("Vertical");
		}

		if (Input.GetAxisRaw ("Horizontal") < 0.5f && Input.GetAxisRaw ("Horizontal") > -0.5f) 
			playerRB.velocity = new Vector2 (0f, playerRB.velocity.y);
	
		if (Input.GetAxisRaw ("Vertical") < 0.5f && Input.GetAxisRaw ("Vertical") > -0.5f)
			playerRB.velocity = new Vector2 (playerRB.velocity.x, 0f);

		if (Mathf.Abs (Input.GetAxisRaw ("Horizontal")) > 0.5f && Mathf.Abs (Input.GetAxisRaw ("Vertical")) > 0.5f) {
			tempMoveSpeed = moveSpeed * 0.7f;
		} else {
			tempMoveSpeed = moveSpeed;
		}

		if (Input.GetKeyDown (KeyCode.Space)) {
			attackTimeCounter = attackTime;
			attacking = true;
			string name = gameObject.name;
			NetworkManager.instance.GetComponent<NetworkManager> ().CommandAttack (name, attacking);
			attackCheck = true;
			anim.SetBool ("Attack", attacking);
			//playerRB.velocity = Vector2.zero;
			//moveSpeed = tempMoveSpeed / 2;
		} 

		if (attackTimeCounter > 0) {
			attackTimeCounter -= Time.deltaTime;
			print ("HITBOX");
			if (attackTimeCounter < 0.1) {
				if (lastMove.x > 0.5f)
					hitRight.enabled = true;
				if (lastMove.x < -0.5f)
					hitLeft.enabled = true;
				if (lastMove.y > 0.5f)
					hitUp.enabled = true;
				if (lastMove.y < -0.5f)
					hitDown.enabled = true;
			}
		}

		if (attackTimeCounter <= 0) {
			if (attackCheck) {
				attacking = false;
				anim.SetBool ("Attack", attacking);
				string name = gameObject.name;
				NetworkManager.instance.GetComponent<NetworkManager> ().CommandAttack (name, attacking);
				attackCheck = false;
			}
			//moveSpeed = tempMoveSpeed;
		}

		currentPosition = transform.position;
	
		if (currentPosition != oldPosition) {
			string name = gameObject.name;
			NetworkManager.instance.GetComponent<NetworkManager> ().CommandMove (transform.position, name, playerMoving, moveH, moveV);
			oldPosition = currentPosition;
			moveCheck = true;

		} else if (moveCheck) {			
			string name = gameObject.name;
			NetworkManager.instance.GetComponent<NetworkManager> ().CommandMove (transform.position, name, playerMoving, moveH, moveV);
			moveCheck = false;
		}

		anim.SetFloat ("MoveX", moveH);
		anim.SetFloat ("MoveY", moveV);
		anim.SetBool ("PlayerMoving", playerMoving);
		anim.SetFloat ("LastMoveX", lastMove.x);
		anim.SetFloat ("LastMoveY", lastMove.y);
	}
		
}
