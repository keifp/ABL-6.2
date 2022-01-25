﻿using System.Collections;
using UnityEngine;
using UnityEngine.InputSystem;

namespace DigitalSalmon.C360 {
	[AddComponentMenu("Complete 360 Tour/Input/Mouse Input Raycaster")]
	public class MouseInputRaycaster : UIInputRaycaster {
		[Header("Mouse Raycaster")]
		[SerializeField]
		protected bool clickToSubmit;
		
		protected override Vector2 GetInputPosition() => Mouse.current.position.ReadValue();

		protected void Update() {
			if(Mouse.current.leftButton.isPressed && clickToSubmit) {
			//if (Input.GetMouseButtonDown(0) && clickToSubmit) {
				if (CurrentInteractable != null) {
					CurrentInteractable.Submit();
				}	
			}
		}

	}
}