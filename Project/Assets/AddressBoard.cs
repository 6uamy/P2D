using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddressBoard : MonoBehaviour
{
    public Transform camTransform;

    Quaternion originalRotation;

    void Start()
    {
        originalRotation = transform.rotation;
    }

    // Update is called once per frame
    void Update()
    {
        transform.rotation = camTransform.rotation * originalRotation;
    }
}
