using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Collision3 : MonoBehaviour
{
    public GameObject QuizImage_3;

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Art_3"))
        {
            QuizImage_3.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Art_3"))
        {
            QuizImage_3.SetActive(false);
        }
    }


}