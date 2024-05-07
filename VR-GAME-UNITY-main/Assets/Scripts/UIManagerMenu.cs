using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class UIManagerMenu : MonoBehaviour
{
    [SerializeField] private GameObject ButtonClick;
    [SerializeField] private int applicationTargetFrameRate = -1;

    GameObject[] renderStreaming;//create RenderStreaming object 

    // Start is called before the first frame update
    void Start()
    {
        Application.targetFrameRate = applicationTargetFrameRate;
        if (GameResult.started == 0)
        {
            renderStreaming = Resources.LoadAll<GameObject>("RenderStreaming");
            Instantiate(renderStreaming[0], transform.position, transform.rotation);
            GameResult.started = 1; //game has been started so no need to create again the RenderStreaming object, if not done when going back to the menu, two renderstreaming objects would be created
            //game not started so the camera is split view
            GameResult.camera = 1;
        }
        else
        {
            if (GameResult.camera == 0)
            {
                toggleGameView(); //if camera must be full screen, toogle to this camera and scene settings (since at the start of the scene it is full mode)
            }
        }

    }

    public void startGame()
    {
        GameObject sound = Instantiate(ButtonClick);
        sound.GetComponent<AudioSource>().Play();
        if (GameObject.Find("RenderStreaming(Clone)") != null)
        {
            DontDestroyOnLoad(GameObject.Find("RenderStreaming(Clone)")); //do not destroy render streaming object
        }
        if (GameObject.Find("InputExport") != null)
        {
            DontDestroyOnLoad(GameObject.Find("---- Export ----")); //do not destroy InputExport object
        }
        SceneManager.LoadSceneAsync("Room 1", LoadSceneMode.Single);
    }

    public void tutorial()
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
        SceneManager.LoadSceneAsync("Tutorial", LoadSceneMode.Single);
    }

    //method to change game display view
    public void toggleGameView()
    {
        ButtonClick.GetComponent<AudioSource>().Play();
        if (GameObject.Find("Display button") != null)
        {
            GameObject displayBut = GameObject.Find("Display button");
            GameObject displaytxt = displayBut.transform.GetChild(0).gameObject;
            TMP_Text displayEditableTxt = displaytxt.GetComponent<TMP_Text>();
            if (GameObject.Find("CameraMain") != null && GameObject.Find("LeftCamera") != null && GameObject.Find("RightCamera") != null)
            {
                if (displayEditableTxt.text == "Full camera")
                {
                    displayEditableTxt.text = "Left/Right camera";
                    GameObject.Find("CameraMain").GetComponent<Camera>().targetDisplay = 0;
                    GameObject.Find("LeftCamera").GetComponent<Camera>().targetDisplay = 1;
                    GameObject.Find("RightCamera").GetComponent<Camera>().targetDisplay = 1;
                    GameResult.camera = 0;
                }
                else
                {
                    displayEditableTxt.text = "Full camera";
                    GameObject.Find("CameraMain").GetComponent<Camera>().targetDisplay = 1;
                    GameObject.Find("LeftCamera").GetComponent<Camera>().targetDisplay = 0;
                    GameObject.Find("RightCamera").GetComponent<Camera>().targetDisplay = 0;
                    GameResult.camera = 1;
                }
            }

        }

    }

}
