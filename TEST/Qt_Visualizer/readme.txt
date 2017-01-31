This test project is the Qt visualization example on pointclouds.org.
The example can be found at the following link:
http://pointclouds.org/documentation/tutorials/qt_visualizer.php


[FOUND BUILD ERRORS]

Found an error when trying to compile with the original example.
Trying solution mentioned here: http://stackoverflow.com/questions/28247137/ubuntu-cmake-what-path-to-add-to-cmake-module-path


CMake Error at CMakeLists.txt:20 (INCLUDE):
  include called with wrong number of arguments.  include() only takes one
  file.
http://stackoverflow.com/questions/28252909/cmake-and-qt5-include-only-takes-one-argument


[RESULTS]

CMakeLists.txt has been altered to fix the errors mentioned above

[ADDITIONAL CMakeLists changes]
link to thread:
http://vtk.1045678.n5.nabble.com/Linker-problem-using-VTK-CMake-and-Qt-td5732590.html
