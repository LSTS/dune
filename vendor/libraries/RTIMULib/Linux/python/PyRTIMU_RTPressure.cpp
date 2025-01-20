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

// RTIUMULib Python Module - RTPressure type implementation
///////////////////////////////////////////////////////

#include "PyRTPressure.h"
#include "PyRTIMU.h"

// Forwards
///////////
static void RTIMU_RTPressure_dealloc(RTIMU_RTPressure* self);
static PyObject* RTIMU_RTPressure_new(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int RTIMU_RTPressure_init(RTIMU_RTPressure *self, PyObject *args, PyObject *kwds);


// The RTIMU_Settings struct
////////////////////////////
static PyMethodDef RTIMU_RTPressure_methods[] = {
    //////// pressureName
    {"pressureName", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        if (((RTIMU_RTPressure*)self)->val == NULL)
#if PY_MAJOR_VERSION >= 3
            return PyUnicode_FromString("none");
#else
            return PyString_FromString("none");
#endif
        else
#if PY_MAJOR_VERSION >= 3
            return PyUnicode_FromString(((RTIMU_RTPressure*)self)->val->pressureName());
#else
            return PyString_FromString(((RTIMU_RTPressure*)self)->val->pressureName());
#endif
        }),
        METH_NOARGS,
    "Get the name of the pressure sensor" },

    //////// pressureType
    {"pressureType", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        if (((RTIMU_RTPressure*)self)->val == NULL)
#if PY_MAJOR_VERSION >= 3
            return PyLong_FromLong(0);
#else
            return PyInt_FromLong(0);
#endif
        else
#if PY_MAJOR_VERSION >= 3
            return PyLong_FromLong(((RTIMU_RTPressure*)self)->val->pressureType());
#else
            return PyInt_FromLong(((RTIMU_RTPressure*)self)->val->pressureType());
#endif
        }),
        METH_NOARGS,
    "Get the type code of the pressure sensor" },

    //////// presureInit
    {"pressureInit", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        if (((RTIMU_RTPressure*)self)->val == NULL)
            return PyBool_FromLong(0);
        else
            return PyBool_FromLong(((RTIMU_RTPressure*)self)->val->pressureInit());
        }),
        METH_NOARGS,
    "Set up the pressure sensor" },

    //////// pressureRead
    {"pressureRead", (PyCFunction)([] (PyObject *self, PyObject* args) -> PyObject* {
        RTIMU_DATA data;
        if (((RTIMU_RTPressure*)self)->val == NULL) {
            data.temperatureValid = data.pressureValid = false;
            data.temperature = 0;
            data.pressure = 0;
        } else {
            ((RTIMU_RTPressure*)self)->val->pressureRead(data);
        }

        return Py_BuildValue("idid", data.pressureValid, data.pressure, data.temperatureValid, data.temperature);
        }),
    METH_NOARGS,
    "Get current values" },

    { NULL }
};


static PyTypeObject RTIMU_RTPressure_type = {
#if PY_MAJOR_VERSION >= 3
    PyVarObject_HEAD_INIT(NULL, 0)
#else
    PyObject_HEAD_INIT(NULL)
    0,                          /*ob_size*/
#endif
     "RTIMU.RTPressure",           /*tp_name*/
    sizeof(RTIMU_RTPressure),     /*tp_basicsize*/
    0,                          /*tp_itemsize*/
    (destructor)RTIMU_RTPressure_dealloc,  /*tp_dealloc*/
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
    "RTIMU.RTPressure object",    /* tp_doc */
    0,                          /* tp_traverse */
    0,                          /* tp_clear */
    0,                          /* tp_richcompare */
    0,                          /* tp_weaklistoffset */
    0,                          /* tp_iter */
    0,                          /* tp_iternext */
    RTIMU_RTPressure_methods,     /* tp_methods */
    0,                          /* tp_members */
    0,                          /* tp_getset */
    0,                          /* tp_base */
    0,                          /* tp_dict */
    0,                          /* tp_descr_get */
    0,                          /* tp_descr_set */
    0,                          /* tp_dictoffset */
    (initproc)RTIMU_RTPressure_init, /* tp_init */
    0,                          /* tp_alloc */
    RTIMU_RTPressure_new,       /* tp_new */
};

static void RTIMU_RTPressure_dealloc(RTIMU_RTPressure* self)
{
    if (self->val != NULL)
        delete self->val;
}

static PyObject* RTIMU_RTPressure_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    RTIMU_RTPressure* self;

    // Allocate the object memory
    self = (RTIMU_RTPressure*)type->tp_alloc(type, 0);

    if (self != NULL) {
        // Set the value field to NULL. The RTPressure Settings object
        // creation is deferred to init
        self->val = NULL;
    }

    return (PyObject*)self;
}

static int RTIMU_RTPressure_init(RTIMU_RTPressure *self, PyObject *args, PyObject *kwds)
{
    PyObject* settings;

    // The user should pass settings pointer as an argument
    if (!PyArg_ParseTuple(args, "O", &settings))
        return -1;

    // Create an RTPressure object
    self->val = RTPressure::createPressure(((RTIMU_Settings*)settings)->val);

    return 0;
}

int RTIMU_RTPressure_create(PyObject* module)
{
    // Prepare the type structure
    if (PyType_Ready(&RTIMU_RTPressure_type) < 0)
        return -1;

    // Insert it into the module
    Py_INCREF(&RTIMU_RTPressure_type);
    PyModule_AddObject(module, "RTPressure", (PyObject*)&RTIMU_RTPressure_type);
    return 0;
}
