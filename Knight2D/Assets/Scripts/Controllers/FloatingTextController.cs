using UnityEngine;
using TMPro;

public class FloatingTextController : MonoBehaviour
{
    public enum EnumFloatingText { exp, damage, item, boost }

    private Animator myAnimator;

    void Start()
    {
        myAnimator = GetComponentInChildren<Animator>();
        var clipInfo = myAnimator.GetCurrentAnimatorClipInfo(0);
        Destroy(gameObject, clipInfo[0].clip.length);
    }

    public void setText(string number, EnumFloatingText type)
    {
        var tmp = GetComponentInChildren<TextMeshProUGUI>();
        switch (type)
        {
            case EnumFloatingText.exp:
                tmp.text = "+" + number + " EXP";
                tmp.color = Color.green;
                break;
            default:
                tmp.text = ":(";
                tmp.color = Color.clear;
                break;
        }
    }
}