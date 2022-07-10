using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;


//�Q�lURL:https://learning-collection.com/unity3d-%E3%83%87%E3%83%95%E3%82%A9%E3%83%AB%E3%83%88%E3%83%95%E3%82%A9%E3%83%AB%E3%83%80%E3%81%AE%E8%87%AA%E5%8B%95%E7%94%9F%E6%88%90%E3%82%B9%E3%82%AF%E3%83%AA%E3%83%97%E3%83%88/
//�g�p�@�F��̃Q�[���I�u�W�F�N�g�ɃA�^�b�`���Q�[�����Đ����A�Z�b�g�t�H���_���ŐV���ɍX�V(Ctrl+R)
public class CreateDir : MonoBehaviour {
    //�쐬�t�H���_��
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

    //�쐬�t�H���_�̏�ʊK�w�iAssets�j
    private const string Assets = "Assets/";

    //�쐬�t�H���_�̃��X�g
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
        //�t�H���_�p�X�̃��X�g
        List<string> dirPath = CreatePath(Assets, dirList);

        //�t�H���_�쐬
        foreach (string dir in dirPath) {
            //�t�H���_�����݂��Ȃ��ꍇ
            if (!Directory.Exists(dir)) {
                //�t�H���_���쐬
                Directory.CreateDirectory(dir);
                //�R���\�[���o��
                Debug.Log("Create folder success �F" + dir);
            } else {
                //�t�H���_�����ɑ��݂���ꍇ
                Debug.Log("Exists foler �F" + dir);
            }
        }
    }

    /**
    * �t�H���_�p�X�̃��X�g���쐬
    * �t�H���_���ɑ�1�p�����[�^�[�̕������A������
    */
    private List<string> CreatePath(string Assets, List<string> dirList) {
        //�t�H���_�p�X�̃��X�g���i�[����ϐ�
        List<string> dirPath = new List<string>();

        //�t�H���_���ɑ�1�p�����[�^�[�̕������A��
        foreach (string dir in dirList) {
            string path = Assets + dir;
            dirPath.Add(path);
        }

        return dirPath;
    }
}