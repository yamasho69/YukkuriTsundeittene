using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using NCMB;

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

    [SerializeField] GameObject timeEffectPrefab = default; //追加時間表示用

    int timeCount;
    [SerializeField] Text timerText = default;

    [SerializeField] GameObject resultPanel = default;
    bool gameOver = true;

    //これ以降は自分で追加
    [SerializeField] AudioSource bgmAudioSource;
    [SerializeField] AudioSource seAudioSource;
    public Text stageName;
    [SerializeField] Text musicName;
    [SerializeField] Image backGround;
    [SerializeField] Text countDownText;
    [SerializeField] Text resultScoreText;
    [SerializeField] AudioClip countDownSE;
    [SerializeField] GameObject Buttons;
    int highScore;
    [SerializeField] Text highScoreText;
    [SerializeField] GameObject highScoreHyoji;
    public bool atsumaru;//ゲームアツマールに投稿する場合はオンにする。
    public bool onlineRanking;//オンラインランキングをオンにする場合。


    int charaNumber; //0=霊夢、1＝魔理沙、2＝アリス、3＝パチュリー、4＝妖夢、5＝橙 
    [Header("背景。0霊、1魔、2ア、3パ、4妖、5橙 ")] public Sprite[] backGrounds;//Imageと勘違い。画像を配列に入れる場合はSprite
    [Header("ステージ名。0霊、1魔、2ア、3パ、4妖、5橙 ")] public String[] stageNames;//Textと勘違い。自分で打ち込むのはString
    [Header("曲名。0霊、1魔、2ア、3パ、4妖、5橙 ")] public String[] musicNames;//同上
    [Header("BGM。0霊、1魔、2ア、3パ、4妖、5橙 ")] public AudioClip[] musics;
    [Header("ボイス「ゆ」。0霊、1魔、2ア、3パ、4妖、5橙 ")] public AudioClip[] yuVoices;
    [Header("ボイス「いち」。0霊、1魔、2ア、3パ、4妖、5橙 ")] public AudioClip[] ichiVoices;
    [Header("ボイス「に」。0霊、1魔、2ア、3パ、4妖、5橙 ")] public AudioClip[] niVoices;
    [Header("ボイス「さん」。0霊、1魔、2ア、3パ、4妖、5橙 ")] public AudioClip[] sanVoices;
    [Header("ボイス「よん」。0霊、1魔、2ア、3パ、4妖、5橙 ")] public AudioClip[] yonVoices;
    [Header("ボイス「ご」。0霊、1魔、2ア、3パ、4妖、5橙 ")] public AudioClip[] goVoices;
    [Header("ボイス「すたーと」。0霊、1魔、2ア、3パ、4妖、5橙 ")] public AudioClip[] startVoices;
    [Header("ボイス「おわり」。0霊、1魔、2ア、3パ、4妖、5橙 ")] public AudioClip[] owariVoices;
    [Header("ボイス「消える」。0霊、1魔、2ア、3パ、4妖、5橙 ")] public AudioClip[] kieruVoices;

    private void Awake() {
        charaNumber = UnityEngine.Random.Range(0, 6); //この引数で０〜５　https://pandoraxssscan-929.hatenablog.com/entry/2020/10/12/224414
        //ステージ名
        stageName.text = "Stage:"+ stageNames[charaNumber];
        //BGM名
        musicName.text = "♪" + musicNames[charaNumber];
        // 背景名
        backGround.sprite = backGrounds[charaNumber];

        if (atsumaru) {
            // アツマール用
            highScore = PlayerPrefsAtsumaru.GetInt("HighScore", 0);
        } else {
            // HighScore というキー名のデータをロード.キーが存在しなかったら 0 を返す.
            highScore = PlayerPrefs.GetInt("HighScore", 0);
        }


        //ハイスコア表示
        highScoreText.text = "HIGHSCORE:" + highScore;

        //BGM差し替え
        bgmAudioSource.clip = musics[charaNumber];//BGMの再生はオーディオソースのclipを差し替える→オーディオソースを再生の流れ。
    }


    void Start()
    {
        score = 0;
        AddScore(0);
        StartCoroutine(ballGenerator.Spawns(ParamsSO.Entity.initBallCount));
        //SoundManager.instance.PlayBGM(SoundManager.BGM.Main);//サウンドマネージャーのMainのBGMを流す
        
        //BGM再生
        bgmAudioSource.Play();

        timeCount = ParamsSO.Entity.initialTime;
        timerText.text = "TIME:" + timeCount.ToString();
        StartCoroutine(CountDown());
    }

    //カウントダウン(timeCountを1秒毎に小さくしていく)
    IEnumerator CountDown() {
        yield return new WaitForSeconds(1);
        countDownText.text = "3";
        seAudioSource.PlayOneShot(countDownSE);
        yield return new WaitForSeconds(1);
        countDownText.text = "2";
        seAudioSource.PlayOneShot(countDownSE);
        yield return new WaitForSeconds(1);
        countDownText.text = "1";
        seAudioSource.PlayOneShot(countDownSE);
        yield return new WaitForSeconds(1);
        //すたーと　ボイス再生
        seAudioSource.PlayOneShot(startVoices[charaNumber]);
        countDownText.text = "";

        while (timeCount > 0) {
            gameOver = false;//ゲームオーバー状態を解除、ゆっくりを触れるようにする
            Buttons.SetActive(true);
            yield return new WaitForSeconds(1);
            timeCount--;
            timerText.text = "TIME:" + timeCount.ToString();
            if (timeCount == 5) {
                //ご　ボイス再生
                seAudioSource.PlayOneShot(goVoices[charaNumber]);
            }
            if (timeCount == 4) {
                //よん　ボイス再生
                seAudioSource.PlayOneShot(yonVoices[charaNumber]);
            }
            if (timeCount == 3) {
                //さん　ボイス再生
                seAudioSource.PlayOneShot(sanVoices[charaNumber]);
            }
            if (timeCount == 2) {
                //に　ボイス再生
                seAudioSource.PlayOneShot(niVoices[charaNumber]);
            }
            if (timeCount == 1) {
                //いち　ボイス再生
                seAudioSource.PlayOneShot(ichiVoices[charaNumber]);
            }

        }
        //おわり　ボイス再生
        seAudioSource.PlayOneShot(owariVoices[charaNumber]);
        timerText.text = "TIME:0";
        resultScoreText.text = score+"点";
        Buttons.SetActive(false);
        gameOver = true;
        resultPanel.SetActive(true);
        if (score > highScore) {
            highScoreHyoji.SetActive(true);//highScoreが更新されていたら表示
            PlayerPrefs.SetInt("HighScore", score);//scoreをPrefsにセーブ
            PlayerPrefs.Save();//https://futabazemi.net/unity/high_score/
            if (atsumaru) {
                PlayerPrefsAtsumaru.SetInt("HighScore", score);//scoreをPrefsにセーブ
                PlayerPrefsAtsumaru.Save();//
                Atsumaru.scoreboards.setRecord("1", score.ToString());//スコア送信
                Atsumaru.scoreboards.display("1");//https://goma980.blogspot.com/2021/03/webGLpg.html
            } else if(onlineRanking){
                // Type == Number の場合
                naichilab.RankingLoader.Instance.SendScoreAndShowRanking(score);
                // Type == Time の場合
                var millsec = 123456;
                var timeScore = new System.TimeSpan(0, 0, 0, 0, millsec);
                naichilab.RankingLoader.Instance.SendScoreAndShowRanking(timeScore);
            }
        }
        yield return null;
    }
    void AddScore(int point) {
        score += point;
        scoreText.text = "SCORE:" + score.ToString();
    }

    //リトライボタン押下
    public void OnRetryButton() {
        gameOver = true;//シーン遷移中、少しゆっくりに反応してボイスが出るため
        SceneManager.LoadScene("Main");
        Time.timeScale = 1;//ポーズ画面から選択したとき用
    }

    //タイトルボタン押下
    public void OnTitleButton() {
        gameOver = true;//シーン遷移中、少しゆっくりに反応してボイスが出るため
        SceneManager.LoadScene("Title");
        Time.timeScale = 1;//ポーズ画面から選択したとき用
    }

    void Update()
    {
        //ゲームオーバー時はドラッグでの処理を行わない
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
            int addTime = 2 * (removeCount - 3) - 1; //4つ以上連結させると残り時間ボーナス。4つで1秒、5つで3秒、6つで5秒…と増える
            SpawnPointEffect(removeBalls[removeBalls.Count-1].transform.position, score);
            //SoundManager.instance.PlaySE(SoundManager.SE.Destroy);
            if (addTime > 0) {
                timeCount += addTime;
                SpawnTimeEffect(removeBalls[removeBalls.Count - 1].transform.position,addTime);
            }
            //きえる　ボイス再生
            seAudioSource.PlayOneShot(kieruVoices[charaNumber]);
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
            //SoundManager.instance.PlaySE(SoundManager.SE.Totch);
            //ゆ　ボイス再生
            seAudioSource.PlayOneShot(yuVoices[charaNumber]);
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
        //SoundManager.instance.PlaySE(SoundManager.SE.Destroy);
        //きえる　ボイス再生
        seAudioSource.PlayOneShot(kieruVoices[charaNumber]);
    }

    void SpawnPointEffect(Vector2 position, int score) {
        GameObject effectObj = Instantiate(pointEffectPrefab,position,Quaternion.identity);
        PointEffect pointEffect = effectObj.GetComponent<PointEffect>();
        pointEffect.Show(score);
    }
    void SpawnTimeEffect(Vector2 position, int addtime) {
        GameObject effectObj = Instantiate(timeEffectPrefab, position, Quaternion.identity);
        PointEffect pointEffect = effectObj.GetComponent<PointEffect>();
        pointEffect.Show(addtime);
    }
}
