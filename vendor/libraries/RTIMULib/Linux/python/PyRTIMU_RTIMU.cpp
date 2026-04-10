////////////////////////////////////////////////////////////////////////////
//
//  This file is part of RTIMULib
//
//  Copyright (c) 2014-2015, richards-tech
//  Copyright (c) 2014, avishorp
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
//  Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
//  INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
//  PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
//  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
//  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

// RTIUMULib Python Module - RTIMU type implementation
///////////////////////////////////////////////////////

#include "PyRTIMU.h"

// Forwards
///////////
static void RTIMU_RTIMU_dealloc(RTIMU_RTIMU* self);
static PyObject* RTIMU_RTIMU_new(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int RTIMU_RTIMU_init(RTIMU_RTIMU *self, PyObject *args, PyObject *kwds);


// The RTIMU_Settings struct
////////////////////////////
static PyMethodDef RTIMU_RTIMU_methods[] = {
    //////// IMUName
    {"IMUName", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        if (((RTIMU_RTIMU*)self)->val == NULL)
#if PY_MAJOR_VERSION >= 3
            return PyUnicode_FromString("none");
#else
            return PyString_FromString("none");
#endif
        else

#if PY_MAJOR_VERSION >= 3
            return PyUnicode_FromString(((RTIMU_RTIMU*)self)->val->IMUName());
#else
            return PyString_FromString(((RTIMU_RTIMU*)self)->val->IMUName());
#endif
        }),
        METH_NOARGS,
    "Get the name of the IMU" },

    //////// IMUType
    {"IMUType", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        if (((RTIMU_RTIMU*)self)->val == NULL)
#if PY_MAJOR_VERSION >= 3
            return PyLong_FromLong(0);
#else
            return PyInt_FromLong(0);
#endif
        else
        #if PY_MAJOR_VERSION >= 3
            return PyLong_FromLong(((RTIMU_RTIMU*)self)->val->IMUType());
#else
            return PyInt_FromLong(((RTIMU_RTIMU*)self)->val->IMUType());
#endif
        }),
        METH_NOARGS,
    "Get the type code of the IMU" },

    //////// IMUInit
    {"IMUInit", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        if (((RTIMU_RTIMU*)self)->val == NULL)
            return PyBool_FromLong(0);
        else
            return PyBool_FromLong(((RTIMU_RTIMU*)self)->val->IMUInit());
        }),
        METH_NOARGS,
    "Set up the IMU" },

  //////// IMUGetPollInterval
  {"IMUGetPollInterval", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
#if PY_MAJOR_VERSION >= 3
        return PyLong_FromLong(((RTIMU_RTIMU*)self)->val->IMUGetPollInterval());
#else
        return PyInt_FromLong(((RTIMU_RTIMU*)self)->val->IMUGetPollInterval());
#endif
        }),
    METH_NOARGS,
    "Get the recommended poll interval in mS" },

    //////// IMURead
    {"IMURead", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        return PyBool_FromLong(((RTIMU_RTIMU*)self)->val->IMURead());
        }),
    METH_NOARGS,
    "Get a sample" },

    //////// IMUGyroBiasValid
    {"IMUGyroBiasValid", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        return PyBool_FromLong(((RTIMU_RTIMU*)self)->val->IMUGyroBiasValid());
        }),
    METH_NOARGS,
    "Return true if valid bias" },

    //////// getCompassCalibrationValid
    {"getCompassCalibrationValid", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        return PyBool_FromLong(((RTIMU_RTIMU*)self)->val->getCompassCalibrationValid());
        }),
    METH_NOARGS,
    "Return true if the compass is using min/max calibration" },

    //////// getCompassCalibrationEllipsoidValid
    {"getCompassCalibrationEllipsoidValid", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        return PyBool_FromLong(((RTIMU_RTIMU*)self)->val->getCompassCalibrationEllipsoidValid());
        }),
    METH_NOARGS,
    "Return true if the compass is using ellipsoid calibration" },

    //////// getAccelCalibrationValid
    {"getAccelCalibrationValid", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        return PyBool_FromLong(((RTIMU_RTIMU*)self)->val->getAccelCalibrationValid());
        }),
    METH_NOARGS,
    "Return true if the compass is using ellipsoid calibration" },

    //////// IMUGyroBiasValid
    {"IMUGyroBiasValid", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        return PyBool_FromLong(((RTIMU_RTIMU*)self)->val->IMUGyroBiasValid());
        }),
    METH_NOARGS,
    "Return true if the compass is using ellipsoid calibration" },

    //////// resetFusion
    {"resetFusion", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        ((RTIMU_RTIMU*)self)->val->resetFusion();
        Py_RETURN_NONE;
        }),
    METH_NOARGS,
    "Return true if valid bias" },

    //////// setSlerpPower
    {"setSlerpPower", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        double power;
        PyArg_ParseTuple(args, "d", &power);
            ((RTIMU_RTIMU*)self)->val->setSlerpPower(power);
        Py_RETURN_NONE;
        }),
    METH_VARARGS,
    "Enable or disable Gyro reading" },

    //////// setGyroEnable
    {"setGyroEnable", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        int en;
        PyArg_ParseTuple(args, "i", &en);
            ((RTIMU_RTIMU*)self)->val->setGyroEnable(en > 0);
        Py_RETURN_NONE;
        }),
    METH_VARARGS,
    "Enable or disable Gyro reading" },

    //////// setAccelEnable
    {"setAccelEnable", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        int en;
        PyArg_ParseTuple(args, "i", &en);
            ((RTIMU_RTIMU*)self)->val->setAccelEnable(en > 0);
        Py_RETURN_NONE;
        }),
    METH_VARARGS,
    "Enable or disable the Accelerometer reading" },

    //////// setCompassEnable
    {"setCompassEnable", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        int en;
        PyArg_ParseTuple(args, "i", &en);
            ((RTIMU_RTIMU*)self)->val->setCompassEnable(en > 0);
        Py_RETURN_NONE;
        }),
    METH_VARARGS,
    "Enable or disable the Compass reading" },

    //////// getIMUData
    {"getIMUData", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        const RTIMU_DATA& data = ((RTIMU_RTIMU*)self)->val->getIMUData();
        return Py_BuildValue("{s:K,s:O,s:(d,d,d),s:O,s:(d,d,d,d),s:O,s:(d,d,d),s:O,s:(d,d,d),s:O,s:(d,d,d),s:O,s:d,s:O,s:d,s:O,s:d}",
                 "timestamp", data.timestamp,
                 "fusionPoseValid", PyBool_FromLong(data.fusionPoseValid),
                 "fusionPose", data.fusionPose.x(), data.fusionPose.y(), data.fusionPose.z(),
                 "fusionQPoseValid", PyBool_FromLong(data.fusionQPoseValid),
                 "fusionQPose", data.fusionQPose.scalar(), data.fusionQPose.x(), data.fusionQPose.y(), data.fusionQPose.z(),
                 "gyroValid", PyBool_FromLong(data.gyroValid),
                 "gyro", data.gyro.x(), data.gyro.y(), data.gyro.z(),
                 "accelValid", PyBool_FromLong(data.accelValid),
                 "accel", data.accel.x(), data.accel.y(), data.accel.z(),
                 "compassValid", PyBool_FromLong(data.compassValid),
                 "compass", data.compass.x(), data.compass.y(), data.compass.z(),
                 "pressureValid", PyBool_FromLong(data.pressureValid),
                 "pressure", data.pressure,
                 "temperatureValid", PyBool_FromLong(data.temperatureValid),
                 "temperature", data.temperature,
                 "humidityValid", PyBool_FromLong(data.humidityValid),
                 "humidity", data.humidity);

        }),
    METH_NOARGS,
    "Return true if valid bias" },

    //////// getMeasuredPose
    {"getMeasuredPose", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        const RTVector3& r = ((RTIMU_RTIMU*)self)->val->getMeasuredPose();
        return Py_BuildValue("(d,d,d)", r.x(), r.y(), r.z());
        }),
    METH_NOARGS,
    "Return the measured pose" },

    //////// getMeasuredQPose
    {"getMeasuredQPose", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        const RTQuaternion& r = ((RTIMU_RTIMU*)self)->val->getMeasuredQPose();
        return Py_BuildValue("(d,d,d,d)", r.scalar(), r.x(), r.y(), r.z());
        }),
    METH_NOARGS,
    "Return the measured QPose" },

    //////// setCompassCalibrationMode
    {"setCompassCalibrationMode", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        int en;
        PyArg_ParseTuple(args, "i", &en);
            ((RTIMU_RTIMU*)self)->val->setCompassCalibrationMode(en > 0);
        Py_RETURN_NONE;
        }),
    METH_VARARGS,
    "Turn on compass calibration mode" },

    //////// setAccelCalibrationMode
    {"setAccelCalibrationMode", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        int en;
        PyArg_ParseTuple(args, "i", &en);
            ((RTIMU_RTIMU*)self)->val->setAccelCalibrationMode(en > 0);
        Py_RETURN_NONE;
        }),
    METH_VARARGS,
    "Turn on accel calibration mode" },

    //////// getFusionData
    {"getFusionData", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        const RTIMU_DATA& data = ((RTIMU_RTIMU*)self)->val->getIMUData();
        return Py_BuildValue("(d,d,d)", data.fusionPose.x(), data.fusionPose.y(),
                 data.fusionPose.z());
        }),
    METH_NOARGS,
    "Return true if valid bias" },

    //////// getGyro
    {"getGyro", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        const RTVector3& r = ((RTIMU_RTIMU*)self)->val->getGyro();
        return Py_BuildValue("(d,d,d)", r.x(), r.y(), r.z());
        }),
    METH_NOARGS,
    "Return the gyro readings" },

    //////// getAccel
    {"getAccel", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        const RTVector3& r = ((RTIMU_RTIMU*)self)->val->getAccel();
        return Py_BuildValue("(d,d,d)", r.x(), r.y(), r.z());
        }),
    METH_NOARGS,
    "Return the accel readings" },

    //////// getCompass
    {"getCompass", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        const RTVector3& r = ((RTIMU_RTIMU*)self)->val->getCompass();
        return Py_BuildValue("(d,d,d)", r.x(), r.y(), r.z());
        }),
    METH_NOARGS,
    "Return the compass readings" },

    //////// getAccelResiduals
    {"getAccelResiduals", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        const RTVector3& r = ((RTIMU_RTIMU*)self)->val->getAccelResiduals();
        return Py_BuildValue("(d,d,d)", r.x(), r.y(), r.z());
        }),
    METH_NOARGS,
    "Return the accel residual readings" },

    //////// setExtIMUData
    {"setExtIMUData", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        double gx, gy, gz, ax, ay, az, mx, my, mz;
        uint64_t timestamp;

        PyArg_ParseTuple(args, "dddddddddK", &gx, &gy, &gz, &ax, &ay, &az, &mx, &my, &mz, &timestamp);
        ((RTIMU_RTIMU*)self)->val->setExtIMUData(gx, gy, gz, ax, ay, az, mx, my, mz, timestamp);
        Py_RETURN_NONE;
        }),
    METH_VARARGS,
    "Inject data from external IMU" },


  { NULL }
};


