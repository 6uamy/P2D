using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Collision : MonoBehaviour
{
    public GameObject QuizImage_1;

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Art_1"))
        {
            QuizImage_1.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Art_1"))
        {
            QuizImage_1.SetActive(false);
        }
    }


}

    /*private void HideQuizeImage()
    {
        Invoke("HideQuizeImage", 5f);
        QuizImage.SetActive(false);
    }*/


    /*void Update()
    {
        fTickTime += Time.deltaTime;


        if (fTickTime >= fDestoryTime)
        {
            CharacterController controller = GetComponent<CharacterController>();
            if (controller.collisionFlags == CollisionFlags.Sides)
            {
                QuizImage.SetActive(false);
            }
        }

    }*/