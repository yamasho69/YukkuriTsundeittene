using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
//using DG.Tweening;

public class SoundManager : MonoBehaviour
{
    //音を鳴らす
    //・AudioSource:スピーカー
    //・AudioClip:CD

    //BGM
    [SerializeField] AudioSource audioSourceBGM = default;

    [SerializeField] AudioClip audioClip = default;

    public void PlayBGM() {
        audioSourceBGM.clip = audioClip;
        audioSourceBGM.Play();
    }
}
