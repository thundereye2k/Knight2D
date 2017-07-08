using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using BestHTTP;
using BestHTTP.SocketIO;
using BestHTTP.WebSocket;

public class NetworkManager : MonoBehaviour {

	public SocketOptions options;
	public SocketManager manager;

	public static NetworkManager instance;
	public Canvas canvas;
	public InputField playerNameInput;
	public GameObject player;
	public GameObject otherPlayer;
	public GameObject skeleton; //temp

	private GameObject obCamera;
	private CameraControl camera;
		
	public List<UserJSON> allusers;
	public List<UserJSON> enemies;

	void Awake()
	{
		if (instance == null)
			instance = this;
		else if (instance != this)
			Destroy(gameObject);
		DontDestroyOnLoad(gameObject);
	}

	void Start ()
	{
		options = new SocketOptions ();
		options.ConnectWith = BestHTTP.SocketIO.Transports.TransportTypes.WebSocket;
		manager = new SocketManager(new Uri("https://knight2d.herokuapp.com/socket.io/"), options);
		//manager = new SocketManager(new Uri("localhost:5000/socket.io/"), options);

		manager.Socket.On("other player connected", OnOtherPlayerConnected);
		manager.Socket.On("play", OnPlay);
		manager.Socket.On("player move", OnPlayerMove);
		manager.Socket.On("player attack", OnPlayerAttack);
		manager.Socket.On("health", OnHealth);
		manager.Socket.On("other player disconnected", OnOtherPlayerDisconnect);
		manager.Socket.On("player attack", OnPlayerAttack);
		manager.Socket.On("player slay", OnPlayerSlay);
		manager.Socket.On("enemy spawn", OnEnemySpawn);
		manager.Socket.On("enemy move", OnEnemyMove);
		manager.Socket.On("enemy slay", OnEnemySlay);
	}

	public void JoinGame()
	{
		StartCoroutine (ConnectToServer());
	}

	#region Commands

	IEnumerator ConnectToServer()
	{
		yield return new WaitForSeconds(0.5f);
		manager.Socket.Emit("player connect");
		yield return new WaitForSeconds(1f);

		string playerName = playerNameInput.text;
		manager.Socket.Emit("play", playerName);
		GameObject panel = GameObject.Find ("Panel");
		panel.SetActive (false);

		GameObject p = GameObject.Find ("PlayerSpawn");
		float posx = p.transform.position.x;
		float posy = p.transform.position.y;
		manager.Socket.Emit ("player spawn", posx, posy);

		GameObject s = GameObject.Find ("EnemySpawn");
		Vector3 vec3 = s.transform.position;
		float minx = vec3.x - 200f;
		float maxx = vec3.x + 200f;
		float miny = vec3.y - 150f;
		float maxy = vec3.y + 150f;
		manager.Socket.Emit ("enemy spawn", minx, maxx, miny, maxy, vec3.x, vec3.y);	
	}

	public void CommandMove(Vector3 vec3, string name, bool playerMove, float moveH, float moveV)
	{
		int moving ;
		if (playerMove)
			moving = 1;
		else
			moving = 0;
		manager.Socket.Emit("player move", name, vec3.x, vec3.y, moving, moveH, moveV);
	}

	public void CommandSlay(string name)
	{
		manager.Socket.Emit("enemy slay", name);
	}

	public void CommandPlayerSlay(string name)
	{
		manager.Socket.Emit ("player slay", name);
	}

	public void CommandAttack(string name, bool attacking) 
	{
		int attack ;
		if (attacking)
			attack = 1;
		else
			attack = 0;
		manager.Socket.Emit("player attack", name, attack);

	}
	public void CommandHealthChange(GameObject playerFrom, GameObject playerTo, int healthChange, bool isEnemy)
	{
		print("health change cmd");
		UserJSON userJSON = new UserJSON("null", 0, 0, 0);
		manager.Socket.Emit("health");
	}

	#endregion

	#region Listening

	void OnOtherPlayerConnected (Socket socket, Packet packet, params object[] args)
	{
		print("someone else joined");
		string name = (string) args[0].ToString();	
		float positionx = (float) float.Parse(args[1].ToString());
		float positiony = (float) float.Parse(args[2].ToString());
		int health = (int) int.Parse (args [3].ToString());

		UserJSON userJSON = new UserJSON (name, positionx, positiony, health);
		Vector3 position = new Vector3(positionx, positiony, -1);
		Quaternion rotation = Quaternion.Euler(0, 0, 0);
		GameObject o = GameObject.Find(userJSON.name) as GameObject;
		if (o != null) {return;}
		GameObject p = Instantiate(otherPlayer, position, rotation) as GameObject;
		//Transform t = p.transform.Find("Healthbar Canvas");
		//Transform t1 = t.transform.Find("Player Name");
		//Text playerName = t1.GetComponent<Text>();
		//playerName.text = userJSON.name;
		p.name = userJSON.name;
		//Health h = p.GetComponent<Health>();
		//h.currentHealth = userJSON.health;
		//h.OnChangeHealth();
		allusers.Add (userJSON);
	}

	void OnPlay (Socket socket, Packet packet, params object[] args)
	{
		print("you joined");
		string name = (string) args[0].ToString();	
		float positionx = (float) float.Parse(args[1].ToString());
		float positiony = (float) float.Parse(args[2].ToString());
		int health = (int) int.Parse (args [3].ToString());

		UserJSON userJSON = new UserJSON (name, positionx, positiony, health);
		Vector3 position = new Vector3(positionx, positiony, -1);
		Quaternion rotation = Quaternion.Euler(0, 0, 0);
		GameObject p = Instantiate(player, position, rotation) as GameObject;
		p.name = userJSON.name;

		//Transform t = p.transform.Find("Healthbar Canvas");
		//Transform t1 = t.transform.Find("Player Name");
		//Text playerName = t1.GetComponent<Text>();
		//playerName.text = currentUserJSON.name;

		allusers.Add (userJSON);
		obCamera = GameObject.Find ("Main Camera");
		camera = obCamera.GetComponent <CameraControl> ();
		camera.CameraSetup (p);
	}

