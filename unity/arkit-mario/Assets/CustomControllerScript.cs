using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class CustomControllerScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Debug.Log("in start CustomControllerScript");
	}
	
	// Update is called once per frame
	void Update () {
		
	}


	public void Jump() {
		Debug.Log("in jump CustomControllerScript");
		CrossPlatformInputManager.SetButtonDown("Jump");
	}

	public void goRight() {
		Debug.Log("in goRight CustomControllerScript");
		CrossPlatformInputManager.SetAxisPositive("Horizontal");
	}
		
	public void goLeft() {
		Debug.Log("in goLeft CustomControllerScript");
		CrossPlatformInputManager.SetAxisNegative("Horizontal");
	}
}
