import { Receiver } from "./receiver.js";
import { getServerConfig } from "../../js/config.js";

setup();

let playButton;
let receiver;
let useWebSocket;

window.document.oncontextmenu = function () {
  return false;     // cancel default menu
};

window.addEventListener('resize', function () {
  receiver.resizeVideo();
}, true);

window.addEventListener('beforeunload', async () => {
  await receiver.stop();
}, true);

async function setup() {
  const res = await getServerConfig();
  useWebSocket = res.useWebSocket;
  showWarningIfNeeded(res.startupMode);
  showPlayButton();
}

function showWarningIfNeeded(startupMode) {
  const warningDiv = document.getElementById("warning");
  if (startupMode == "private") {
    warningDiv.innerHTML = "<h4>Warning</h4> This sample is not working on Private Mode.";
    warningDiv.hidden = false;
  }
}

function showPlayButton() {
  if (!document.getElementById('playButton')) {
    let elementPlayButton = document.createElement('img');
    elementPlayButton.id = 'playButton';
    elementPlayButton.src = 'images/Play.png';
    elementPlayButton.alt = 'Start Streaming';
    playButton = document.getElementById('player').appendChild(elementPlayButton);
    playButton.addEventListener('click', onClickPlayButton);
  }
}

function onClickPlayButton() {

  playButton.style.display = 'none';

  const playerDiv = document.getElementById('player');

  const frameRate = document.getElementById('frameRateInput');
  const videoBitsPerSecond = document.getElementById('videoBitsInput');

  // add video player
  const elementVideo = document.createElement('video');
  elementVideo.id = 'Video';
  elementVideo.style.touchAction = 'none';
  playerDiv.appendChild(elementVideo);

  setupVideoPlayer(elementVideo, frameRate, videoBitsPerSecond).then(value => receiver = value);

  // add fullscreen button
  const elementFullscreenButton = document.createElement('img');
  elementFullscreenButton.id = 'fullscreenButton';
  elementFullscreenButton.src = 'images/FullScreen.png';
  playerDiv.appendChild(elementFullscreenButton);
  elementFullscreenButton.addEventListener("click", function () {
    if (!document.fullscreenElement || !document.webkitFullscreenElement) {
      if (playerDiv.requestFullscreen) {//document.documentElement
        playerDiv.requestFullscreen();//document.documentElement
      }
      else if (playerDiv.webkitRequestFullscreen) { //document.documentElement
        playerDiv.webkitRequestFullscreen(Element.ALLOW_KEYBOARD_INPUT);//document.documentElement
      } else {
        if (playerDiv.style.position == "absolute") {
          playerDiv.style.position = "relative";
        } else {
          playerDiv.style.position = "absolute";
        }
      }
    }
  });
  document.addEventListener('webkitfullscreenchange', onFullscreenChange);
  document.addEventListener('fullscreenchange', onFullscreenChange);

  function onFullscreenChange() {
    if (document.webkitFullscreenElement || document.fullscreenElement) {
      playerDiv.style.position = "absolute";
      elementFullscreenButton.style.display = 'none';
    }
    else {
      playerDiv.style.position = "relative";
      elementFullscreenButton.style.display = 'block';
    }
  }
}

async function setupVideoPlayer(elements) {
  const videoPlayer = new Receiver(elements);
  await videoPlayer.setupConnection(useWebSocket);

  videoPlayer.ondisconnect = onDisconnect;

  return videoPlayer;
}

function onDisconnect() {
  const playerDiv = document.getElementById('player');
  clearChildren(playerDiv);
  toggleRecordingButton.textContent = 'Start Recording';
  toggleRecordingButton.classList.remove('w3-red');
  toggleRecordingButton.classList.add('w3-green');
  receiver.stop();
  receiver = null;
  showPlayButton();
}

function clearChildren(element) {
  while (element.firstChild) {
    element.removeChild(element.firstChild);
  }
}

document.addEventListener('DOMContentLoaded', function () {
  const toggleRecordingButton = document.getElementById('toggleRecordingButton');
  const frameRateInput = document.getElementById('frameRateInput');
  const videoBitsInput = document.getElementById('videoBitsInput');

  toggleRecordingButton.addEventListener('click', function () {
    if (!receiver) {
      console.error('Play button not clicked. Recording is not possible.');
      return;
    }

    if (toggleRecordingButton.classList.contains('w3-green')) {
      receiver.startRecording(frameRateInput.value, videoBitsInput.value);
      toggleRecordingButton.textContent = 'Stop Recording';
      toggleRecordingButton.classList.remove('w3-green');
      toggleRecordingButton.classList.add('w3-red');
    } else {
      toggleRecordingButton.textContent = 'Start Recording';
      toggleRecordingButton.classList.remove('w3-red');
      toggleRecordingButton.classList.add('w3-green');
      receiver.stopRecording();
    }
  });
});
