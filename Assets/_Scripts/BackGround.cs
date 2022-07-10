using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class BackGround : MonoBehaviour {
    //�X�N���[���X�s�[�h
    [SerializeField] float speed = 1;
    [SerializeField] float limitPosition;
    [SerializeField] float loopPosition;
    public bool yokoScroll = false;//�`�F�b�N�������Ă��牡�X�N���[��

    void Update() {
        if (Time.timeScale == 1) {
            if (!yokoScroll) {
                //�������ɃX�N���[��
                transform.position -= new Vector3(0, speed);

                //Y��-11�܂ŗ���΁AyPosition�܂ňړ�����
                if (transform.position.y <= limitPosition) {
                    transform.position = new Vector2(0, loopPosition);
                }
            } else {
                //�������ɃX�N���[��
                transform.position -= new Vector3(speed, 0);

                //X��-11�܂ŗ���΁AxPosition�܂ňړ�����
                if (transform.position.x <= limitPosition) {
                    transform.position = new Vector2(loopPosition, transform.position.y);
                }
            }
        }
    }
}
