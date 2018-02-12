using UnityEngine;

public class Holder : MonoBehaviour
{
    private Holder instance;

    public string PlayerToken { get; set; }
    public string PlayerUsername { get; set; }
    public string PlayerEmail { get; set; }

    void Awake()
    {
        if (instance == null)
            instance = this;
        else if (instance != this)
            Destroy(gameObject);
        DontDestroyOnLoad(gameObject);
    }

    private void Start()
    {
        PlayerToken = null;
        PlayerUsername = null;
        PlayerEmail = null;
    }
}
