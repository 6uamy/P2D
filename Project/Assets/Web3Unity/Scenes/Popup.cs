using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Popup : MonoBehaviour
{
    public GameObject popup;

    public void Onpopup()
    {
        popup.SetActive(true);
    }
}
