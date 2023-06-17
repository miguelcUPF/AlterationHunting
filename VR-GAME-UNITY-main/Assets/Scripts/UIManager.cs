using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class UIManager : MonoBehaviour
{
    [SerializeField] private TMP_Text result;
    [SerializeField] private TMP_Text altersRemainingNum;
    private string[] resultText = {"GAME OVER!","CONGRATULATIONS!"};
    [SerializeField] private GameObject ButtonClick;
    [SerializeField] private GameObject successSound;
    [SerializeField] private GameObject gameOverSound;



    // Start is called before the first frame update
    void Start()
    {
        Invoke("playAudio", 0.5f); //invoke the change layer method in delay sec
        result.text = resultText[GameResult.result];        
        altersRemainingNum.text = GameResult.NumAlterations.ToString();
        if (GameResult.camera == 1)
        {
            //if camera must be split, toogle to the camera  scene settings (since at the start of the scene it is full mode)
            GameObject.Find("CameraMain").GetComponent<Camera>().targetDisplay = 1;
            GameObject.Find("LeftCamera").GetComponent<Camera>().targetDisplay = 0;
            GameObject.Find("RightCamera").GetComponent<Camera>().targetDisplay = 0;
        }
    }

    public void playAudio()
    {
        GameObject[] soundsResult = { gameOverSound, successSound };
        GameObject sound = Instantiate(soundsResult[GameResult.result]);
        sound.GetComponent<AudioSource>().Play();
    }

    public void restartGame()
    {
        GameObject sound = Instantiate(ButtonClick);
        sound.GetComponent<AudioSource>().Play();
        if (GameObject.Find("RenderStreaming(Clone)") != null)
        {
            DontDestroyOnLoad(GameObject.Find("RenderStreaming(Clone)"));
        }
        if (GameObject.Find("InputExport") != null)
        {
            DontDestroyOnLoad(GameObject.Find("---- Export ----")); //do not destroy InputExport object
        }
        SceneManager.LoadSceneAsync("Room 1", LoadSceneMode.Single);
    }

    public void goToMenu()
    {
        GameObject sound = Instantiate(ButtonClick);
        sound.GetComponent<AudioSource>().Play();
        if (GameObject.Find("RenderStreaming(Clone)") != null)
        {
            DontDestroyOnLoad(GameObject.Find("RenderStreaming(Clone)"));
        }
        if (GameObject.Find("InputExport") != null)
        {
            DontDestroyOnLoad(GameObject.Find("---- Export ----")); //do not destroy InputExport object
        }
        SceneManager.LoadSceneAsync("Start Menu", LoadSceneMode.Single);
    }

}
