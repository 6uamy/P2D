using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PostboxCollision : MonoBehaviour
{
    public GameObject donatePop;

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Post"))
        {
            donatePop.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Post"))
        {
            donatePop.SetActive(false);
        }
    }
}
