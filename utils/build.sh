#!/bin/bash

echo -e "\e[1;32m=======================================OctoPilot Deployment Build=======================================\e[0m"
sleep 3
mkdir build
echo -e "\e[1;32m=============Build Folder Created=============\e[0m"
echo "Script executed from: ${PWD}"
Qmake=/home/sensei/qt_5/5.12.12/gcc_64/bin/qmake
File=build/OctoboticsApp    
if [[ ! -f $File ]] ; then
    echo -e "\e[1;31m File -> OctoboticsApp is not there, aborting.\e[0m"
    echo -e "\e[1;31m Copy the OctoboticsApp file from your build-debug folder to utils/build \e[0m"
    exit
fi
echo -e "\e[1;32m=============Starting Deployment=============\e[0m"
./linuxdeployqt-5-x86_64.AppImage build/OctoboticsApp  -qmake=$Qmake -qmldir=../OctoboticsApp/UI -always-overwrite -appimage  -bundle-non-qt-libs -appimage
echo -e "\e[1;32m=============First Deployment Completed=============\e[0m"

echo -e "\e[1;32m=============Removing Gstreamer=============\e[0m"

Gstreamer=libgstreamer-1.0.so.0
if [ -f build/lib/$Gstreamer ]; then
   rm  build/lib/$Gstreamer
   echo "$Gstreamer is removed"
fi
echo -e "\e[1;32m=============Copying New Gstreamer File=============\e[0m"
cp gst_so/* build/lib
cp octo.png build/
echo -e "\e[1;32m=============Copying New Gstreamer File=============\e[0m"
cd build
echo ${PWD}
rm default.desktop
rm default.png
touch OctoPilot.desktop
cp /dev/null OctoPilot.desktop
echo "[Desktop Entry]
Type=Application
Name=Octo Pilot
Comment=Co-Pilot for OctoBots
Exec=./AppRun %F
Icon=octo
Categories=Science;">$'OctoPilot.desktop' 
cd ..
echo ${PWD}
echo "=============Creating App Image============="
./appimagetool-x86_64.AppImage build
echo -e "\e[1;32m=============Copying New Gstreamer File=============\e[0m"
echo "=============Creating Desktop Folder============="
mkdir ~/Desktop/OctoPilot
cp Octo_Pilot-x86_64.AppImage ~/Desktop/OctoPilot
echo -e "\e[1;32m=============Copying New Gstreamer File=============\e[0m"
echo -e "\e[1;32m=============Moving logo to pixmap=============\e[0m"
sudo cp octo.png /usr/share/pixmaps
cd ~/Desktop
dtp=OctoPilot.desktop
if [ -f $dtp ]; then
   rm  $dtp
   echo -e "\e[1;31m $dtp is removed \e[0m"
   echo "$dtp is removed"
fi
echo -e "\e[1;32m=============Making a Desktop file=============\e[0m"
touch OctoPilot.desktop
echo "[Desktop Entry]
Type=Application
Name=Octo Pilot
Comment=Co-Pilot for OctoBots
Exec=/home/$USER/Desktop/OctoPilot/Octo_Pilot-x86_64.AppImage %F
Icon=octo
Categories=Science;">>$'OctoPilot.desktop' 

echo -e "\e[1;32m=======================================Deployment Completed=======================================\e[0m"
