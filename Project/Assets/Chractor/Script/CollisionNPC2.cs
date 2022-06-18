using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class CollisionNPC2 : MonoBehaviour
{
    public GameObject NPCImage2;



    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("NPC_NFT"))
        {
            NPCImage2.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("NPC_NFT"))
        {
            NPCImage2.SetActive(false);
        }
    }
}