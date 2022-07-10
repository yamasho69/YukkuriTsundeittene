using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;


//参考URL:https://learning-collection.com/unity3d-%E3%83%87%E3%83%95%E3%82%A9%E3%83%AB%E3%83%88%E3%83%95%E3%82%A9%E3%83%AB%E3%83%80%E3%81%AE%E8%87%AA%E5%8B%95%E7%94%9F%E6%88%90%E3%82%B9%E3%82%AF%E3%83%AA%E3%83%97%E3%83%88/
//使用法：空のゲームオブジェクトにアタッチ→ゲームを再生→アセットフォルダを最新情報に更新(Ctrl+R)
public class CreateDir : MonoBehaviour {
    //作成フォルダ名
    private const string Scripts = "_Scripts/";
    private const string Prefabs = "_Prefabs/";
    private const string Resources = "Resources/";
    private const string Animations = "_Animations/";
    private const string Audio = "_Audio/";
    private const string Materials = "_Materials/";
    private const string Timelines = "Timelines/";
    private const string Editor = "Editor/";
    private const string Textures = "_Textures/";
    private const string Scenes = "_Scenes/";

    //作成フォルダの上位階層（Assets）
    private const string Assets = "Assets/";

    //作成フォルダのリスト
    List<string> dirList =
        new List<string> {
            Scripts
            ,Prefabs
            ,Resources
            ,Animations
            ,Audio
            ,Materials
            ,Timelines
            ,Editor
            ,Textures
            ,Scenes
        };

    void Start() {
        //フォルダパスのリスト
        List<string> dirPath = CreatePath(Assets, dirList);

        //フォルダ作成
        foreach (string dir in dirPath) {
            //フォルダが存在しない場合
            if (!Directory.Exists(dir)) {
                //フォルダを作成
                Directory.CreateDirectory(dir);
                //コンソール出力
                Debug.Log("Create folder success ：" + dir);
            } else {
                //フォルダが既に存在する場合
                Debug.Log("Exists foler ：" + dir);
            }
        }
    }

    /**
    * フォルダパスのリストを作成
    * フォルダ名に第1パラメーターの文字列を連結する
    */
    private List<string> CreatePath(string Assets, List<string> dirList) {
        //フォルダパスのリストを格納する変数
        List<string> dirPath = new List<string>();

        //フォルダ名に第1パラメーターの文字列を連結
        foreach (string dir in dirList) {
            string path = Assets + dir;
            dirPath.Add(path);
        }

        return dirPath;
    }
}