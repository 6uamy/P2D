using System;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.SceneManagement;

#if UNITY_WEBGL
public class WebLogin : MonoBehaviour
{
    [DllImport("__Internal")]
    private static extern void Web3Connect();

    [DllImport("__Internal")]
    private static extern string ConnectAccount();

    [DllImport("__Internal")]
    private static extern void SetConnectAccount(string value);

    private string account;
   

    public void OnLogin()
    {
        Web3Connect();
        OnConnected();
        
    }

    public void OnP2DScan()
    {
        Application.OpenURL("https://62aaa9bef3e87a28946e90d6--stellar-creponne-69e72f.netlify.app/");
    }

  

    async private void OnConnected()
    {
        account = ConnectAccount();
        while (account == "") {
            await new WaitForSeconds(1f);
            account = ConnectAccount();
        };
        // save account for next scene
        PlayerPrefs.SetString("Account", account);
        // reset login message
        SetConnectAccount(account);
        // load next scene
        SceneManager.LoadScene("Showroom");
    }

   
}
#endif


