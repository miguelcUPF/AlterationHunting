using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class HandPhysicsScript : MonoBehaviour
{
    [SerializeField] private Transform target;
    [SerializeField] private GameObject targetModel;

    [SerializeField] private XRInteractorLineVisual rayInteractorVisual; //to get the ray interactor visual component
    [SerializeField] private XRRayInteractor rayInteractor; //to get the ray interactor component

    [SerializeField] private XRDirectInteractor directInteractor; //to get the direct interactor component


    [SerializeField] private Renderer nonPhysicalHandRenderer; //to store the renderer and enable it and disable it
    [SerializeField] private float nonPhysicalThreshold = 0.05f; //trheshold to show the non physical hand

    private Rigidbody rb;

    // Start is called before the first frame update
    void Start()
    {
        //access the rigid body component at the start of the game
        rb = GetComponent<Rigidbody>();

    }

    void Update()
    {
        //get distance between controller and physical hands
        float distance = Vector3.Distance(transform.position, target.position);

        //if distance bigger than threshold then enable (show) the non physical hands and disable the ray
        //else disable the hands and enable the ray
        if (distance > nonPhysicalThreshold)
        {
            nonPhysicalHandRenderer.enabled = true;
            if (rayInteractor.isSelectActive) //if its holding an object
            {
                rayInteractorVisual.enabled = false; //only make it non visual
            }
            else
            {
                rayInteractor.enabled = false;//if not disable it
            }
        }
        else
        {
            nonPhysicalHandRenderer.enabled = false;
            rayInteractor.enabled = true;
            if (rayInteractor.isSelectActive || directInteractor.isSelectActive) //if its holding an object
            {
                rayInteractorVisual.enabled = false;
            }
            else
            {
                rayInteractorVisual.enabled = true;
            }
        }

    }

    void FixedUpdate()
    {
        //make the rigid body follow the pos of the target
        //change the vel of the object to go to the target pos
        rb.velocity = (target.position - transform.position) / Time.fixedDeltaTime;
        //make the rigid body follow the rotation of the target
        Quaternion rotationDifference = target.rotation * Quaternion.Inverse(transform.rotation);
        rotationDifference.ToAngleAxis(out float angleInDegree, out Vector3 rotationAxis);

        Vector3 rotationDifferenceInDegree = angleInDegree * rotationAxis;

        //compute angular velocity in radiants
        rb.angularVelocity = (rotationDifferenceInDegree * Mathf.Deg2Rad / Time.fixedDeltaTime);
    }

    public void HideHands(bool hide) //to  hide or not the hands
    {
        targetModel.SetActive(!hide);
    }
}
