using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
//using DG.Tweening;

public class GameSystem : MonoBehaviour
{
    [SerializeField] BallGenerator ballGenerator = default;
    bool isDragging;
    [SerializeField] List<Ball> removeBalls = new List<Ball>();
    Ball currentDraggingBall;//リストの最後のボール
    int score;
    [SerializeField] Text scoreText = default;
    [SerializeField] GameObject pointEffectPrefab = default;

    int timeCount;
    [SerializeField] Text timerText = default;

    [SerializeField] GameObject resultPanel = default;
    bool gameOver;

    void Start()
    {
        score = 0;
        AddScore(0);
        StartCoroutine(ballGenerator.Spawns(ParamsSO.Entity.initBallCount));
        SoundManager.instance.PlayBGM(SoundManager.BGM.Main);//サウンドマネージャーのMainのBGMを流す
        timeCount = ParamsSO.Entity.initialTime;
        timerText.text = "TIME:" + timeCount.ToString();
        StartCoroutine(CountDown());
    }

    //カウントダウン(timeCountを1秒毎に小さくしていく)
    IEnumerator CountDown() {
        while (timeCount > 0) {
            yield return new WaitForSeconds(1);
            timeCount--;
            timerText.text = "TIME:" + timeCount.ToString();
        }
        gameOver = true;
        resultPanel.SetActive(true);
        yield return null;
    }
    void AddScore(int point) {
        score += point;
        scoreText.text = "SCORE:" + score.ToString();
    }

    //リトライボタン押下
    public void OnRetryButton() {
        SceneManager.LoadScene("Main");
    }

    void Update()
    {
        //ゲームオーバー字はドラッグでの処理を行わない
        if (gameOver) {
            return;
        }
        //右クリックを押し込んだ時
        if (Input.GetMouseButtonDown(0)) {
            OnDragBegin();
        }
        //右クリックを上げた時
        else if (Input.GetMouseButtonUp(0)) {
            OnDragEnd();
        }
        else if (isDragging) {
            OnDragging();
        }
        
    }

    //ドラッグ開始
    void OnDragBegin() {
        //マウスによるオブジェクトの判定
        //・Ray
        Vector2 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        RaycastHit2D hit = Physics2D.Raycast(mousePosition, Vector2.zero);
        if (hit　&& hit.collider.GetComponent<Ball>()) {
            Ball ball = hit.collider.GetComponent<Ball>();
            //ボムなら周囲を含めて爆破
            if(ball.IsBomb()) {//IsBombがtrueならボム
                Explosion(ball);
            } else {
                AddRemoveBall(ball);
                isDragging = true;
            }
        }
    }

    //ドラッグ中
    void OnDragging() {
        Vector2 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        RaycastHit2D hit = Physics2D.Raycast(mousePosition, Vector2.zero);
        if (hit && hit.collider.GetComponent<Ball>()) {
            //同じ種類で距離が近かったらListに追加
            Ball ball = hit.collider.GetComponent<Ball>();

            //同じ種類であることを判定
            if (ball.id == currentDraggingBall.id) {
                //２つのボールの間の距離を測定
                float distance = Vector2.Distance(ball.transform.position, currentDraggingBall.transform.position);
                //距離が近ければ追加
                if(distance < ParamsSO.Entity.ballDistance) {
                    AddRemoveBall(ball);
                }
            }
        }
    }

    //ドラッグ終了
    void OnDragEnd() {
        int removeCount = removeBalls.Count;
        //３つ以上ドラッグして、リストに加えていると消す
        if(removeCount >= 3) {
            for (int i = 0; i < removeCount; i++) {
                removeBalls[i].Explosion();
            }
            StartCoroutine(ballGenerator.Spawns(removeCount));
            int score = removeCount * ParamsSO.Entity.scorePoint;
            AddScore(score);
            SpawnPointEffect(removeBalls[removeBalls.Count-1].transform.position, score);
            SoundManager.instance.PlaySE(SoundManager.SE.Destroy);
            //Debug.Log($"スコア:{removeCount*100}");
        }
        //全てのremoveBallのサイズを戻す
        for (int i = 0;i<removeCount;i++) {
            removeBalls[i].transform.localScale = Vector3.one;
            //リストに追加されたボールの色を戻す
            removeBalls[i].GetComponent<SpriteRenderer>().color = Color.white;
        }


        removeBalls.Clear();
        isDragging = false;
    }

    void AddRemoveBall(Ball ball) {
        currentDraggingBall = ball;
        //removeBallsがballをリストの中に持っていなかったら
        if(removeBalls.Contains(ball)== false) {
            //リストに追加されたボールを大きくする
            ball.transform.localScale = Vector3.one * ParamsSO.Entity.ballExpansion;
            //リストに追加されたボールの色を変える
            ball.GetComponent<SpriteRenderer>().color = Color.yellow;
            removeBalls.Add(ball);//リストに今のballを追加
            SoundManager.instance.PlaySE(SoundManager.SE.Totch);
        }
    }

    //bombによる爆破
    void Explosion(Ball bomb) {
        List<Ball> explosionList = new List<Ball>();
        //ボムを中心に爆破するBallを集める
        Collider2D[] hitObj = Physics2D.OverlapCircleAll(bomb.transform.position, ParamsSO.Entity.bombDistance);
        for(int i = 0; i < hitObj.Length; i++) {
            //Ballだったら爆破リストに追加する
            Ball ball = hitObj[i].GetComponent<Ball>();
            if (ball) {
                explosionList.Add(ball);
            }
        }
        //爆破する
        int removeCount = explosionList.Count;
            for (int i = 0; i < removeCount; i++) {
                explosionList[i].Explosion();
            }
            StartCoroutine(ballGenerator.Spawns(removeCount));
            int score = removeCount * ParamsSO.Entity.scorePoint;
            AddScore(score);
            SpawnPointEffect(bomb.transform.position, score);
            SoundManager.instance.PlaySE(SoundManager.SE.Destroy);
    }

    void SpawnPointEffect(Vector2 position, int score) {
        GameObject effectObj = Instantiate(pointEffectPrefab,position,Quaternion.identity);
        PointEffect pointEffect = effectObj.GetComponent<PointEffect>();
        pointEffect.Show(score);
    }
}
