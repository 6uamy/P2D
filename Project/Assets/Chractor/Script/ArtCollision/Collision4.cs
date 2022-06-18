using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Collision4 : MonoBehaviour
{
    public GameObject QuizImage_4;

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Art_4"))
        {
            QuizImage_4.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Art_4"))
        {
            QuizImage_4.SetActive(false);
        }
    }


}