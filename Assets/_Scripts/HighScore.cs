using UnityEngine;
using UnityEngine.UI;

public class HighScore : MonoBehaviour {
    public GameObject highScoreText;
    public float speed = 1.0f;
    private Text text;
    private float time;
    void Start() {
        text = gameObject.GetComponent<Text>();
    }

    void Update() {
        //éQçlhttps://goodlucknetlife.com/unity-2daction-blinker/
        if (highScoreText) {
            text.color = GetAlphaColor(text.color);
        }
    }

    Color GetAlphaColor(Color color) {
        time += Time.deltaTime * 5.0f * speed;
        color.a = Mathf.Sin(time);
        return color;
    }
}