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

    void Start()
    {
        StartCoroutine(ballGenerator.Spawns(40));
    }

    void Update()
    {
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
            AddRemoveBall(ball);
            isDragging = true;
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
                if(distance < 1.5) {
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
                Destroy(removeBalls[i].gameObject);
            }
        }
        removeBalls.Clear();
        isDragging = false;
    }

    void AddRemoveBall(Ball ball) {
        currentDraggingBall = ball;
        //removeBallsがballをリストの中に持っていなかったら
        if(removeBalls.Contains(ball)== false) {
            removeBalls.Add(ball);//リストに今のballを追加
        }
    }
}
