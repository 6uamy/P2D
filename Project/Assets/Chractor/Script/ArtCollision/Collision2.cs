using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Collision2 : MonoBehaviour
{
    public GameObject QuizImage_2;

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Art_2"))
        {
            QuizImage_2.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Art_2"))
        {
            QuizImage_2.SetActive(false);
        }
    }


}