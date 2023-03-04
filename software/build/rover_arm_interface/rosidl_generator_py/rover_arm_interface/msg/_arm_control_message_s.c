// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rover_arm_interface:msg/ArmControlMessage.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rover_arm_interface/msg/detail/arm_control_message__struct.h"
#include "rover_arm_interface/msg/detail/arm_control_message__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rover_arm_interface__msg__arm_control_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rover_arm_interface.msg._arm_control_message.ArmControlMessage", full_classname_dest, 62) == 0);
  }
  rover_arm_interface__msg__ArmControlMessage * ros_message = _ros_message;
  {  // base
    PyObject * field = PyObject_GetAttrString(_pymsg, "base");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->base = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // shoulder
    PyObject * field = PyObject_GetAttrString(_pymsg, "shoulder");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->shoulder = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // elbow
    PyObject * field = PyObject_GetAttrString(_pymsg, "elbow");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->elbow = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wrist_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrist_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wrist_pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wrist_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrist_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wrist_roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // clear_faults
    PyObject * field = PyObject_GetAttrString(_pymsg, "clear_faults");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->clear_faults = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reset_controllers
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_controllers");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_controllers = (Py_True == field);
    Py_DECREF(field);
  }
  {  // calibrate
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibrate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->calibrate = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rover_arm_interface__msg__arm_control_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ArmControlMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rover_arm_interface.msg._arm_control_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ArmControlMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rover_arm_interface__msg__ArmControlMessage * ros_message = (rover_arm_interface__msg__ArmControlMessage *)raw_ros_message;
  {  // base
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->base);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shoulder
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->shoulder);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shoulder", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elbow
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->elbow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elbow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrist_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wrist_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrist_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrist_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wrist_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrist_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clear_faults
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->clear_faults ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clear_faults", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_controllers
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_controllers ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_controllers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibrate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->calibrate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibrate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
