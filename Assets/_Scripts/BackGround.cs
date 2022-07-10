using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class BackGround : MonoBehaviour {
    //スクロールスピード
    [SerializeField] float speed = 1;
    [SerializeField] float limitPosition;
    [SerializeField] float loopPosition;
    public bool yokoScroll = false;//チェックが入ってたら横スクロール

    void Update() {
        if (Time.timeScale == 1) {
            if (!yokoScroll) {
                //下方向にスクロール
                transform.position -= new Vector3(0, speed);

                //Yが-11まで来れば、yPositionまで移動する
                if (transform.position.y <= limitPosition) {
                    transform.position = new Vector2(0, loopPosition);
                }
            } else {
                //左方向にスクロール
                transform.position -= new Vector3(speed, 0);

                //Xが-11まで来れば、xPositionまで移動する
                if (transform.position.x <= limitPosition) {
                    transform.position = new Vector2(loopPosition, transform.position.y);
                }
            }
        }
    }
}
