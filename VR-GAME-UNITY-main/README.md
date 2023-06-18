# VR-GAME-UNITY

Welcome to the VR application project! This application has been developed in Unity 2021.3.6f1 and thoroughly tested with that specific version. To ensure compatibility and avoid any package updates or incompatibility issues, please make sure to use Unity 2021.3.6f1.

To get started with the project, follow these steps:

1. Download Unity 2021.3.6f1 from the Unity website: [Unity 2021.3.6 Download](https://unity.com/releases/editor/whats-new/2021.3.6).

2. Install Unity Hub and launch it.

3. Download the project folder ("VR-GAME-UNITY-main") and unzip it to a desired location on your computer.

4. In Unity Hub, navigate to the Projects tab and click on the "Open" button. Then select "Add project from disk."

5. Browse and select the "VR-GAME-UNITY-main" folder as the project folder.

Once the project is added to Unity, you're ready to explore and enjoy the application! Make sure to set the Start Menu scene as the active scene. You can find it by going to "Assets > Scenes" and selecting the Start Menu scene.

To test the application within the Unity Editor, simply click the play button. If you want to test it with the streaming solution, you'll need to run the web server as a WebSocket, following the instructions provided in the web server's README. After starting the web server, click the play button in the Unity Editor. 

The encoding settings for the streaming can be found in the "Video Stream Sender" component of the "RenderStreaming" object located in "Assets > Resources > RenderStreaming".

Feel free to customize the game according to your preferences. Inside "Assets > Resources > SpawnObjects", you can define the objects that will be randomly spawned at the beginning of each game, with random colors. 

In the main scene ("Assets > Scenes > Room 1"), you can duplicate or remove grey cubes which determines the position where new objects will be created at the start of each game. These cubes can be found under "---- Grabbable Objects ----" in the hierarchy of Room 1. 
Additionally, within this scene, you can adjust the time given to the player for memorizing game objects and the percentage of alterations that occur. Modify these settings in the "General Manager" script component, which can be found within the "GeneralManager" object under "---- Scene Specific manager ----" in the Room 1 hierarchy.

Enjoy exploring and customizing the VR application! Should you have any questions or need further assistance, please don't hesitate to ask.