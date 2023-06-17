using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.InputSystem; //to listen to an input

public class HandPresence : MonoBehaviour
{
    [SerializeField] private InputActionProperty TriggerActive; //to get the trigger action
    [SerializeField] private InputActionProperty GripActive; //to get the grip action
    [SerializeField] private Animator handAnimator; //get the hand animator

    // Start is called before the first frame update
    void Start()
    {
        //to read the inputs correctly they must be enabled
        TriggerActive.action.Enable();
        GripActive.action.Enable();
    }

    void Update()
    {
        float triggerValue = TriggerActive.action.ReadValue<float>(); //read the value of the trigger action
        handAnimator.SetFloat("Trigger", triggerValue); //set the trigger value in the animator to the input action value

        float gripValue = GripActive.action.ReadValue<float>(); //read the value of the grip action
        handAnimator.SetFloat("Grip", gripValue); //set the grip value in the animator to the input action value
    }
}
