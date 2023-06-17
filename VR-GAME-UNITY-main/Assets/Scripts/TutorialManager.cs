using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class TutorialManager : MonoBehaviour
{

    [SerializeField] private TMP_Text TimeTextStep2;//to display the time of step 2 in the scene
    [SerializeField] private TMP_Text TextStep4;//to change the text when destroyed an object that is or not an alteration
    [SerializeField] private TMP_Text TextStep;//to update the text according to the step
    [SerializeField] private float timeIni = 20;//number of seconds 
    [SerializeField] private GameObject exitButtonClick;
    [SerializeField] private GameObject timeFinishedSound;


    List<GameObject> gameObjectsList = new List<GameObject>();
    GameObject cube;
    GameObject sphere;
    GameObject can;

    GameObject gun;

    int step = 1;

    int numAlterationActual = 0;

    int numAlterationPrev = 0;


    int iniObjects;

    bool exited = false;

    GameObject newsphere;

    GameObject[] prefabs;//store all prefabs grabbable

    Vector3 pos;
    Quaternion rot;

    string[] stepText = new string[] {"You can interact with objects. You are able to grab, touch and move them. \nYou can grab objects that are close to your hands or from a distance using the beam.\n\nStep 1: Grab an object.", 
        "Step 2: Memorize the room's objects and their colors before time runs out.\n\nHere we have:\n\t- A blue cube\n\t- A green can\n\t- A red sphere",
        "When the timer runs out, some disturbances occur in the room. \nThe counter on the gun indicates the number of alters remaining. \nYou must eliminate the alters, but if you eliminate any object that is not an alter, you lose.\n\nStep 3: Use the gun to shoot the alters and eliminate them to win the game.",
        " ",
        "Congratulations! \nYou have successfully completed the tutorial! \nYou are ready to play!"
        };

    string step4Text = "That object was NOT an alteration! \nIn the game it would have caused a new alteration in the multiverse and therefore you would have lost, GAME OVER.";

    private void Start()
    {
        cube = GameObject.Find("Cube"); ;//get the cube
        sphere = GameObject.Find("Sphere"); ;//get the sphere
        can = GameObject.Find("Can"); ;//get the can
        gun = GameObject.Find("ScifiHandGun"); ;//get the gun

        gameObjectsList.Add(cube);
        gameObjectsList.Add(sphere);
        gameObjectsList.Add(can);
        gameObjectsList.Add(gun);

        prefabs = Resources.LoadAll<GameObject>("SpawnObjects"); //get all prefabs spawned

        iniObjects = GameObject.FindGameObjectsWithTag("Objects").Length;

        pos = sphere.transform.position;
        rot = sphere.transform.rotation;

        TextStep.text = stepText[step - 1];
        if (GameResult.camera == 1)
        {
            //if camera must be split, toogle to the camera  scene settings (since at the start of the scene it is full mode)
            GameObject.Find("CameraMain").GetComponent<Camera>().targetDisplay = 1;
            GameObject.Find("LeftCamera").GetComponent<Camera>().targetDisplay = 0;
            GameObject.Find("RightCamera").GetComponent<Camera>().targetDisplay = 0;
        }

    }
    // Update is called once per frame
    void Update()
    {
        //if the tutorial is exited or finished don't check nothing
        if (exited)
        {
            return;
        }
        //1st. Grab an object
        if (step == 1)
        {
            if (step1())
            {
                //change step
                step++;
                TextStep.text = stepText[step - 1];
            }
        }
        //2nd. Tell to remember the objects and their colors
        else if (step == 2)
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
                step++;
                TextStep.text = stepText[step - 1];
            }
            int time = (int)System.Math.Floor(timeIni);
            TimeTextStep2.text = time.ToString();
        }
        //3rd. alterations happen and an object is replaced and the color of another is changed: num alterations = 2;
        else if (step == 3)
        {
            TimeTextStep2.text = " ";
            step3();
        }
        //4th. The player has to destroy both alterations, if he destroys one that is not, he has to repeat the step, when he destroys both step 5.
        else if (step == 4)
        {
            if (step4())
            {
                step++;
                TextStep.text = stepText[step - 1];
                TextStep.alignment = TextAlignmentOptions.Center;
                TextStep4.text = " ";
            }
        }
        //5th. the player destroyed all the alters and won
        else if(step == 5)
        {
            Invoke("step5", 10);//this will happen after 10 seconds
        }
    }

    private bool step1()
    {
        //check if an object is grabbed
        foreach (GameObject grab in gameObjectsList)
        {
            if (grab.GetComponent<GrabbableScript>().isObjectGrabbed())
            {
                return true;
            }
        }
        return false;
    }

    private void step3()
    {
        changeObjectColor(cube); //change the color of the cube
        cube.tag = "Alterations";//change its tag to alteration

        GameObject newObject = destroyObject(can); //replace the can
        newObject.tag = "Alterations";//change its tag to alteration
        numAlterationActual = GameObject.FindGameObjectsWithTag("Alterations").Length;
        numAlterationPrev = numAlterationActual;

        step++;
    }

    private bool step4()
    {
        numAlterationActual = GameObject.FindGameObjectsWithTag("Alterations").Length;
        if (numAlterationActual == 0)
        {
            return true;
        }

        if (numAlterationActual != numAlterationPrev)
        {
            TextStep4.text = " "; //the user has eliminated an alteration
        }

        //if the user destroys the sphere which is not an alteration, put the sphere again and
        //tell that he would have lost because of destroying something is not an alter
        if (GameObject.FindGameObjectsWithTag("Objects").Length != iniObjects)
        {
            newsphere = prefabs[prefabs.Length-1];//selects the last object from the prefabs which is the sphere
            Instantiate(newsphere, pos, rot);
            newsphere.tag = "Objects";
            newsphere.name = "Sphere";
            TextStep4.text = step4Text;
        }
        numAlterationPrev = numAlterationActual;
        return false;
    }

    private void step5()
    {
        Destroy(GameObject.Find("ScifiHandGun"));//because it was giving a non important warning
        exited = true;
        if(GameObject.Find("RenderStreaming(Clone)") != null)
        {
            DontDestroyOnLoad(GameObject.Find("RenderStreaming(Clone)"));
        }
        if (GameObject.Find("InputExport") != null)
        {
            DontDestroyOnLoad(GameObject.Find("---- Export ----")); //do not destroy InputExport object
        }
        SceneManager.LoadScene("Start Menu");
    }

    public void exit()
    {
        Destroy(GameObject.Find("ScifiHandGun"));//because it was giving a non important warning
        GameObject destroySound = Instantiate(exitButtonClick);
        destroySound.GetComponent<AudioSource>().Play();
        exited = true;
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

    public int getNumAlterations()
    {
        return numAlterationActual;
    }

}
