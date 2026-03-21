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

// RTIUMULib Python Module main file
////////////////////////////////////

#include "PyRTIMU.h"
#include "PyRTPressure.h"
#include "PyRTHumidity.h"

// RTIMU Method Table
/////////////////////
static PyMethodDef RTIMUMethods[] = {
    {NULL, NULL, 0, NULL}
};

// (from PyRTIMUSettings.cpp)
int RTIMU_Settings_ready();

struct module_state {
    PyObject *error;
};

#if PY_MAJOR_VERSION >= 3
#define GETSTATE(m) ((struct module_state*)PyModule_GetState(m))
#else
#define GETSTATE(m) (&_state)
static struct module_state _state;
#endif

#if PY_MAJOR_VERSION >= 3
static int RTIMUTraverse(PyObject *m, visitproc visit, void *arg) {
    Py_VISIT(GETSTATE(m)->error);
    return 0;
}

static int RTIMUClear(PyObject *m) {
    Py_CLEAR(GETSTATE(m)->error);
    return 0;
}


static struct PyModuleDef moduledef = {
        PyModuleDef_HEAD_INIT,
        "RTIMU",
        NULL,
        sizeof(struct module_state),
        RTIMUMethods,
        NULL,
        RTIMUTraverse,
        RTIMUClear,
        NULL
};
PyMODINIT_FUNC PyInit_RTIMU(void)
#else
PyMODINIT_FUNC initRTIMU()
#endif
{
    // Initialize the module
    PyObject* m;
#if PY_MAJOR_VERSION >= 3
    m = PyModule_Create(&moduledef);
#else
    m = Py_InitModule("RTIMU", RTIMUMethods);
#endif

    // Insert types
#if PY_MAJOR_VERSION >= 3
    if (RTIMU_Settings_create(m) < 0)
        return 0;
    if (RTIMU_RTIMU_create(m) < 0)
        return 0;
    if (RTIMU_RTPressure_create(m) < 0)
        return 0;
    if (RTIMU_RTHumidity_create(m) < 0)
        return 0;
    return m;
#else
    if (RTIMU_Settings_create(m) < 0)
        return;
    if (RTIMU_RTIMU_create(m) < 0)
        return;
    if (RTIMU_RTPressure_create(m) < 0)
        return;
    if (RTIMU_RTHumidity_create(m) < 0)
        return;
    return;
#endif
}




