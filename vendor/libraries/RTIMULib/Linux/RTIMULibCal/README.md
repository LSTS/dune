# RTIMULibCal - a command line program to generate calibration data

It is essential to calibrate the IMU's magnetometer (at the very least) or else very poor results will be obtained. In a non-GUI environment, use RTIMULibCal. RTIMULibCal has minimal pre-requisites so should be usable on any system that is capable of compiling and running RTIMULibDrive. Ellipsoid fit requires octave to be available. If it isn't, only min/max calibration will be available.

### Build

Install cmake if not already there:

    sudo apt-get install cmake

Navigate to the RTIMULibCal directory and run:

    
    make
    sudo make install
    
### Usage

RTIMULibCal can either add calibration data to an existing RTIMULib.ini or else create a new one with the calibration data. RTIMULib.ini is used/created in the working directory.

If magnetometer ellipsoid fit isn't required, RTIMULibCal can be run anywhere. If ellipsoid fit is required, then the program assumes that the RTEllipsoidFit directory is at the same level as the working directory so that "../RTEllipsoidFit" refers to the directory holding the RTEllipsoidFit.m octave program. If not, ellipsoid fitting will fail.

The normal process is to run the magnetometer min/max option followed by the magnetometer ellipsoid fit option followed finally by the accelerometer min/max option. The program is self-documenting in that the instructions for every option will be displayed when the option is selected.

The resulting RTIMULib.ini can then be used by any other RTIMULib application.
