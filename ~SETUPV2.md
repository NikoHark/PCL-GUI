#HOW TO INSTALL PCL 1.8 WITH QT SUPPORT
guide source: https://robotract.com/2016/05/19/installing-pcl-qt5-and-vtk-on-ubuntu/   

##----INSTALL boost 1.60
download Boost from http://www.boost.org/ and extract the folders to ~/PCL_Dependencies/   
In the terminal do the following for boost_iostream library   
```
sudo apt-get install zlib1g-dev libbz2-dev
```
then navigate to where you extracted boost and type the following:   
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
###Check that everything was setup correctly 
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
##----INSTALL Qt 5.6   
Use the online installer at https://www.qt.io/download/  
Note: Qt 5.7s makefile has been altered in such a way that PCL 1.8 and VTK 6.3    
      will be unable to find QWidget.  The two solutions to this problem are to  
      use VTK 7.0 or Qt 5.6.  At this time I have not tested if PCL 1.8 and    
      VTK 7.0 play nicely together.   
##----INSTALL vtk   
change directories and clone from git repo:   
```
cd ~/PCL_Dependencies
git clone https://github.com/Kitware/VTK.git
```
switch vtk to version 6 to work with Qt5   
```
cd VTK
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
-DQT_QMAKE_EXECUTABLE:PATH=/home/hsean/Qt/5.6/gcc_64/bin/qmake \
-DVTK_Group_Qt:BOOL=ON \
-DCMAKE_PREFIX_PATH:PATH=/home/hsean/Qt/5.6/gcc_64/lib/cmake \
-DBUILD_SHARED_LIBS:BOOL=ON \
-DQt5WebKitWidgets_DIR:STRING=/usr/lib/x86_64-linux-gnu/cmake/Qt5WebKitWidgets \
.. 
```
Make sure you replace /home/hsean/Qt/5.6 with where you installed Qt.   
Also, Qt/5.x must be the version you are using.   
then build VTK:
```
make 
```
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
##----INSTALL gtest
This is needed to prevent an error when building PCL with VTK  
```
sudo apt-get install libgtest-dev
cd /usr/src/gtest
sudo mkdir build && cd build
sudo cmake ..
sudo make

# copy or symlink libgtest.a and libgtest_main.a to your /usr/lib folder
sudo cp *.a /usr/lib
```
##----INSTALL Additional Libraries
###libusb needed for openni   
```
sudo apt-get install libusb-1.0-0-dev   
```
##----INSTALL pcl 1.8   
download pcl from https://github.com/PointCloudLibrary/pcl/releases/tag/pcl-1.8.0   
extract pcl to you home directory and rename to pcl-1.x.x   
NOTE: installing curses cmake will make options easier to edit.   
      If VTK was not found remember to set -DVTK_DIR to your VTK build directory.    
navigate to where you saved pcl and type the following to install:  
```
cd pcl
mkdir build && cd build
cmake .. (or ccmake .. if using curses)
make -j2
```
If you come accross "internal compiler error: killed (program cc1plus)" follow the   
link to solve the problem: https://bitcointalk.org/index.php?topic=304389.0  

That’s it, now you can enjoy PCL.   