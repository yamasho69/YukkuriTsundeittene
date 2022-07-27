using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;

public class Title : MonoBehaviour
{
    public GameObject titleText;
    public GameObject musicTitleText;
    public GameObject buttons;
    public GameObject creditWindow;
    public GameObject manualWindow;
    public AudioSource audioSource;
    //public AudioClip titleBGM;
    public AudioClip titleSE;

    private void Start() {
        titleText.transform.DOMove(
    new Vector3(0, 2.5f, 0), // 移動終了地点
    1f);                  // 演出時間
        StartCoroutine(TitleStart());
        //SoundManager.instance.PlayBGM(SoundManager.BGM.Title);//サウンドマネージャーのTitleのBGMを流す
        
    }

    IEnumerator TitleStart() {
        yield return new WaitForSeconds(0.5f);
        audioSource.PlayOneShot(titleSE);
        yield return new WaitForSeconds(1.5f);
        musicTitleText.SetActive(true);
        buttons.SetActive(true);
        audioSource.Play();
        yield return null;
    }


    public void OnStartButton() {
        SceneManager.LoadScene("Main");
    }

    public void OnCreditButton() {
        if (creditWindow.activeSelf) {
            creditWindow.SetActive(false);
        } else {creditWindow.SetActive(true);}
    }

    public void OnManualButton() {
        if (manualWindow.activeSelf) {
            manualWindow.SetActive(false);
        } else { manualWindow.SetActive(true); }
    }
}
