using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;

public class Spin : MonoBehaviour
{
    public GameObject spinBar;

    public void SpinStart()
    {
        spinBar.SetActive(true);
        spinBar.transform.DORotate(new Vector3(0, 0, 360), 2, RotateMode.WorldAxisAdd);  //ƒ[ƒ‹ƒh²‚É‘Î‚µ‚Ä
        Invoke("Vanish", 2.0f);
    }

    void Vanish() {
        spinBar.SetActive(false);
    }
}
