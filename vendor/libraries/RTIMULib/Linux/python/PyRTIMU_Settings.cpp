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

// RTIUMULib Python Module - RTIMUSettings type implementation
///////////////////////////////////////////////////////////////

#include "PyRTIMU.h"
#include <functional>

// Forwards
///////////
struct RTIMU_Settings;
static void RTIMU_Settings_dealloc(RTIMU_Settings* self);
static PyObject* RTIMU_Settings_new(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int RTIMU_Settings_init(RTIMU_Settings *self, PyObject *args, PyObject *kwds);
static PyObject* RTIMU_Settings_load(RTIMU_Settings* self);
static PyObject* RTIMU_Settings_save(RTIMU_Settings* self);
static PyObject* RTIMU_Settings_discover(RTIMU_Settings* self, PyObject *args, PyObject *keywds);


// The RTIMU_Settings struct
////////////////////////////
static PyMethodDef RTIMU_Settings_methods[] = {
    {"save", (PyCFunction)RTIMU_Settings_save, METH_NOARGS, "Save settings to a file"},
    {"load", (PyCFunction)RTIMU_Settings_load, METH_NOARGS, "Load settings from a file"},
    {"discoverIMU", (PyCFunction)RTIMU_Settings_discover, METH_VARARGS|METH_KEYWORDS,
    "Try do discover and auto-set a connected IMU"},
    { NULL }
};


#if PY_MAJOR_VERSION >= 3
#define RTIMU_PARAM_INT(name, member) \
    {(char*)#name,                                                           \
        (getter)([] (_object* self, void* closure) {                         \
            return Py_BuildValue("i", ((RTIMU_Settings*)self)->val->member); \
        }),                                                                  \
        (setter)([] (_object* self, PyObject *value, void *closure) {        \
            long d = PyLong_AsLong(value);                                   \
            if (PyErr_Occurred())                                            \
                return -1;                                                   \
            ((RTIMU_Settings*)self)->val->member = d;                        \
            return 0;                                                        \
        }),                                                                  \
    NULL}
#else
#define RTIMU_PARAM_INT(name, member) \
    {(char*)#name,                                                           \
        (getter)([] (_object* self, void* closure) {                         \
            return Py_BuildValue("i", ((RTIMU_Settings*)self)->val->member); \
        }),                                                                  \
        (setter)([] (_object* self, PyObject *value, void *closure) {        \
            long d = PyInt_AsLong(value);                                    \
            if (PyErr_Occurred())                                            \
                return -1;                                                   \
            ((RTIMU_Settings*)self)->val->member = d;                        \
            return 0;                                                        \
        }),                                                                  \
    NULL}
#endif

#if PY_MAJOR_VERSION >= 3
#define RTIMU_PARAM_FLOAT(name, member)                                      \
    {(char*)#name,                                                           \
        (getter)([] (_object* self, void* closure) {                         \
            return Py_BuildValue("d", ((RTIMU_Settings*)self)->val->member); \
        }),                                                                  \
        (setter)([] (_object* self, PyObject *value, void *closure) {        \
            long d = PyLong_AsLong(value);                                   \
            if (PyErr_Occurred())                                            \
                return -1;                                                   \
            ((RTIMU_Settings*)self)->val->member = d;                        \
            return 0;                                                        \
        }),                                                                  \
    NULL}
#else
#define RTIMU_PARAM_FLOAT(name, member)                                      \
    {(char*)#name,                                                           \
        (getter)([] (_object* self, void* closure) {                         \
            return Py_BuildValue("d", ((RTIMU_Settings*)self)->val->member); \
        }),                                                                  \
        (setter)([] (_object* self, PyObject *value, void *closure) {        \
            long d = PyInt_AsLong(value);                                    \
            if (PyErr_Occurred())                                            \
                return -1;                                                   \
            ((RTIMU_Settings*)self)->val->member = d;                        \
            return 0;                                                        \
        }),                                                                  \
    NULL}
#endif

#define RTIMU_PARAM_VEC3(name, member)                                       \
    {(char*)#name,                                                           \
        (getter)([] (_object* self, void* closure) -> PyObject* {            \
            return Py_BuildValue("(ddd)",                                    \
                ((RTIMU_Settings*)self)->val->member.x(),                    \
                ((RTIMU_Settings*)self)->val->member.y(),                    \
                ((RTIMU_Settings*)self)->val->member.z());                   \
        }),                                                                  \
        (setter)([] (_object* self, PyObject *value, void *closure) {        \
            return (Unpack_VEC3(value, ((RTIMU_Settings*)self)->val->member));\
        }),                                                                  \
     NULL}


int Unpack_VEC3(const PyObject* val, RTVector3& dest)
{
    static char Unpack_VEC3_ValueError[] = "Must be a 3-element float tuple";

    // First of all check that the argument is a tuple
    if (!PyTuple_Check(val)) {
        PyErr_SetString(PyExc_ValueError, (char*)Unpack_VEC3_ValueError);
        return -1;
    }

    // Make sure the tuple has exactly 3 elements
    if (!(PyTuple_GET_SIZE(val) == 3)) {
        PyErr_SetString(PyExc_ValueError, (char*)Unpack_VEC3_ValueError);
        return -1;
    }

    // For each element, make sure it's a float or an int and set it
    // into the destination vector
    for(int i = 0; i < 3; i++) {
        PyObject* item = PyTuple_GET_ITEM(val, i);
        double val = PyFloat_AsDouble(item);
        if (PyErr_Occurred()) {
            PyErr_SetString(PyExc_ValueError, (char*)Unpack_VEC3_ValueError);
        return -1;
        }
        dest.setData(i, val);
    }
    return 0; // Success
}

static PyGetSetDef RTIMU_Settings_getset[] = {
    RTIMU_PARAM_INT(IMUType, m_imuType),
    RTIMU_PARAM_INT(FusionType, m_fusionType),
    RTIMU_PARAM_INT(I2CAddress, m_I2CSlaveAddress),
    RTIMU_PARAM_INT(I2CBus, m_I2CBus),
    RTIMU_PARAM_INT(CompassCalValid, m_compassCalValid),
    RTIMU_PARAM_VEC3(CompassCalMin, m_compassCalMin),
    RTIMU_PARAM_VEC3(CompassCalMax, m_compassCalMax),
    RTIMU_PARAM_INT(CompassCalEllipsoidValid, m_compassCalEllipsoidValid),
    RTIMU_PARAM_VEC3(CompassCalEllipsoidOffset, m_compassCalEllipsoidOffset),
    RTIMU_PARAM_FLOAT(CompassCalEllipsoidCorr11, m_compassCalEllipsoidCorr[0][0]),
    RTIMU_PARAM_FLOAT(CompassCalEllipsoidCorr12, m_compassCalEllipsoidCorr[0][1]),
    RTIMU_PARAM_FLOAT(CompassCalEllipsoidCorr13, m_compassCalEllipsoidCorr[0][2]),
    RTIMU_PARAM_FLOAT(CompassCalEllipsoidCorr21, m_compassCalEllipsoidCorr[1][0]),
    RTIMU_PARAM_FLOAT(CompassCalEllipsoidCorr22, m_compassCalEllipsoidCorr[1][1]),
    RTIMU_PARAM_FLOAT(CompassCalEllipsoidCorr23, m_compassCalEllipsoidCorr[1][2]),
    RTIMU_PARAM_FLOAT(CompassCalEllipsoidCorr31, m_compassCalEllipsoidCorr[2][0]),
    RTIMU_PARAM_FLOAT(CompassCalEllipsoidCorr32, m_compassCalEllipsoidCorr[2][1]),
    RTIMU_PARAM_FLOAT(CompassCalEllipsoidCorr33, m_compassCalEllipsoidCorr[2][2]),
    RTIMU_PARAM_INT(AccelCalValid, m_accelCalValid),
    RTIMU_PARAM_VEC3(AccelCalMin, m_accelCalMin),
    RTIMU_PARAM_VEC3(AccelCalMax, m_accelCalMax),
    RTIMU_PARAM_INT(GyroBiasValid, m_gyroBiasValid),
    RTIMU_PARAM_VEC3(GyroBias, m_gyroBias),
    RTIMU_PARAM_INT(MPU9150GyroAccelSampleRate, m_MPU9150GyroAccelSampleRate),
    RTIMU_PARAM_INT(MPU9150CompassSampleRate,m_MPU9150CompassSampleRate),
    RTIMU_PARAM_INT(MPU9150GyroAccelLpf, m_MPU9150GyroAccelLpf),
    RTIMU_PARAM_INT(MPU9150GyroFst, m_MPU9150GyroFsr),
    RTIMU_PARAM_INT(MPU9150AccelFsr, m_MPU9150AccelFsr),
    RTIMU_PARAM_INT(MPU9250GyroAccelSampleRate, m_MPU9250GyroAccelSampleRate),
    RTIMU_PARAM_INT(MPU9250CompassSampleRate,m_MPU9250CompassSampleRate),
    RTIMU_PARAM_INT(MPU9250GyroLpf, m_MPU9250GyroLpf),
    RTIMU_PARAM_INT(MPU9250AccelLpf, m_MPU9250AccelLpf),
    RTIMU_PARAM_INT(MPU9250GyroFsr, m_MPU9250GyroFsr),
    RTIMU_PARAM_INT(MPU9250AccelFsr, m_MPU9250AccelFsr),
    RTIMU_PARAM_INT(GD20HM303DGyroSampleRate, m_GD20HM303DGyroSampleRate),
    RTIMU_PARAM_INT(GD20HM303DGyroBW, m_GD20HM303DGyroBW),
    RTIMU_PARAM_INT(GD20HM303DGyroHpf, m_GD20HM303DGyroHpf),
    RTIMU_PARAM_INT(GD20HM303DGyroFsr, m_GD20HM303DGyroFsr),
    RTIMU_PARAM_INT(GD20HM303DAccelSampleRate, m_GD20HM303DAccelSampleRate),
    RTIMU_PARAM_INT(GD20HM303DAccelFsr, m_GD20HM303DAccelFsr),
    RTIMU_PARAM_INT(GD20HM303DAccelLpf, m_GD20HM303DAccelLpf),
    RTIMU_PARAM_INT(GD20HM303DCompassSampleRate, m_GD20HM303DCompassSampleRate),
    RTIMU_PARAM_INT(GD20HM303DCompassFsr, m_GD20HM303DCompassFsr),
    RTIMU_PARAM_INT(GD20M303DLHCGyroSampleRate, m_GD20M303DLHCGyroSampleRate),
    RTIMU_PARAM_INT(GD20M303DLHCGyroBW, m_GD20M303DLHCGyroBW),
    RTIMU_PARAM_INT(GD20M303DLHCGyroHpf, m_GD20M303DLHCGyroHpf),
    RTIMU_PARAM_INT(GD20M303DLHCGyroFsr, m_GD20M303DLHCGyroFsr),
    RTIMU_PARAM_INT(GD20M303DLHCAccelSampleRate, m_GD20M303DLHCAccelSampleRate),
    RTIMU_PARAM_INT(GD20M303DLHCAccelFsr, m_GD20M303DLHCAccelFsr),
    RTIMU_PARAM_INT(GD20M303DLHCCompassSampleRate, m_GD20M303DLHCCompassSampleRate),
    RTIMU_PARAM_INT(GD20M303DLHCCompassFsr, m_GD20M303DLHCCompassFsr),
    RTIMU_PARAM_INT(GD20HM303DLHCGyroSampleRate, m_GD20HM303DLHCGyroSampleRate),
    RTIMU_PARAM_INT(GD20HM303DLHCGyroBW, m_GD20HM303DLHCGyroBW),
    RTIMU_PARAM_INT(GD20HM303DLHCGyroHpf, m_GD20HM303DLHCGyroHpf),
    RTIMU_PARAM_INT(GD20HM303DLHCGyroFsr, m_GD20HM303DLHCGyroFsr),
    RTIMU_PARAM_INT(GD20HM303DLHCAccelSampleRate, m_GD20HM303DLHCAccelSampleRate),
    RTIMU_PARAM_INT(GD20HM303DLHCAccelFsr, m_GD20HM303DLHCAccelFsr),
    RTIMU_PARAM_INT(GD20HM303DLHCCompassSampleRate, m_GD20HM303DLHCCompassSampleRate),
    RTIMU_PARAM_INT(GD20HM303DLHCCompassFsr, m_GD20HM303DLHCCompassFsr),
    RTIMU_PARAM_INT(LSM9DS0GyroSampleRate, m_LSM9DS0GyroSampleRate),
    RTIMU_PARAM_INT(LSM9DS0GyroBW, m_LSM9DS0GyroBW),
    RTIMU_PARAM_INT(LSM9DS0GyroHpf, m_LSM9DS0GyroHpf),
    RTIMU_PARAM_INT(LSM9DS0GyroFsr, m_LSM9DS0GyroFsr),
    RTIMU_PARAM_INT(LSM9DS0AccelSampleRate, m_LSM9DS0AccelSampleRate),
    RTIMU_PARAM_INT(LSM9DS0AccelFsr, m_LSM9DS0AccelFsr),
    RTIMU_PARAM_INT(LSM9DS0AccelLpf, m_LSM9DS0AccelLpf),
    RTIMU_PARAM_INT(LSM9DS0CompassSampleRate, m_LSM9DS0CompassSampleRate),
    RTIMU_PARAM_INT(LSM9DS0CompassFsr, m_LSM9DS0CompassFsr),
    RTIMU_PARAM_INT(LSM9DS1GyroSampleRate, m_LSM9DS1GyroSampleRate),
    RTIMU_PARAM_INT(LSM9DS1GyroBW, m_LSM9DS1GyroBW),
    RTIMU_PARAM_INT(LSM9DS1GyroHpf, m_LSM9DS1GyroHpf),
    RTIMU_PARAM_INT(LSM9DS1GyroFsr, m_LSM9DS1GyroFsr),
    RTIMU_PARAM_INT(LSM9DS1AccelSampleRate, m_LSM9DS1AccelSampleRate),
    RTIMU_PARAM_INT(LSM9DS1AccelFsr, m_LSM9DS1AccelFsr),
    RTIMU_PARAM_INT(LSM9DS1AccelLpf, m_LSM9DS1AccelLpf),
    RTIMU_PARAM_INT(LSM9DS1CompassSampleRate, m_LSM9DS1CompassSampleRate),
    RTIMU_PARAM_INT(LSM9DS1CompassFsr, m_LSM9DS1CompassFsr),

    { NULL }
};


static PyTypeObject RTIMU_Settings_type = {
#if PY_MAJOR_VERSION >= 3
    PyVarObject_HEAD_INIT(NULL, 0)
#else
    PyObject_HEAD_INIT(NULL)
    0,                          /*ob_size*/
#endif
    "RTIMU.Settings",           /*tp_name*/
    sizeof(RTIMU_Settings),     /*tp_basicsize*/
    0,                          /*tp_itemsize*/
    (destructor)RTIMU_Settings_dealloc,  /*tp_dealloc*/
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
    "RTIMU.Settings object",    /* tp_doc */
    0,                          /* tp_traverse */
    0,                          /* tp_clear */
    0,                          /* tp_richcompare */
    0,                          /* tp_weaklistoffset */
    0,                          /* tp_iter */
    0,                          /* tp_iternext */
    RTIMU_Settings_methods,     /* tp_methods */
    0,                          /* tp_members */
    RTIMU_Settings_getset,      /* tp_getset */
    0,                          /* tp_base */
    0,                          /* tp_dict */
    0,                          /* tp_descr_get */
    0,                          /* tp_descr_set */
    0,                          /* tp_dictoffset */
    (initproc)RTIMU_Settings_init, /* tp_init */
    0,                          /* tp_alloc */
    RTIMU_Settings_new,         /* tp_new */
};

static void RTIMU_Settings_dealloc(RTIMU_Settings* self)
{
    if (self->val != NULL)
        delete self->val;
}

static PyObject* RTIMU_Settings_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    RTIMU_Settings* self;

    // Allocate the object memory
    self = (RTIMU_Settings*)type->tp_alloc(type, 0);

    if (self != NULL) {
        // Set the value field to NULL. The RTIMU Settings object
        // creation is deferred to init
        self->val = NULL;
    }

    return (PyObject*)self;
}

