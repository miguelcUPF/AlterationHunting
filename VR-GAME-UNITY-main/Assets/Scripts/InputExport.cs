using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine.InputSystem;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem.Controls;
using System;

public class InputExport : MonoBehaviour
{
    private Vector2 prev_mouse = Vector2.zero;
    private Vector2 prev_gamepad_right = Vector2.zero;
    private Vector2 prev_gamepad_left = Vector2.zero;
    // InputEvent structure to store input event data
    public struct InputEvent
    {
        public int deviceId; // Device ID
        public string device; // Device type (e.g. Mouse, Keyboard, Gamepad)
        public string type; // Event type (e.g. Button, Press, Stick)
        public string timeSinceStart; // Time since the start of the game
        public string systemTimestamp; // Timestamp of the system

        // Additional data fields for different event types
        public string data1;
        public string data2;

        // Constructor to initialize InputEvent with data
        public InputEvent(int deviceId, string device, string type, string timeSinceStart, string systemTimestamp, string data1, string data2)
        {
            this.deviceId = deviceId;
            this.device = device;
            this.type = type;
            this.timeSinceStart = timeSinceStart;
            this.systemTimestamp = systemTimestamp;
            this.data1 = data1;
            this.data2 = data2;
        }
    }

    private List<InputEvent> events = new List<InputEvent>(); // List to store input events
    private HashSet<int> deviceIds = new HashSet<int>(); // HashSet to store device IDs

    private float startTime; // Start time of the game

    private void Awake()
    {
        // Add all initial devices to the deviceIds HashSet 
        foreach (var device in InputSystem.devices)
        {
            deviceIds.Add(device.deviceId);
        }
    }

    private void Start()
    {
        startTime = Time.time; // Record the start time of the game
    }

