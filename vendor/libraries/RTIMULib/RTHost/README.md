# RTHost - interfacing to IMU chips from desktop systems via an Arduino

RTHost includes two RTIMULib-based apps - RTHostIMU and RTHostIMUGL. These apps provide a simple way of using IMU chips with a desktop computer running Ubuntu, Windows or Mac OS X. They will also run on a Raspberry Pi (although RTHostIMUGL will only work a low sample rates).

The IMU chip is directly connected to an Arduino (e.g. Arduino Uno) and the Arduino connected to the host system via a USB cable. The RTArduLink protocol runs between the host system and Arduino. The Arduino must be running the RTArduLinkIMU sketch from the RTIMULib-Arduino repo (https://github.com/richards-tech/RTIMULib-Arduino).

### Setting up the desktop

#### Ubuntu 14.04 and later

Pre-requisites can be installed with:

    sudo apt-get install qt5-default build-essential cmake
    
#### Mac OS X

Download and install Qt from http://www.qt.io/download-open-source/. Qt needs to be added to the PATH variable. The easiest way to do this is to create a file called .profile in ~/ and add the following two lines:

    export QTDIR=/Users/<username>/Qt/5.4/clang_64
    export PATH=$PATH:$QTDIR/bin
    
Replace the "5.4" with whatever is the downloaded Qt version and <username> with the appropriate username. To test, try running qmake. If it works, Qt is probably installed correctly.

To use the cmake build system, cmake must be downloaded and installed from http://www.cmake.org/download/.

#### Windows 7

Windows requires a version of Visual Studio and Qt to be installed. To use the cmake build system, cmake must also be installed. VS2013 is strongly recommended and a free version for most users is available at http://www.visualstudio.com/products/visual-studio-community-vs. 

Qt can be downloaded and installed from http://www.qt.io/download-open-source/. Make sure it is the VS2013 OpenGL 32 bit version as this is the version used for testing. An environment variable needs to be created:

    QTDIR=c:\Qt\5.4\mscv2013_opengl
    
for version 5.4 for example. Also add the following to the PATH:

    %QTDIR%\bin
    
cmake can be downloaded and installed from http://www.cmake.org/download/. 

### Setting up the Arduino
    
The Arduino must have the RTArduLinkIMU sketch from the richards-tech RTIMULib-Arduino repo installed. The Arduino must be connected to the desktop using a USB cable.
    
### Build

#### Ubuntu/Mac OS X - Build using cmake

Navigate to the RTHost directory. Then run:

    mkdir build
    cd build
    cmake -DQT5=1 ..
    make
    sudo make install
    sudo ldconfig (Ubuntu only)
    
### Ubuntu/Mac OS X - Build using qmake

Qt's qmake can be used to build the apps. Navigate to the RTHostIMU or RTHostIMUGL directory and run:

    qmake
    make
    sudo make install

### Windows - Build using cmake

Open a VS2013 x86 native tools command prompt, navigate to the RTHost directory and run:

    mkdir build
    cd build
    cmake -DQT5=1 ..
    
This will generate VS2013 solution files that can be used to build the programs.

### Windows - Build using Visual Studio

On Windows, Visual Studio 2013 can be used to build the apps. .sln files are included in the RTHostIMU and RTHostIMUGL directories.

### Running RTHostIMU or RTHostIMUGL

When the apps are started, the interface to the Arduino is not enabled. To enable the interface, use the drop-down to select the correct serial port/device. IMU data should be seen shortly after.



