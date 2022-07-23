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

    void Start()
    {
        StartCoroutine(ballGenerator.Spawns(40));
    }

    void Update()
    {
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
            AddRemoveBall(ball);
            isDragging = true;
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
                if(distance < 1.5) {
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
                Destroy(removeBalls[i].gameObject);
            }
        }
        removeBalls.Clear();
        isDragging = false;
    }

    void AddRemoveBall(Ball ball) {
        currentDraggingBall = ball;
        //removeBalls��ball�����X�g�̒��Ɏ����Ă��Ȃ�������
        if(removeBalls.Contains(ball)== false) {
            removeBalls.Add(ball);//���X�g�ɍ���ball��ǉ�
        }
    }
}
