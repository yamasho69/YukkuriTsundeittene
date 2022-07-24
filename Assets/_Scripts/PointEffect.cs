using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
//using DG.Tweening;

public class PointEffect : MonoBehaviour
{
    [SerializeField] Text text = default;
    public void Show(int score) {
        text.text = score.ToString();
        StartCoroutine(MoveUp());
    }

    //è„Ç…Ç†Ç∞ÇÈ
    IEnumerator MoveUp() {
        for(int i = 0; i < 20; i++) {
            yield return new WaitForSeconds(0.03f);
            transform.Translate(0, 0.05f, 0);
        }
        Destroy(gameObject, 0.2f);
    }

}
