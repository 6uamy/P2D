using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Collision5 : MonoBehaviour
{
    public GameObject QuizImage_5;

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Art_5"))
        {
            QuizImage_5.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Art_5"))
        {
            QuizImage_5.SetActive(false);
        }
    }


}