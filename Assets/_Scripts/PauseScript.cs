using UnityEngine;
using UnityEngine.UI;


//一時停止ボタン、参考　https://www.youtube.com/watch?v=w10_AXiGYuY
public class PauseScript : MonoBehaviour{

    public bool IsOnPause;
    public Sprite playButton;
    public Sprite pauseButton;
    public GameObject pauseEffect;
    public AudioClip pauseOnSE;
    public AudioClip pauseOffSE;
    public GameObject joyStick;

    public void Update() {
       if (Input.GetKeyDown(KeyCode.P)) {//GetKeyDown関数にしないと何回も押せてしまう。Pキーでもポーズがかかるように改良         
            pauseTheGame();
        }
    }

    public void pauseTheGame(){
        if (IsOnPause && !Input.GetKeyDown(KeyCode.Space)) { //これがないとボタンをクリックした後にスペースキーでもポーズができてしまう。
            Time.timeScale = 1;
            IsOnPause = false;
            //押すとボタンの画像自体が変わる方式に変更　https://futabazemi.net/unity/photo_change_collider/
            this.gameObject.GetComponent<Image>().sprite = pauseButton;
            AudioSource.PlayClipAtPoint(pauseOnSE, Camera.main.transform.position);
            pauseEffect.SetActive(false);
            if (joyStick) {//ジョイスティックがある場合
                joyStick.SetActive(true);
            }
        } else if(!Input.GetKeyDown(KeyCode.Space)) {//これがないとボタンをクリックした後にスペースキーでもポーズができてしまう。
            AudioSource.PlayClipAtPoint(pauseOffSE, Camera.main.transform.position);//時間を止めるより先に音を鳴らさないと音が鳴らない
            Time.timeScale = 0;
            IsOnPause = true;
            this.gameObject.GetComponent<Image>().sprite = playButton;
            pauseEffect.SetActive(true);
            if (joyStick) {//ジョイスティックがある場合
                joyStick.SetActive(false);
                //var ab = joyStick.GetComponent<FixedJoystick>();
                //ab.OnPointerUp(null);//ドラッグを終了したことにする
            }
        }
    }
}
