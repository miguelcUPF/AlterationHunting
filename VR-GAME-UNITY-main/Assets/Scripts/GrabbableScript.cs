using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GrabbableScript : MonoBehaviour
{
    [SerializeField] private float delay = 0.5f;

    private int layernum; //store the layer number
    private bool isGrabbed = false;
    private Transform parent;

    private List<Material> childsIniMat = new List<Material>(); //store the object material and its childs

    void Start()
    {
        parent = transform.parent; //store the parent
    }

    public void LayerChangeWithDelay(int layer)
    {
            layernum = layer;
            Invoke("LayerChange", delay); //invoke the change layer method in delay sec
    }

    public void LayerChange()
    {
        if (!isGrabbed)
        {
            //for the object and childs
            Transform[] childs = GetComponentsInChildren<Transform>(); //list containing the object and its childs
            foreach (Transform child in childs)
            {
                try
                {
                    child.gameObject.layer = layernum;
                }
                catch
                {
                    continue;
                }

            }
        }
    }


    public void LayerChangeGrab(int layer)
    {
        //for the object and childs
        Transform[] childs = GetComponentsInChildren<Transform>(); //list containing the object and its childs
        foreach (Transform child in childs)
        {
            try
            {
                child.gameObject.layer = layer;
            }
            catch
            {
                continue;
            }

        }
    }

    public void ChangeMaterial(Material material)
    {
        if (!isGrabbed)
        {
            Transform[] childs = GetComponentsInChildren<Transform>(); //list containing the object and its childs
            foreach (Transform child in childs)
            {
                try
                {
                    if (child.GetComponent<Renderer>() != null)
                    {

                        childsIniMat.Add(child.GetComponent<Renderer>().material);//store the material
                        child.GetComponent<Renderer>().material = material;//change the material
                    }
                }
                catch
                {
                    continue;
                }

            }
        }
    }

    public void ResetMaterial()
    {
        if (childsIniMat.Count > 0)
        {
            Transform[] childs = GetComponentsInChildren<Transform>();
            int i = 0;
            foreach (Transform child in childs)
            {
                try
                {
                    if (child.GetComponent<Renderer>() != null)
                    {
                        child.GetComponent<Renderer>().material = childsIniMat[i];//reset its material
                        i++;
                    }
                }
                catch
                {
                    continue;
                }

            }
        }
    }

    public void SetParentToRig()
    {
        transform.SetParent(GameObject.Find("XR Rig").transform);//get the rig
    }

    public void ResetParent()
    {
            transform.SetParent(parent);
    }


    public void objectGrabbed()
    {
        isGrabbed = true;
    }

    public void objectReleased()
    {
        isGrabbed = false;
    }

    public bool isObjectGrabbed()
    {
        return isGrabbed;
    }

}
