using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
//using DG.Tweening;

public class Ball : MonoBehaviour
{
    public int id;
    [SerializeField] GameObject explosionPrefab = default;

    public void Explosion() {
        Destroy(gameObject);
        //���j�G�t�F�N�g����
        GameObject explosion = Instantiate(explosionPrefab, transform.position, transform.rotation);
        Destroy(explosion, 0.3f);
    }

    public bool IsBomb() {
        /*
        if(id == -1) {
            return true;
        }
        return false;*/

        //�R�����g�A�E�g���Ă��镔���͈ȉ��̃R�[�h�ŏȗ��\
        return id == -1;
    }
}
