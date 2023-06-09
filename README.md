# **OctoGUI**
Pilot GUI for dry crawler.

## Requirements
* QT Creator 5.12.12
* Gstreamer 1.21.1

## **Installation**
1. Make a new folder in your home directory
> mkdir app
> cd app
2. Clone this repository into the app directory
> git clone
3. Make a build directory inside the app directory
>  mkdir build
4. Now in the QT creator, open the app by selecting .pro file of the OctoboticsApp
5. In QT creator, go to the Projects tab and select the build directory which you have created.
6. Now go to the Edit tab and build the app.
7. In the build directory, you will find a shared library named "OctoboticsApp". Copy this
8. Go to the utils folder in OctGUI and create a new build directory
> cd OctoGUI/utils
> mkdir build
9. Paste the OctoboticsApp file in this new directory you have created in the utils folder
10. Now, open a new terminal in the utils folder and run the build script.
> ./build.sh
11. Get a coffee, if there is anything as such coz this thing takes 3-5 mins to build.
12. After the build, you will find a desktop file in your desktop. Just allow it launch and run.
