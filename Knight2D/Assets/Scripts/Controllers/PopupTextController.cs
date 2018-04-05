using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PopupTextController : MonoBehaviour
{
    public enum EnumPopupText { exp, damage, item, boost }

    private Animator myAnimator;

    void Start()
    {
        myAnimator = GetComponentInChildren<Animator>();
        var clipInfo = myAnimator.GetCurrentAnimatorClipInfo(0);
        Destroy(gameObject, clipInfo[0].clip.length);
    }

    public void setText(string number, EnumPopupText type)
    {
        var tmp = GetComponentInChildren<TextMeshProUGUI>();
        switch (type)
        {
            case EnumPopupText.exp:
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