    private void Update()
    {
        // Loop through all input devices
        foreach (var device in InputSystem.devices)
        {
            // Check if the device ID is in the deviceIds HashSet
            bool isInitial = deviceIds.Contains(device.deviceId);
            // If the device is an initial device, don't store the input event
            /*if (isInitial)
            {
                continue;
            }*/

            // If the device is a mouse
            if (device is Mouse mouse)
            {
                // Loop through all mouse pressed buttons
                foreach (var button in mouse.allControls.Where(control => control is ButtonControl)
                                .Select(control => control as ButtonControl)
                                .Where(button => button.isPressed || button.wasPressedThisFrame || button.wasReleasedThisFrame)
                                .ToArray())
                {
                    string buttonState = "";
                    if (button.wasPressedThisFrame) {
                        buttonState = "Pressed this frame";
                    } else if (button.wasReleasedThisFrame) {
                        buttonState = "Released this frame";
                    }
                    else {
                        buttonState = "isPressed";
                    }
                    // Create an InputEvent and add it to the events List
                    var inputEvent = new InputEvent(device.deviceId, "Mouse", "Button", (Time.time - startTime).ToString("0.000000").Replace(",", "."), System.DateTime.Now.ToString("yyyy-MM-dd-HH:mm:ss.fff"), button.displayName, buttonState);
                    events.Add(inputEvent);
                }

                // Create an InputEvent for mouse position and add it to the events List if it has changed

                if (mouse.position.ReadValue() == Vector2.zero || mouse.position.ReadValue() == prev_mouse)
                {
                    continue;
                }
                else
                {
                    var position = mouse.position.ReadValue();
                    var positionEvent = new InputEvent(device.deviceId, "Mouse", "Position", (Time.time - startTime).ToString("0.000000").Replace(",", "."), System.DateTime.Now.ToString("yyyy-MM-dd-HH:mm:ss.fff"), position.x.ToString().Replace(",", "."), position.y.ToString().Replace(",", "."));
                    events.Add(positionEvent);
                }

                prev_mouse = mouse.position.ReadValue();


            }
            // If the device is a keyboard
            else if (device is Keyboard keyboard)
            {
                // Loop through all keyboard pressed keys
                foreach (var key in keyboard.allControls.Where(control => control is KeyControl)
                                   .Select(control => control as KeyControl)
                                   .Where(key => key.isPressed || key.wasPressedThisFrame || key.wasReleasedThisFrame)
                                   .ToArray())
                {
                    string keyState = "";

                    if (key.wasPressedThisFrame)
                    {
                        keyState = "Pressed this frame";
                    }
                    else if (key.wasReleasedThisFrame)
                    {
                        keyState = "Released this frame";
                    }
                    else
                    {
                        keyState = "isPressed";
                    }
                    // Create an InputEvent and add it to the events List
                    var inputEvent = new InputEvent(device.deviceId, "Keyboard", "Press", (Time.time - startTime).ToString("0.000000").Replace(",", "."), System.DateTime.Now.ToString("yyyy-MM-dd-HH:mm:ss.fff"), key.ToString(), keyState);
                    events.Add(inputEvent);
                }
            }
            // If the device is a gamepad
            else if (device is Gamepad gamepad)
            {
                var buttons = gamepad.allControls
                                    .Where(control => control is ButtonControl)
                                    .Select(control => (ButtonControl)control)
                                    .ToArray();
                foreach (var button in buttons)
                {
                    if (button.isPressed || button.wasPressedThisFrame || button.wasReleasedThisFrame)
                    {
                        string buttonState = "";
                        if (button.wasPressedThisFrame)
                        {
                            buttonState = "Pressed this frame";
                        }
                        else if (button.wasReleasedThisFrame)
                        {
                            buttonState = "Released this frame";
                        }
                        else
                        {
                            buttonState = "isPressed";
                        }
                        events.Add(new InputEvent(device.deviceId, "Gamepad", "Button", (Time.time - startTime).ToString("0.000000").Replace(",", "."), System.DateTime.Now.ToString("yyyy-MM-dd-HH:mm:ss.fff"), button.displayName, buttonState));
                    }
                }
                if (gamepad.rightStick.ReadValue() == Vector2.zero || gamepad.rightStick.ReadValue() == prev_gamepad_right)
                {
                    continue;
                }
                else
                {
                    events.Add(new InputEvent(device.deviceId, "Gamepad", "Stick", (Time.time - startTime).ToString("0.000000").Replace(",", "."), System.DateTime.Now.ToString("yyyy-MM-dd-HH:mm:ss.fff"), gamepad.rightStick.ReadValue().x.ToString().Replace(",", "."), gamepad.rightStick.ReadValue().y.ToString().Replace(",", ".")));
                }


                if (gamepad.leftStick.ReadValue() == Vector2.zero || gamepad.leftStick.ReadValue() == prev_gamepad_left)
                {
                    continue;
                }
                else
                {
                    events.Add(new InputEvent(device.deviceId, "Gamepad", "Stick", (Time.time - startTime).ToString("0.000000").Replace(",", "."), System.DateTime.Now.ToString("yyyy-MM-dd-HH:mm:ss.fff"), gamepad.leftStick.ReadValue().x.ToString().Replace(",", "."), gamepad.leftStick.ReadValue().y.ToString().Replace(",", ".")));
                }

                prev_gamepad_right = gamepad.rightStick.ReadValue();
                prev_gamepad_left = gamepad.leftStick.ReadValue();
            }
        }

    }
    // Export data to CSV on quit
    private void OnApplicationQuit()
    {
        // Create a new file name based on the current time stamp
        string fileName = "input_events_" + DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss") + ".csv";

        // Combine the file path and file name to get the full file path
        string filePath = Path.Combine(Application.dataPath, "Csv", fileName);

        // Open a file stream to write the CSV data to
        using (FileStream fileStream = new FileStream(filePath, FileMode.Create, FileAccess.Write))
        {
            // Create a stream writer to write the CSV data to the file stream
            using (StreamWriter streamWriter = new StreamWriter(fileStream))
            {
                // Write the header row to the CSV file
                streamWriter.WriteLine("Device ID,Device,Type,Time Since Start (s),System Timestamp, Data 1, Data 2");

                // Iterate through each input event and write it to the CSV file
                foreach (InputEvent inputEvent in events)
                {
                    // Write the input event data to the CSV file
                    streamWriter.WriteLine("{0},{1},{2},{3},{4},{5},{6}",
                        inputEvent.deviceId,
                        inputEvent.device,
                        inputEvent.type,
                        inputEvent.timeSinceStart,
                        inputEvent.systemTimestamp,
                        inputEvent.data1,
                        inputEvent.data2);
                }
            }
        }
    }
}
