using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
//using DG.Tweening;

public class BallGenerator : MonoBehaviour
{
    //Ball‚ğ¶¬
    [SerializeField] GameObject ballprefab = default;
    //Eİ’è‚·‚é‰æ‘œ‚ğ—pˆÓ
    [SerializeField] Sprite[] ballSprites = default;

    public IEnumerator Spawns(int count) {
        for (int i = 0; i < count; i++) {
            Vector2 pos = new Vector2(Random.Range(-0.2f, 0.2f), 8f);
            GameObject ball = Instantiate(ballprefab, pos, Quaternion.identity);
            //‰æ‘œ‚Ìİ’è
            int ballID = Random.Range(0, ballSprites.Length);
            ball.GetComponent<SpriteRenderer>().sprite = ballSprites[ballID];
            ball.GetComponent<Ball>().id = ballID;
            yield return new WaitForSeconds(0.04f);
        }
    }
}
