using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;


public class GeneralManager : MonoBehaviour
{
    private int numAlterationIni; //number of initial alterations
    private int numAlterationActual; //number of actual alterations

    private GameObject[] alterationsIni; //initial alterations
    private GameObject[] alterations; //alterations update


    private GameObject[] objectsIni; //initial objects
    private GameObject[] objects; //objects update

    [SerializeField] private float timeIni = 15;//number of seconds remaining
    [SerializeField] private float percentageAlters = 0.25f;//percentage of alters in 
    [SerializeField] private TMP_Text TimeText;//to display the time in the scene
    [SerializeField] private TMP_Text ActualTimeText;//to display the time in the scene


    private bool isAltered = false; //to store if the world has been altered
    private bool isTimerActive = false;

    GameObject[] prefabs;//store all prefabs grabbable

    private int numDestroyed = 0;

    [SerializeField] private GameObject timeFinishedSound;

    private void Start()
    {
        isTimerActive = true;
        prefabs = Resources.LoadAll<GameObject>("SpawnObjects"); //get all prefabs spawned
        if (GameResult.camera == 1)
        {
            //if camera must be split, toogle to the camera  scene settings (since at the start of the scene it is full mode)
            GameObject.Find("CameraMain").GetComponent<Camera>().targetDisplay = 1;
            GameObject.Find("LeftCamera").GetComponent<Camera>().targetDisplay = 0;
            GameObject.Find("RightCamera").GetComponent<Camera>().targetDisplay = 0;
        }
        InitializeGame();
    }
    // Update is called once per frame
    void Update()
    {
        if (isTimerActive)
        {
            if (timeIni > 0)
            {
                timeIni -= Time.deltaTime;
            }
            else
            {
                timeIni = 0;
                GameObject sound = Instantiate(timeFinishedSound);
                Destroy(sound, 5);
                alterWorld();
                alterationsIni = GameObject.FindGameObjectsWithTag("Alterations"); //get the objects with tag alterations
                objectsIni = GameObject.FindGameObjectsWithTag("Objects"); //get the objects with tag objects
                numAlterationIni = alterationsIni.Length; //store the number of initial alterations, to get the number of bullets
                
                isTimerActive = false;//so that it doesn't happen in everyframe, only once
            }
        }
        if (isAltered)
        {
            if (GameFinished())
            {
                //The SceneManager loads the new Scene as a single Scene (not overlapping). This is Single mode.
                Destroy(GameObject.Find("ScifiHandGun"));//because it was giving a non important warning
                if (GameObject.Find("RenderStreaming(Clone)") != null)
                {
                    DontDestroyOnLoad(GameObject.Find("RenderStreaming(Clone)"));
                }
                if (GameObject.Find("InputExport") != null)
                {
                    DontDestroyOnLoad(GameObject.Find("---- Export ----")); //do not destroy InputExport object
                }
                SceneManager.LoadSceneAsync("GameOver", LoadSceneMode.Single);
            }
        }
        numAlterationActual = GameObject.FindGameObjectsWithTag("Alterations").Length;
        GameResult.NumAlterations = numAlterationActual;
        DisplayTime(timeIni);
        //display date time
        ActualTimeText.text = System.DateTime.Now.ToString("t");
    }

