using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnapAfterRelease : MonoBehaviour
{
    private Vector3 originalPos;
    public float rotationSpeed = .3f;
    // Start is called before the first frame update
    void Start()
    {
        originalPos = transform.position;
    }

    public void SnapToOriginalPos()
    {
        transform.position = originalPos;

    }
    // Update is called once per frame
    void Update()
    {
        Vector3 rotationDirection = new Vector3(rotationSpeed, 0f, 0f);
        transform.Rotate(rotationDirection);
    }
}
