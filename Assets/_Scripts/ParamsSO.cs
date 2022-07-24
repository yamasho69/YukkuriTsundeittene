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
    [Header("初期のボールの数")]public int initBallCount;

    [Header("ボールを消したときの得点")]public int scorePoint;

    [Header("ボールの判定距離")]public float ballDistance;

    [Header("リストに追加したボールの表示をどれくらい大きくするか")]public float ballExpansion;

    [Header("ボムの有効範囲")][Range(1,10)]public float bombDistance;

    [Header("制限時間の初期値")] public int initialTime;

    //MyScriptableObjectが保存してある場所のパス
    public const string PATH = "ParamsSO";

    //MyScriptableObjectの実体
    private static ParamsSO _entity;
    public static ParamsSO Entity {
        get {
            //初アクセス時にロードする
            if (_entity == null) {
                _entity = Resources.Load<ParamsSO>(PATH);

                //ロード出来なかった場合はエラーログを表示
                if (_entity == null) {
                    Debug.LogError(PATH + " not found");
                }
            }

            return _entity;
        }
    }
}