static PyTypeObject RTIMU_RTIMU_type = {
#if PY_MAJOR_VERSION >= 3
    PyVarObject_HEAD_INIT(NULL, 0)
#else
    PyObject_HEAD_INIT(NULL)
    0,                          /*ob_size*/
#endif
    "RTIMU.RTIMU",              /*tp_name*/
    sizeof(RTIMU_RTIMU),        /*tp_basicsize*/
    0,                          /*tp_itemsize*/
    (destructor)RTIMU_RTIMU_dealloc,    /*tp_dealloc*/
    0,                          /*tp_print*/
    0,                          /*tp_getattr*/
    0,                          /*tp_setattr*/
    0,                          /*tp_compare*/
    0,                          /*tp_repr*/
    0,                          /*tp_as_number*/
    0,                          /*tp_as_sequence*/
    0,                          /*tp_as_mapping*/
    0,                          /*tp_hash */
    0,                          /*tp_call*/
    0,                          /*tp_str*/
    0,                          /*tp_getattro*/
    0,                          /*tp_setattro*/
    0,                          /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT,         /*tp_flags*/
    "RTIMU.RTIMU object",       /* tp_doc */
    0,                          /* tp_traverse */
    0,                          /* tp_clear */
    0,                          /* tp_richcompare */
    0,                          /* tp_weaklistoffset */
    0,                          /* tp_iter */
    0,                          /* tp_iternext */
    RTIMU_RTIMU_methods,        /* tp_methods */
    0,                          /* tp_members */
    0,                          /* tp_getset */
    0,                          /* tp_base */
    0,                          /* tp_dict */
    0,                          /* tp_descr_get */
    0,                          /* tp_descr_set */
    0,                          /* tp_dictoffset */
    (initproc)RTIMU_RTIMU_init, /* tp_init */
    0,                          /* tp_alloc */
    RTIMU_RTIMU_new,            /* tp_new */
};

