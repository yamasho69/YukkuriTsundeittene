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
    [SerializeField] AudioClip [] bgmClips = default;

    //SE
    //BGM
    [SerializeField] AudioSource audioSourceSE = default;
    [SerializeField] AudioClip[] seClips = default;

    public static SoundManager instance;

    //シングルトン可
    private void Awake() {
        if(instance == null) {
            instance = this;
            DontDestroyOnLoad(gameObject);
        } else {
            Destroy(gameObject);
        }
    }

    public enum BGM {
        Title,
        Main
    }

    public enum SE {
        Totch,
        Destroy
    }

    private void Start() {
        PlayBGM(BGM.Main);
    }

    public void PlayBGM(BGM bgm) {
        audioSourceBGM.clip = bgmClips[(int)bgm];
        audioSourceBGM.Play();
    }

    public void PlaySE(SE se) {
        audioSourceSE.PlayOneShot(seClips[(int)se]);
    }
}
