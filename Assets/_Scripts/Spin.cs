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
    bool canPushButton = true;
    public AudioClip spinSE;
    public AudioSource audioSource;

    public void SpinStart()
    {
        if (canPushButton) {
            canPushButton = false;
            audioSource.PlayOneShot(spinSE);
            spinBar.SetActive(true);
            spinBar.transform.DORotate(new Vector3(0, 0, 360), 2, RotateMode.WorldAxisAdd);  //ÉèÅ[ÉãÉhé≤Ç…ëŒÇµÇƒ
            Invoke("Vanish", 2.0f);
        }
    }

    void Vanish() {
        spinBar.SetActive(false);
        canPushButton = true;
    }
}