static void RTIMU_RTIMU_dealloc(RTIMU_RTIMU* self)
{
    if (self->val != NULL)
        delete self->val;
}

static PyObject* RTIMU_RTIMU_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    RTIMU_RTIMU* self;

    // Allocate the object memory
    self = (RTIMU_RTIMU*)type->tp_alloc(type, 0);

    if (self != NULL) {
        // Set the value field to NULL. The RTIMU Settings object
        // creation is deferred to init
        self->val = NULL;
    }

    return (PyObject*)self;
}

static int RTIMU_RTIMU_init(RTIMU_RTIMU *self, PyObject *args, PyObject *kwds)
{
    PyObject* settings;

    // The user should pass "product name" as an argument
    if (!PyArg_ParseTuple(args, "O", &settings))
        return -1;

    // Make sure the settings argument is of the correct size
    if (!RTIMU_Settings_typecheck(settings)) {
        PyErr_SetString(PyExc_ValueError, (char*)"Argument must be of RTIMU.Settings type");
        return -1;
    }

    // Create an RTIMU object
    self->val = RTIMU::createIMU(((RTIMU_Settings*)settings)->val);

    return 0;
}

int RTIMU_RTIMU_create(PyObject* module)
{
    // Prepare the type structure
    if (PyType_Ready(&RTIMU_RTIMU_type) < 0)
        return -1;

    // Insert it into the module
    Py_INCREF(&RTIMU_RTIMU_type);
    PyModule_AddObject(module, "RTIMU", (PyObject*)&RTIMU_RTIMU_type);
    return 0;
}