	void OnPlayerMove (Socket socket, Packet packet, params object[] args)
	{
		print ("other player moving");
		string name = (string) args[0].ToString();	
		float positionx = (float) float.Parse(args[1].ToString());
		float positiony = (float) float.Parse(args[2].ToString());
		int move = (int) int.Parse(args[3].ToString());
		float moveH = (float) float.Parse(args[4].ToString());
		float moveV = (float) float.Parse(args[5].ToString());

		bool playerMoving;
		if (move == 1f)
			playerMoving = true;
		else
			playerMoving = false;

		UserJSON userJSON = new UserJSON (name, positionx, positiony, 0);
		Vector2 position = new Vector2 (positionx, positiony);
		if (userJSON.name == playerNameInput.text) {
			return;
		}

		GameObject p = GameObject.Find(userJSON.name) as GameObject;
		if (p != null) {
			UpdateOther o = p.GetComponent<UpdateOther> ();
			o.updatePos (position, playerMoving, moveH, moveV);
		}
	}

	void OnPlayerAttack (Socket socket, Packet packet, params object[] args)
	{
		string name = (string) args[0].ToString();	
		int attack = (int) int.Parse(args[1].ToString());
		bool attacking;
		if (attack == 1f)
			attacking = true;
		else
			attacking = false;
		
		UserJSON userJSON = new UserJSON (name, 0, 0, 0);
		if (userJSON.name == playerNameInput.text) {
			return;
		}

		GameObject p = GameObject.Find(userJSON.name) as GameObject;
		if (p != null) {
			UpdateOther o = p.GetComponent<UpdateOther> ();
			o.updateAtk (attacking);
		}
	}

	void OnHealth (Socket socket, Packet packet, params object[] args)
	{
		print("changing the health");
		string name = (string)args [0];
		int health = (int) args [1];		
		// get the name of the player whose health changed
		UserJSON userJSON = new UserJSON(name, 0, 0, 0);
		GameObject p = GameObject.Find(userJSON.name);
		Health h = p.GetComponent<Health>();
		h.currentHealth = health;
		h.OnChangeHealth();
	}

	void OnOtherPlayerDisconnect (Socket socket, Packet packet, params object[] args)
	{
		print("user disconnected");
		string name = (string) args[0].ToString();	
		UserJSON userJSON = new UserJSON (name, 0, 0, 0);
		Destroy(GameObject.Find(userJSON.name));
	}

	void OnEnemySpawn (Socket socket, Packet packet, params object[] args)
	{
		print("enemy has spawned");
		string name = (string) args[0].ToString();	
		float positionx = (float) float.Parse(args[1].ToString());
		float positiony = (float) float.Parse(args[2].ToString());
		int health = (int) int.Parse (args [3].ToString());

		UserJSON userJSON = new UserJSON (name, positionx, positiony, health);
		Vector3 position = new Vector3(positionx, positiony, -1);
		Quaternion rotation = Quaternion.Euler(0, 0, 0);
		GameObject o = GameObject.Find(userJSON.name) as GameObject;
		if (o != null) {
			return;
		}
		GameObject e = Instantiate(skeleton, position, rotation) as GameObject;
		e.name = userJSON.name;

		//Transform t = p.transform.Find("Healthbar Canvas");
		//Transform t1 = t.transform.Find("Player Name");
		//Text playerName = t1.GetComponent<Text>();
		//playerName.text = userJSON.name;
		//em.isEnemy = false;
		//Health h = p.GetComponent<Health>();
		//h.currentHealth = userJSON.health;
		//h.OnChangeHealth();
		enemies.Add (userJSON);
	}

	void OnEnemyMove (Socket socket, Packet packet, params object[] args)
	{
		string name = (string) args[0].ToString();	
		float posx = (float) float.Parse(args[1].ToString());
		float posy = (float) float.Parse(args[2].ToString());

	
		UserJSON userJSON = new UserJSON (name, 0, 0, 0);
		Vector3 position = new Vector3(posx, posy, -1);

		GameObject e = GameObject.Find(userJSON.name) as GameObject;
		if (e != null)
		{
			e.transform.position = position;
			//UpdateEnemy o = e.GetComponent<UpdateEnemy>();
			//o.OnMoveThis (position);
		}
	}

	void OnEnemySlay (Socket socket, Packet packet, params object[] args)
	{
		string name = (string) args[0].ToString();
		UserJSON userJSON = new UserJSON (name, 0, 0, 0);
		Destroy(GameObject.Find(userJSON.name));
	}

	void OnPlayerSlay (Socket socket, Packet packet, params object[] args)
	{
		string name = (string) args[0].ToString();
		UserJSON userJSON = new UserJSON (name, 0, 0, 0);
		GameObject o = GameObject.Find (userJSON.name);
		Destroy (o);
	}
		
	#endregion

	#region JSONMessageClasses

	[Serializable]
	public class UserJSON
	{
		public string name;
		public float positionx;
		public float positiony;
		public int health;

		public UserJSON (string _name, float _positionx, float _positiony, int _health)
		{
			name = _name;
			positionx = _positionx;
			positiony = _positiony;
			health = _health;
		}
	}

	#endregion

	private void OnError(Socket socket, Packet packet, params object[] args)
	{
		Debug.Log(string.Format("--ERROR: {0} --\n", args[0]));
	}
}
