using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
//using DG.Tweening;

public class BallGenerator : MonoBehaviour
{
    //Ballを生成
    [SerializeField] GameObject ballprefab = default;
    //・設定する画像を用意
    [SerializeField] Sprite[] ballSprites = default;
    //ボムの画像
    [SerializeField] Sprite bombSprite = default;

    public IEnumerator Spawns(int count) {
        for (int i = 0; i < count; i++) {
            Vector2 pos = new Vector2(Random.Range(-0.2f, 0.2f), 8f);
            GameObject ball = Instantiate(ballprefab, pos, Quaternion.identity);
            int ballID = Random.Range(0, ballSprites.Length);//-1はボム

            //もしボムならballID = -1
            //それ以外は今までと同じ
            if (Random.Range(0, 100) < 3) {//3%の確率でtrueになる
                ballID = -1;
                ball.GetComponent<SpriteRenderer>().sprite = bombSprite;
            } else {
                //画像の設定
                ball.GetComponent<SpriteRenderer>().sprite = ballSprites[ballID];
            }
            ball.GetComponent<Ball>().id = ballID;
            yield return new WaitForSeconds(0.04f);
        }
    }
}
