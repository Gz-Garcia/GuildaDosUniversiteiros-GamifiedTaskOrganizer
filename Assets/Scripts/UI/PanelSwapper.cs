using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanelSwapper : MonoBehaviour
{
    public GameObject panelA, panelB;

    public void SwapPanel (){
        panelA.SetActive(!panelA.activeSelf);
        panelB.SetActive(!panelB.activeSelf);
    }
}
