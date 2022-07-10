using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;       //DllImportに必要
using System;

public static class Atsumaru
{

    public static class Comment
    {

#if UNITY_WEBGL && !UNITY_EDITOR
        [DllImport("__Internal")]
        private static extern string AtsumaruChangeScene(string str);
        [DllImport("__Internal")]
        private static extern string AtsumaruResetAndChangeScene(string str);
        [DllImport("__Internal")]
        private static extern string AtsumaruPushContextFactor(string str);
        [DllImport("__Internal")]
        private static extern string AtsumaruPushMinorContext();
        [DllImport("__Internal")]
        private static extern string AtsumaruSetContext(string str);
#endif

        public static void ChangeScene(string str)
        {
#if UNITY_WEBGL && !UNITY_EDITOR
        AtsumaruChangeScene(str);
#endif
        }

        public static void resetAndChangeScene(string str)
        {
#if UNITY_WEBGL && !UNITY_EDITOR
        AtsumaruResetAndChangeScene(str);
#endif
        }

        public static void pushContextFactor(string str)
        {
#if UNITY_WEBGL && !UNITY_EDITOR
        AtsumaruPushContextFactor(str);
#endif
        }

        public static void pushContext(string str)
        {
            string encodedText = CalcMd5(str);
#if UNITY_WEBGL && !UNITY_EDITOR
            AtsumaruPushContextFactor(encodedText);
#endif
        }


        public static void pushMinorContext()
        {
#if UNITY_WEBGL && !UNITY_EDITOR
        AtsumaruPushMinorContext();
#endif
        }

        public static void setContext(string str)
        {
#if UNITY_WEBGL && !UNITY_EDITOR
        AtsumaruSetContext(str);
#endif
        }
    }


#if UNITY_WEBGL && !UNITY_EDITOR
    [DllImport("__Internal")]
    private static extern string AtsumaruOpenLink(string str);
#endif

    public static void OpenURL(string url)
    {

#if UNITY_WEBGL && !UNITY_EDITOR
        AtsumaruOpenLink(url);
#else
        Application.OpenURL(url);
#endif

    }

    public static class scoreboards
    {

#if UNITY_WEBGL && !UNITY_EDITOR
        [DllImport("__Internal")]
        private static extern string AtsumaruScoreSetRecord(string board_id, string score);
        [DllImport("__Internal")]
        private static extern string AtsumaruScoreDisplay(string board_id);
#endif

        public static void setRecord(string board_id, string score)
        {
#if UNITY_WEBGL && !UNITY_EDITOR
            AtsumaruScoreSetRecord(board_id, score);
#endif
        }

        public static void display(string board_id)
        {
#if UNITY_WEBGL && !UNITY_EDITOR
            AtsumaruScoreDisplay(board_id);
#endif
        }

    }
    //--------------------------------------------------------------------
    /// <summary>  指定された文字列をMD5でハッシュ化し、文字列として返す
    /// </summary>
    /// <param name="srcStr">入力文字列</param>
    /// <returns>入力文字列のMD5ハッシュ値</returns>
    /// http://nanoappli.com/blog/archives/6347
    //--------------------------------------------------------------------
    private static string CalcMd5(string srcStr)
    {

        System.Security.Cryptography.MD5 md5 = System.Security.Cryptography.MD5.Create();

        // md5ハッシュ値を求める
        byte[] srcBytes = System.Text.Encoding.UTF8.GetBytes(srcStr);
        byte[] destBytes = md5.ComputeHash(srcBytes);

        // 求めたmd5値を文字列に変換する
        System.Text.StringBuilder destStrBuilder;
        destStrBuilder = new System.Text.StringBuilder();
        foreach (byte curByte in destBytes)
        {
            destStrBuilder.Append(curByte.ToString("x2"));
        }

        // 変換後の文字列を返す
        return destStrBuilder.ToString();
    }

}
