Python Binding for RTIMULib
===========================

Description
-----------
This directory contains a Python module, providing an interface to the RTIMULib library
from Python code.

Note: this has been tested with Python 2.7 and Python 3.4. Replace "python" with "python3" in the instructions that follow.

Installation
------------

python-dev is needed for the compilation. Use:
```
sudo apt-get install python-dev
```

if it is not already installed.

The module is built and installed using distutils:
```python
python setup.py build
```   

followed by:
```python
python setup.py install
```

The last command should be run as super-user if system-wide installation is required. All the
setup.py options are available. For more information type:
```python
python setup.py --help
```


Usage
-----

The tests directory has four demo scripts. Fusion.py displays the fused 9-dof data from an IMU. Fusion10.py also displays pressure and temperature data from a 10-dof IMU if a pressure sensor is present. Fusion11.py is the same as Fusion10.py except that it also handles humidity sensors. InjectIMU.py shows how to inject raw IMU data from a source outside of RTIMULib but still utilize the fusion functions.

As in the C library, the usage of RTIMULib comprises of three major steps:

1. Creating an `RTIMU.Settings` object. The class constructor receives a "product name" which is
   actually used as the ini filename (without the ".ini" extension). The file will be
   created if it doesn't already exist. After creating the `RTIMU.Settings` object, the various
   parameters appear as the object attributes and can be examined and changed. 
   The settings can also be saved back to the ini file using the `save()` method.
   
2. Creating an `RTIMU.RTIMU` object. The constructor receives an `RTIMU.Settings` object and auto detects
   the IMU (if not specified explicitly).
   
3. Initializing the IMU by calling `IMUInit()` on the `RTIMU.RTIMU` object. The method returns True on
   successful initialization.
   
4. Call the `IMURead()` method in regular intervals to retrieve data from the IMU. When the function returns
   true, the `getFusionData()` method can be used to retrieve the calculated angles. `getIMUData()` can be called
   to get the complete set of data including quaternions and individual sensor data.
   
Check Fusion.py, Fusion10.py and Fusion11.py for more information on how to use the Python interface.

Magnetometer Calibration
------------------------

For good results, magnetometer calibration is essential. The Linux directory contains an app, RTIMULibCal, that can be used to generate an RTIMULib.ini file with calibration data. See the Linux readme for more details on how to build and install RTIMULibCal. Run RTIMULibCal in the directory in which the python app is to be executed. RTIMULibCal will write an RTIMULib.ini file to the working directory which will then be picked up when the Python app is executed.

