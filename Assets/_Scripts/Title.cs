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
    public GameObject buttons;
    public GameObject creditWindow;

    private void Start() {
        titleText.transform.DOMove(
    new Vector3(0, 2.5f, 0), // �ړ��I���n�_
    1f);                  // ���o����
        StartCoroutine(TitleStart());
        SoundManager.instance.PlayBGM(SoundManager.BGM.Title);//�T�E���h�}�l�[�W���[��Title��BGM�𗬂�
    }

    IEnumerator TitleStart() {
        yield return new WaitForSeconds(1.5f);
        buttons.SetActive(true);
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
}
