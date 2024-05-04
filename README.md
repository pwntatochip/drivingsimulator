# Traffic Sim
![Traffic Sim Logo](https://github.com/pwntatochip/drivingsimulator/assets/36629188/f7ba45e9-3fec-45fd-83c2-399dc7613412)


Drivingsimulator or TrafficSim is a project started by the chair of Civil Engineering at CSUS, Dr. Ghazan Khan. It is a VR driving simulator developed in Unreal Engine 5.1.1 for the purposes of studying driver behavior in different traffic scenarios. The simulation is designed to be operated with the Oculus Quest 2 headset and the Logitech G920 driving peripherals, but it can also be completely controlled through mouse and keyboard.  

This application has been developed by TryToTry, a CSUS Computer Science senior project team. This project has been in active development by multiple senior project teams prior to TryToTry and may be developed by other teams in the future. 
# Contributors
Credits to the developers at team TryToTry:
**Derek Dilger, derekdilger@csus.edu
Christian Ross, cjross@csus.edu
Tim O'Keefe, timokeefe@csus.edu
Ada Mir Raga, adamirraga@csus.edu
Drew Bruggman, drewbruggman@csus.edu
David Damiano, ddamiano@csus.edu
Alec Halici, ahalici@csus.edu
Gerrit Beamesderfer, gbeamesderfer@csus.edu**

# Features

* Realistic driving physics: Experience authentic vehicle dynamics and handling
* Multiple environments: Explore different driving environments with our freeway, highway, and city maps
* AI traffic system: Encounter intelligent AI-controlled vehicles with realistic traffic behvior based on real world data
* Variable weather: Drive in various environmental conditions such as rain, snow, wind, dust for a more dynamic experience
* Traffic hazards: Avoid hazards such as animals crossing the road, traffic cones, accidents, and more
* VR support: Immerse yourself further with virtual reality support for compatible devices

# Getting Started
## Prerequisites
* Unreal Engine 5.1.1 installed on your machine
* Campatible hardware for VR support (if using VR)
* Capable computer to run simulation

## Installation
1. Clone the repository to your local machine
2. Download zip files
   https://drive.google.com/drive/folders/1k0AOF5my0YDM_6b9p3FLuTJvPV-oGEd0
3. Replace 'Content' and 'Plugins' folders in the local git repo with the same folders in the newly downloaded zip files.
   * Make sure not to removed the 'Our Files' folder in the 'Content' folder of the git repo
   * The 'Content' and 'Plugins' folders in the zips contain assets too large to commit to github
4. Open the local git repo and right click the Unreal Engine Project File named 'TrafficSimUE5' with the blue Unreal Engine logo
5. Select "Generate Visual Studio project files"
6. Open the project in Unreal Engine 5.1.1
7. Run the simulation

# Usage
* Use the 'WASD' keys to control the vehicle or the steering wheel and pedals if you are using them
* Select any of the options menus on the top of the screen to see relevant information, change simulator settings, or to record and log information

# UI Changes
## Main Menu
![image](https://github.com/pwntatochip/drivingsimulator/assets/36629188/0a44f650-a2fb-4b2e-80c2-e25e80ad893c) ![image](https://github.com/pwntatochip/drivingsimulator/assets/36629188/086350e1-0f48-405c-9d3e-9cc905554b76)
## Settings
![image](https://github.com/pwntatochip/drivingsimulator/assets/36629188/e4b6908d-0604-41c2-b754-34a460fb8dae) ![image](https://github.com/pwntatochip/drivingsimulator/assets/36629188/71c76e0a-59ea-489d-8d8a-fe47c568b9bf) ![image](https://github.com/pwntatochip/drivingsimulator/assets/36629188/428e34d7-0d90-47fa-8270-b78df9f839d2) ![image](https://github.com/pwntatochip/drivingsimulator/assets/36629188/2d5e23d2-929e-4d61-987d-db0d02ea8b37) ![Traffic Sim Settings - Live View](https://github.com/pwntatochip/drivingsimulator/assets/36629188/72eb9803-c422-433c-a4d5-3b2e51688a2f) ![Traffic Sim Settings - Settings](https://github.com/pwntatochip/drivingsimulator/assets/36629188/8c588624-4a2f-480c-920b-5106e048bc3d) ![Traffic Sim Settings - Logging View](https://github.com/pwntatochip/drivingsimulator/assets/36629188/3d1ffa9e-8aa0-4f20-b9c8-d8857e2d1aec) ![Traffic Sim Settings - Map Menu](https://github.com/pwntatochip/drivingsimulator/assets/36629188/b6904a63-4ff9-42c2-b5ae-60e8af8b2834) ![Traffic Sim Settings - Controls](https://github.com/pwntatochip/drivingsimulator/assets/36629188/2fe69499-299f-4f0a-856c-8f4ec0afd487)











# Testing
Unit tests can be run within unreal engine's editor. https://www.unrealengine.com/en-US
The version is 5.1.1. Future versions may work as unreal tries for forwards compatibility.
This tutorial is the best explanation of how to test systematically. https://www.youtube.com/watch?v=f4LpDXjFgVQ

Most testing we conducted involved testing 'from the perspective of a user'. I.e., if a feature that relies on 400 functions works, then it's not necessary to test the 400 functions individually.

# Developer Instructions
For the steering wheel orientation, this library may be useful: https://github.com/cengizozel/logidrivepy
