using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    public Transform centralAxis;
    public float camSpeed;
    float mouseX;
    float mouseY;
        
    void CamMove()
    {
        mouseX += Input.GetAxis("Mouse X");
        mouseY += Input.GetAxis("Mouse Y") * -1;

        centralAxis.rotation = Quaternion.Euler(new Vector3(centralAxis.rotation.x + mouseY, centralAxis.rotation.y + mouseX, 0) * camSpeed);
    }

    // Update is called once per frame
    void Update()
    {
        CamMove();
    }
}
