using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameGUI : MonoBehaviour
{
    private GameObject GUI;
    private RectTransform targetCanvas;

    void Start()
    {
        GUI = GameObject.FindGameObjectWithTag("GameGUI");
        targetCanvas = GUI.GetComponent<RectTransform>();
    }

    void Update()
    {

    }	
}
