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
    Ball currentDraggingBall;//���X�g�̍Ō�̃{�[��
    int score;
    [SerializeField] Text scoreText = default;
    [SerializeField] GameObject pointEffectPrefab = default;

    int timeCount;
    [SerializeField] Text timerText = default;

    [SerializeField] GameObject resultPanel = default;
    bool gameOver;

    //����ȍ~�͎����Œǉ�
    [SerializeField] AudioSource bgmAudioSource;
    [SerializeField] AudioSource seAudioSource;
    public Text stageName;
    [SerializeField] Text musicName;
    [SerializeField] Image backGround;
    [SerializeField] Text countDownText;
    [SerializeField] AudioClip countDownSE;


    int charaNumber; //0=�얲�A1���������A2���A���X�A3���p�`�����[�A4���d���A5���� 
    [Header("�w�i�B0��A1���A2�A�A3�p�A4�d�A5�� ")] public Sprite[] backGrounds;//Image�Ɗ��Ⴂ�B�摜��z��ɓ����ꍇ��Sprite
    [Header("�X�e�[�W���B0��A1���A2�A�A3�p�A4�d�A5�� ")] public String[] stageNames;//Text�Ɗ��Ⴂ�B�����őł����ނ̂�String
    [Header("�Ȗ��B0��A1���A2�A�A3�p�A4�d�A5�� ")] public String[] musicNames;//����
    [Header("BGM�B0��A1���A2�A�A3�p�A4�d�A5�� ")] public AudioClip[] musics;
    [Header("�{�C�X�u��v�B0��A1���A2�A�A3�p�A4�d�A5�� ")] public AudioClip[] yuVoices;
    [Header("�{�C�X�u�����v�B0��A1���A2�A�A3�p�A4�d�A5�� ")] public AudioClip[] ichiVoices;
    [Header("�{�C�X�u�Ɂv�B0��A1���A2�A�A3�p�A4�d�A5�� ")] public AudioClip[] niVoices;
    [Header("�{�C�X�u����v�B0��A1���A2�A�A3�p�A4�d�A5�� ")] public AudioClip[] sanVoices;
    [Header("�{�C�X�u���v�B0��A1���A2�A�A3�p�A4�d�A5�� ")] public AudioClip[] yonVoices;
    [Header("�{�C�X�u���v�B0��A1���A2�A�A3�p�A4�d�A5�� ")] public AudioClip[] goVoices;
    [Header("�{�C�X�u�����[�Ɓv�B0��A1���A2�A�A3�p�A4�d�A5�� ")] public AudioClip[] startVoices;
    [Header("�{�C�X�u�����v�B0��A1���A2�A�A3�p�A4�d�A5�� ")] public AudioClip[] owariVoices;
    [Header("�{�C�X�u������v�B0��A1���A2�A�A3�p�A4�d�A5�� ")] public AudioClip[] kieruVoices;

    private void Awake() {
        charaNumber = UnityEngine.Random.Range(0, 5);
        //�X�e�[�W��
        stageName.text = "Stage:"+ stageNames[charaNumber];
        //BGM��
        musicName.text = "��" + musicNames[charaNumber];
        // �w�i��
        backGround.sprite = backGrounds[charaNumber];
        
        //BGM�����ւ�
        bgmAudioSource.clip = musics[charaNumber];//BGM�̍Đ��̓I�[�f�B�I�\�[�X��clip�������ւ��遨�I�[�f�B�I�\�[�X���Đ��̗���B
    }


    void Start()
    {
        score = 0;
        AddScore(0);
        StartCoroutine(ballGenerator.Spawns(ParamsSO.Entity.initBallCount));
        //SoundManager.instance.PlayBGM(SoundManager.BGM.Main);//�T�E���h�}�l�[�W���[��Main��BGM�𗬂�
        
        //BGM�Đ�
        bgmAudioSource.Play();

        timeCount = ParamsSO.Entity.initialTime;
        timerText.text = "TIME:" + timeCount.ToString();
        StartCoroutine(CountDown());
    }

    //�J�E���g�_�E��(timeCount��1�b���ɏ��������Ă���)
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
        //�����[�Ɓ@�{�C�X�Đ�
        seAudioSource.PlayOneShot(startVoices[charaNumber]);
        countDownText.text = "";

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

    //���g���C�{�^������
    public void OnRetryButton() {
        SceneManager.LoadScene("Main");
    }

    void Update()
    {
        //�Q�[���I�[�o�[���̓h���b�O�ł̏������s��Ȃ�
        if (gameOver) {
            return;
        }
        //�E�N���b�N���������񂾎�
        if (Input.GetMouseButtonDown(0)) {
            OnDragBegin();
        }
        //�E�N���b�N���グ����
        else if (Input.GetMouseButtonUp(0)) {
            OnDragEnd();
        }
        else if (isDragging) {
            OnDragging();
        }
        
    }

    //�h���b�O�J�n
    void OnDragBegin() {
        //�}�E�X�ɂ��I�u�W�F�N�g�̔���
        //�ERay
        Vector2 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        RaycastHit2D hit = Physics2D.Raycast(mousePosition, Vector2.zero);
        if (hit�@&& hit.collider.GetComponent<Ball>()) {
            Ball ball = hit.collider.GetComponent<Ball>();
            //�{���Ȃ���͂��܂߂Ĕ��j
            if(ball.IsBomb()) {//IsBomb��true�Ȃ�{��
                Explosion(ball);
            } else {
                AddRemoveBall(ball);
                isDragging = true;
            }
        }
    }

    //�h���b�O��
    void OnDragging() {
        Vector2 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        RaycastHit2D hit = Physics2D.Raycast(mousePosition, Vector2.zero);
        if (hit && hit.collider.GetComponent<Ball>()) {
            //������ނŋ������߂�������List�ɒǉ�
            Ball ball = hit.collider.GetComponent<Ball>();

            //������ނł��邱�Ƃ𔻒�
            if (ball.id == currentDraggingBall.id) {
                //�Q�̃{�[���̊Ԃ̋����𑪒�
                float distance = Vector2.Distance(ball.transform.position, currentDraggingBall.transform.position);
                //�������߂���Βǉ�
                if(distance < ParamsSO.Entity.ballDistance) {
                    AddRemoveBall(ball);
                }
            }
        }
    }

    //�h���b�O�I��
    void OnDragEnd() {
        int removeCount = removeBalls.Count;
        //�R�ȏ�h���b�O���āA���X�g�ɉ����Ă���Ə���
        if(removeCount >= 3) {
            for (int i = 0; i < removeCount; i++) {
                removeBalls[i].Explosion();
            }
            StartCoroutine(ballGenerator.Spawns(removeCount));
            int score = removeCount * ParamsSO.Entity.scorePoint;
            AddScore(score);
            SpawnPointEffect(removeBalls[removeBalls.Count-1].transform.position, score);
            //SoundManager.instance.PlaySE(SoundManager.SE.Destroy);
            //������@�{�C�X�Đ�
            seAudioSource.PlayOneShot(kieruVoices[charaNumber]);
            //Debug.Log($"�X�R�A:{removeCount*100}");
        }
        //�S�Ă�removeBall�̃T�C�Y��߂�
        for (int i = 0;i<removeCount;i++) {
            removeBalls[i].transform.localScale = Vector3.one;
            //���X�g�ɒǉ����ꂽ�{�[���̐F��߂�
            removeBalls[i].GetComponent<SpriteRenderer>().color = Color.white;
        }


        removeBalls.Clear();
        isDragging = false;
    }

    void AddRemoveBall(Ball ball) {
        currentDraggingBall = ball;
        //removeBalls��ball�����X�g�̒��Ɏ����Ă��Ȃ�������
        if(removeBalls.Contains(ball)== false) {
            //���X�g�ɒǉ����ꂽ�{�[����傫������
            ball.transform.localScale = Vector3.one * ParamsSO.Entity.ballExpansion;
            //���X�g�ɒǉ����ꂽ�{�[���̐F��ς���
            ball.GetComponent<SpriteRenderer>().color = Color.yellow;
            removeBalls.Add(ball);//���X�g�ɍ���ball��ǉ�
            //SoundManager.instance.PlaySE(SoundManager.SE.Totch);
            //��@�{�C�X�Đ�
            seAudioSource.PlayOneShot(yuVoices[charaNumber]);
        }
    }

    //bomb�ɂ�锚�j
    void Explosion(Ball bomb) {
        List<Ball> explosionList = new List<Ball>();
        //�{���𒆐S�ɔ��j����Ball���W�߂�
        Collider2D[] hitObj = Physics2D.OverlapCircleAll(bomb.transform.position, ParamsSO.Entity.bombDistance);
        for(int i = 0; i < hitObj.Length; i++) {
            //Ball�������甚�j���X�g�ɒǉ�����
            Ball ball = hitObj[i].GetComponent<Ball>();
            if (ball) {
                explosionList.Add(ball);
            }
        }
        //���j����
        int removeCount = explosionList.Count;
            for (int i = 0; i < removeCount; i++) {
                explosionList[i].Explosion();
            }
            StartCoroutine(ballGenerator.Spawns(removeCount));
            int score = removeCount * ParamsSO.Entity.scorePoint;
            AddScore(score);
            SpawnPointEffect(bomb.transform.position, score);
        //SoundManager.instance.PlaySE(SoundManager.SE.Destroy);
        //������@�{�C�X�Đ�
        seAudioSource.PlayOneShot(kieruVoices[charaNumber]);
    }

    void SpawnPointEffect(Vector2 position, int score) {
        GameObject effectObj = Instantiate(pointEffectPrefab,position,Quaternion.identity);
        PointEffect pointEffect = effectObj.GetComponent<PointEffect>();
        pointEffect.Show(score);
    }
}