    private void alterWorld()
    {
        GameObject[] grabbableObjectArr = GameObject.FindGameObjectsWithTag("Grabbable"); ;//get the grabbable objects 
        
        //produce a % of alterations randomly assigned
        int alterations = Mathf.RoundToInt(grabbableObjectArr.Length*percentageAlters);//% of objects will be alterations
        int colorAltered = (int) alterations / 2;//half of the alterations will be changed of color
        int destroyAltered = alterations - colorAltered;//the rest will be destroyed and replaces

        List<int> colorAlteredIndexs = new List<int>();//store the index of the color altered objects, initially empty
        List<int> destroyAlteredIndexs = new List<int>();//store the index of the destroy altered objects, initially empty


        for (int i = 0; i < colorAltered; i++) //get the index of color altered object
        {
            bool indexValid = false;
            while (!indexValid)
            {
                int index = Random.Range(0, grabbableObjectArr.Length);// select randomly one grabbable object
                if (!colorAlteredIndexs.Contains(index))
                {
                    colorAlteredIndexs.Add(index);//add the index object as altered
                    changeObjectColor(grabbableObjectArr[index]); //call the function that changes its color and tag
                    grabbableObjectArr[index].tag = "Alterations";//change its tag to alteration
                    indexValid = true;
                }

            }
        }

        for (int i = 0; i < destroyAltered; i++) //get the index of destroy altered object
        {
            bool indexValid = false;
            while (!indexValid)
            {
                int index = Random.Range(0, grabbableObjectArr.Length);// select randomly one grabbable object
                if (!destroyAlteredIndexs.Contains(index) && !colorAlteredIndexs.Contains(index)) //if not already altered
                {
                    destroyAlteredIndexs.Add(index);//add the index object as altered
                    GameObject newObject = destroyObject(grabbableObjectArr[index]);
                    newObject.tag = "Alterations";//change its tag to alteration
                    numDestroyed++;
                    indexValid = true;
                }

            }
        }
        isAltered = true;
        //get all the rest of grabbable objects and change its tag to objects
        GameObject[] grabbableArrAfterAlt = GameObject.FindGameObjectsWithTag("Grabbable"); ;//get the grabbable objects 
        foreach (GameObject obj in grabbableArrAfterAlt)
        {
            obj.tag = "Objects";
        }
    }
    private void changeObjectColor(GameObject alter)
    {
        // apply color change on the object's material and childs
        Transform[] childs = alter.GetComponentsInChildren<Transform>(); //list containing the object and its childs
        float r = Random.value; 
        float g = Random.value; 
        float b = Random.value; 

        foreach (Transform child in childs)
        {
            try
            {
                if (child.GetComponent<Renderer>() != null)
                {
                    float rC = child.GetComponent<Renderer>().material.color.r;
                    float gC = child.GetComponent<Renderer>().material.color.g;
                    float bC = child.GetComponent<Renderer>().material.color.b;
                    // pick a random color
                    Color newColor = new Color((rC + r)%1, (gC + g) % 1, (bC + b) % 1);
                    child.GetComponent<Renderer>().material.color = newColor;//change the material color, in unity no problem if exceeds 1.0f
                }
            }
            catch
            {
                continue;
            }

        }
    }

    private GameObject destroyObject(GameObject alter)
    {
        //get one random prefab from the folder
        GameObject prefabRandom = prefabs[Random.Range(0, prefabs.Length)]; 
        try
        {
            if (alter.GetComponent<GrabbableScript>().isObjectGrabbed()) //if object is grabbed don't destroy
            {
                changeObjectColor(alter);
                numDestroyed--;
                return alter;
            }
        }
        catch
        {
        }
        //create new object in same  position
        GameObject newAlter = Instantiate(prefabRandom, alter.transform.position, alter.transform.rotation);
        //change its color
        changeObjectColor(newAlter);
        Destroy(alter);//destroy the other
        return newAlter;
    }

    private void InitializeGame()
    {
        GameObject[] grabbableObjectArr = GameObject.FindGameObjectsWithTag("Grabbable"); ;//get the grabbable objects parent 

        foreach (GameObject grab in grabbableObjectArr)
        {
            GameObject newObj = destroyObject(grab);
            newObj.tag = "Grabbable"; //just in case they don't have it
        }
    }

    private bool GameFinished()
    {
        alterations = GameObject.FindGameObjectsWithTag("Alterations"); //get the objects with tag alterations
        objects = GameObject.FindGameObjectsWithTag("Objects"); //get the objects with tag objects

        if (objects.Length < (objectsIni.Length - numDestroyed)) //if some normal object has been removed
        {

            //game over --> player looses
            GameResult.result = 0;
            return true;
        }
        else
        {
            if (alterations.Length == 0 && alterations.Length != numAlterationIni)
            {
                //game over --> player wins
                GameResult.result = 1;
                return true;
            }
        }
        return false;
    }

    public int getNumAlterations()
    {
        return numAlterationActual;
    }
    public bool isWorldAltered()
    {
        return isAltered;
    }

    private void DisplayTime(float time)
    {
        float minutes = Mathf.FloorToInt(time / 60);
        float seconds = Mathf.FloorToInt(time % 60);
        TimeText.text = string.Format("{0:00}:{1:00}", minutes, seconds);
        if (timeIni == 0)
        {
            Destroy(GameObject.Find("Canvas Time Text"), 1);//destroy the canvas in 1 second after timer finishes
        }
    }

    public void endTimer()
    {
        timeIni = 0;
    }
}
