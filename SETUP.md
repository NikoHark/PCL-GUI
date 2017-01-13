guide source: https://robotract.com/2016/05/19/installing-pcl-qt5-and-vtk-on-ubuntu/

##----INSTALL boost 1.60
download Boost from http://www.boost.org/ and extract the folders to ~/PCL_Dependencies/
In the terminal do the following for boost_iostream library
```
sudo apt-get install zlib1g-dev libbz2-dev
```
then navigate to and install Boost
```
cd boost_1_60_0
./bootstrap.sh
sudo ./b2 install
```
##----INSTALL opengl
```
sudo apt-get install build-essential libgl1-mesa-dev mesa-utils
sudo apt-get install libglew-dev libsdl2-dev libsdl2-image-dev libglm-dev libfreetype6-dev
```
###CHECK SETUP
```
glxinfo | grep opengl
```
if you get Error: couldn't find RGB GLX visual or fbconfig ubuntu 12.04 error
Do the following:
```
sudo apt-get remove --purge xserver-xorg
sudo apt-get install xserver-xorg
sudo dpkg-reconfigure xserver-xorg
sudo reboot
```
##----INSTALL Qt 5.0
Use the online installer at https://www.qt.io/download/
##----INSTALL vtk
clone from git repo:
```
git clone https://github.com/Kitware/VTK.git
```
switch vtk to version 6 to work with Qt5
```
git checkout 21df122f4186aec9baae298bfc35b5a380869748
```
then install the qt5webkitwidget which is required by vtk for qt support
```
sudo apt-get install libqt5webkit5 libqt5webkit5-dev
```
This installs Qt5 webkitwidget in /usr/lib/x86_64-linux-gnu/cmake/Qt5WebKitWidgets
so now we need to run cmake by specifying the path to this installation.
```
mkdir vtk-build && cd vtk-build
cmake -DVTK_QT_VERSION:STRING=5 \
-DQT_QMAKE_EXECUTABLE:PATH=/home/pendar/Qt/5.6/gcc_64/bin/qmake \
-DVTK_Group_Qt:BOOL=ON \
-DCMAKE_PREFIX_PATH:PATH=/home/pendar/Qt/5.6/gcc_64/lib/cmake \
-DBUILD_SHARED_LIBS:BOOL=ON \
-DQt5WebKitWidgets_DIR:STRING=/usr/lib/x86_64-linux-gnu/cmake/Qt5WebKitWidgets \
../VTK
```
Make sure you replace /home/pendar/Qt/ whith where you installed Qt
##----INSTALL eigen and flann libraries
```
sudo apt-get install libeigen3-doc libeigen3-dev libflann-dev
```
##----INSTALL qhull
```
sudo apt-get install libqhull-dev libqhull-doc
```
##----INSTALL OpenNI
```
sudo apt-get install libopenni2-dev libopenni2-0 openni2-doc
```
##----INSTALL pcl 1.8
download pcl from https://github.com/PointCloudLibrary/pcl/releases/tag/pcl-1.8.0
navigate to where you saved pcl and type the following to install:
```
cd pcl
mkdir build && cd build
cmake ..
make -j2
```
That’s it, now you can enjoy PCL.