static int RTIMU_Settings_init(RTIMU_Settings *self, PyObject *args, PyObject *kwds)
{
    const char* product_name;

    // The user should pass "product name" as an argument
    if (!PyArg_ParseTuple(args, "s", &product_name))
        return -1;

    // Create an RTIMUSettings object
    self->val =  new RTIMUSettings(product_name);

    return 0;
}

static PyObject* RTIMU_Settings_load(RTIMU_Settings* self)
{
    // Invoke the load function
    self->val->loadSettings();

    // Return None
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject* RTIMU_Settings_save(RTIMU_Settings* self)
{
    // Invoke the save function
    self->val->saveSettings();

    // Return None
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject* RTIMU_Settings_discover(RTIMU_Settings* self, PyObject *args, PyObject *keywds)
{
    static char* kwlist[] = { (char*)"IMUType", (char*)"SlaveAddress", NULL};
    int imu_type = self->val->m_imuType;
    int slave_addr = self->val->m_I2CSlaveAddress;

    // Parse the (optional) arguments
    if (!PyArg_ParseTupleAndKeywords(args, keywds, "|ii", kwlist,
                   &imu_type, &slave_addr))
        return NULL;

    // Do the discovery
    unsigned char slave_addr_ch = slave_addr;
    bool isI2C;
    bool r = self->val->discoverIMU(imu_type, isI2C, slave_addr_ch);

    if (r) {
        Py_RETURN_TRUE;
    }
    else {
        Py_RETURN_FALSE;
    }
}


int RTIMU_Settings_create(PyObject* module)
{
    // Prepare the type structure
    if (PyType_Ready(&RTIMU_Settings_type) < 0)
        return -1;

    // Insert it into the module
    Py_INCREF(&RTIMU_Settings_type);
    PyModule_AddObject(module, "Settings", (PyObject*)&RTIMU_Settings_type);
    return 0;
}

bool RTIMU_Settings_typecheck(PyObject* obj)
{
    return PyObject_TypeCheck(obj, (PyTypeObject*)&RTIMU_Settings_type);
}

