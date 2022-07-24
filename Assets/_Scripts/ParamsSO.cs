using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
//using DG.Tweening;

[CreateAssetMenu]
public class ParamsSO : ScriptableObject
{
    [Header("�����̃{�[���̐�")]public int initBallCount;

    [Header("�{�[�����������Ƃ��̓��_")]public int scorePoint;

    [Header("�{�[���̔��苗��")]public float ballDistance;

    [Header("���X�g�ɒǉ������{�[���̕\�����ǂꂭ�炢�傫�����邩")]public float ballExpansion;

    [Header("�{���̗L���͈�")][Range(1,10)]public float bombDistance;

    [Header("�������Ԃ̏����l")] public int initialTime;

    //MyScriptableObject���ۑ����Ă���ꏊ�̃p�X
    public const string PATH = "ParamsSO";

    //MyScriptableObject�̎���
    private static ParamsSO _entity;
    public static ParamsSO Entity {
        get {
            //���A�N�Z�X���Ƀ��[�h����
            if (_entity == null) {
                _entity = Resources.Load<ParamsSO>(PATH);

                //���[�h�o���Ȃ������ꍇ�̓G���[���O��\��
                if (_entity == null) {
                    Debug.LogError(PATH + " not found");
                }
            }

            return _entity;
        }
    }
}
