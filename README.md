# THIS RUMBLEVERSE SERVER WAS NOT MADE BY ME! ALL OF THE WORK WAS DONE IN THE PAST BY THE PROJECTKO TEAM BEFORE THE SHUTDOWN! Project KO is NOT in any way affiliated with this repo.

# Instructions

PRE-BUILD DLLS ARE IN THE /dlls FOLDER!

## Prerequisites
- Visual Studio 2022 Community Edition [Download here](https://visualstudio.microsoft.com/vs/community/)

## Compilation
1. Open `dllmain.cpp` with Visual Studio.
2. Build the solution.
3. Copy the DLL from `server-code\x64\Release`.

## Hosting a Local Server
To host a local server, follow these steps:

1. open Rumbleverse
2. download a dll injector (this one works good: https://github.com/nefarius/Injector)
3. open terminal in the directory where your dll that you want to inject is located, use `Injector.exe --process-name RumbleverseClient-Win64-Shipping.exe --inject C:\path\to\your.dll`

You may need to relaunch it a few times as this version is unstable. Once your console displays "Listening" in white text, the server is ready to join. 
(to start rumbleverse with it's console run `start /b "" RumbleverseClient-Win64-Shipping.exe" "-log"`)

## Joining the Server Locally
To join locally:

1. Open a new session of Rumbleverse.
2. Inject with UUU.
3. Open the console and paste `open 127.0.0.1:62169`.
To join over the internet open your port (tutorial: https://portforward.com)

## Changing Game Modes
To change game modes:

1. Open `dllmain.cpp` and go to line 32.
2. Change EGameMode global_mode = EGameMode::PLAYGROUND; to your desired mode.
3. Valid formats for game modes are:
   - FREE_ROAM
   - PLAYGROUND
   - BR_SOLOS
   - BR_DUOS
   - BR_TRIOS
   - BR_QUADS

Compile the solution and repeat the steps above.
