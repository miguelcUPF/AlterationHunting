using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class TeleportManager : MonoBehaviour
{

    [SerializeField] private XRRayInteractor rayInteractor; //to store the ray Interactor component, the object that contains it mus be dragged

    [SerializeField] private InteractionLayerMask TeleportLayer; //to get the interaction layer mask
    [SerializeField] private TeleportationProvider TeleportProvider; //to get the teleportation provider

    [SerializeField] private InputActionProperty TeleportControl; //to get the action I want to control the teleportation
    [SerializeField] private InputActionProperty TriggerActive; //to get the trigger action
    [SerializeField] private InputActionProperty GripActive; //to get the grip action

    private bool isTeleportActive = false; //to know if the teleport is active, initially not active
    private InteractionLayerMask InitialInteractionLayer; //to store the initial interaction layers
    private List<IXRInteractable> interactables = new List<IXRInteractable>(); //to store the list of valid ray targets

    // Start is called before the first frame update
    void Start()
    {
        //to read the inputs correctly they must be enabled
        TeleportControl.action.Enable();
        TriggerActive.action.Enable();
        GripActive.action.Enable();

        //now I need to know when the teleport is activated or not (the set action is performed)
        TeleportControl.action.performed += OnTeleportControl; 

        InitialInteractionLayer = rayInteractor.interactionLayers; //store initial interaction layers
    }

    // Update is called once per frame
    void Update()
    {
        //verify the teleport is active
        if (!isTeleportActive)
        {
            return; //do nothing
        }
        //if the teleport is active and the trigger button is not pressed
        if (!TriggerActive.action.triggered)
        {
            return;
        }
        //now the teleport is active and the trigger button is pressed
        //it must be a valid zone to teleport
        rayInteractor.GetValidTargets(interactables);
        //if no valid teleport area
        if (interactables.Count == 0)
        {
            return;
        }
        //get the teleportation point
        rayInteractor.TryGetCurrent3DRaycastHit(out RaycastHit hit);
        TeleportRequest request = new TeleportRequest();
        if (interactables[0].interactionLayers == 2) //teleportation area layer mask
        {
            request.destinationPosition = hit.point;
        }
        //teleport to the point
        TeleportProvider.QueueTeleportRequest(request);
    }

    private void OnTeleportControl(InputAction.CallbackContext Obj)
    {
        if (isTeleportActive == true) //if teleport is active, deactivate it
        {
            turnOffTeleportation();
        }
        else
        {         
            //verify that the grip is not pressed
            if (GripActive.action.phase != InputActionPhase.Performed)
            {
                turnOnTeleportation();
            }
        }
    }

    private void turnOnTeleportation()
    {
        //activate the teleportation
        isTeleportActive = true;

        //change the line type of the ray to curve when teleport is active
        rayInteractor.lineType = XRRayInteractor.LineType.ProjectileCurve;
        //to allow the teleport ray to have as interactor layer mask the teleport layer
        rayInteractor.interactionLayers = TeleportLayer;
    }

    private void turnOffTeleportation()
    {
        //deactivate the teleport
        isTeleportActive = false;

        //change the line type of the ray back to straight when teleport is active
        rayInteractor.lineType = XRRayInteractor.LineType.StraightLine;
        //to reset the interactor layer mask
        rayInteractor.interactionLayers = InitialInteractionLayer;
    }
}
