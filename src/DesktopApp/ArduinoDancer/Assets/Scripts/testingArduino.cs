﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO.Ports;
public class testingArduino : MonoBehaviour
{
    SerialPort stream = new SerialPort("COM3", 9600);

	// Use this for initialization
	void Start () {
        if (!stream.IsOpen)
        {
            Debug.Log("Stream is open");
            stream.Open();

        }
	}
	
	// Update is called once per frame
	void Update () {
        int res = 0;
        if (stream.IsOpen)
        {
            try
            {
                // waiter();
                res = stream.ReadChar();
                // res = stream.ReadByte();
                Debug.Log(res);
            }
            catch { };

        }

        if (res == 1)
        {
            Debug.Log("Left");
        }
        else if (res == 2)
        {
            Debug.Log("Down");

        }
        else if (res == 3)
        {
            Debug.Log("Up");

        }
        else if (res == 4)
        {
            Debug.Log("Right");

        }
	}
}