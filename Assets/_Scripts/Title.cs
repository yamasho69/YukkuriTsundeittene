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
    public GameObject Texts;
    public GameObject buttons;
    public GameObject creditWindow;
    public GameObject manualWindow;
    public AudioSource audioSource;
    public Text highScoreText;
    //public AudioClip titleBGM;
    public AudioClip titleSE;

    private void Start() {
        // HighScore �Ƃ����L�[���̃f�[�^�����[�h.�L�[�����݂��Ȃ������� 0 ��Ԃ�.
        int highScore = PlayerPrefs.GetInt("HighScore", 0);
        //�n�C�X�R�A�\��
        highScoreText.text = "HIGHSCORE:" + highScore.ToString();

        titleText.transform.DOMove(
    new Vector3(0, 2.5f, 0), // �ړ��I���n�_
    1f);                  // ���o����
        StartCoroutine(TitleStart());
        //SoundManager.instance.PlayBGM(SoundManager.BGM.Title);//�T�E���h�}�l�[�W���[��Title��BGM�𗬂�
        
    }

    IEnumerator TitleStart() {
        yield return new WaitForSeconds(0.5f);
        audioSource.PlayOneShot(titleSE);
        yield return new WaitForSeconds(1.5f);
        Texts.SetActive(true);
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
