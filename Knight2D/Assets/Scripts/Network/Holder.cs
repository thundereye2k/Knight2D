using System.Security.Cryptography;
using System.Text;
using UnityEngine;

public class Holder : MonoBehaviour
{
    public string token { get; set; }
    public string username { get; set; }
    public bool warn { get; set; }

    void Awake()
    {
        // Dirty singleton
        if (FindObjectsOfType(GetType()).Length > 1)
        {
            Destroy(gameObject);
        }

        DontDestroyOnLoad(gameObject);
    }

    private void Start()
    {
        token = null;
        username = null;
        warn = false;
    }
}
