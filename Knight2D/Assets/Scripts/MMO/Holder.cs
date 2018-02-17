using System.Security.Cryptography;
using System.Text;
using UnityEngine;

public class Holder : MonoBehaviour
{
    private Holder instance;

    public string PlayerToken { get; set; }
    public string PlayerUsername { get; set; }
    public string PlayerEmail { get; set; }
    public string secret = "THISISMYSECRETSTRING123456789UNITYMMOSWAG";

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
        secret = SHA256HexHashString(secret);
    }

    private static string ToHex(byte[] bytes, bool upperCase)
    {
        StringBuilder result = new StringBuilder(bytes.Length * 2);
        for (int i = 0; i < bytes.Length; i++)
            result.Append(bytes[i].ToString(upperCase ? "X2" : "x2"));
        return result.ToString();
    }

    private static string SHA256HexHashString(string StringIn)
    {
        string hashString;
        using (var sha256 = SHA256Managed.Create())
        {
            var hash = sha256.ComputeHash(Encoding.Default.GetBytes(StringIn));
            hashString = ToHex(hash, false);
        }

        return hashString;
    }
}
