// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rover_arm_interface:msg/ArmStatusMessage.idl
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
#include "rover_arm_interface/msg/detail/arm_status_message__struct.h"
#include "rover_arm_interface/msg/detail/arm_status_message__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rover_arm_interface__msg__arm_status_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("rover_arm_interface.msg._arm_status_message.ArmStatusMessage", full_classname_dest, 60) == 0);
  }
  rover_arm_interface__msg__ArmStatusMessage * ros_message = _ros_message;
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
  {  // base_comm_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_comm_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->base_comm_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // shoulder_comm_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "shoulder_comm_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shoulder_comm_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // elbow_comm_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "elbow_comm_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->elbow_comm_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // roll_comm_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_comm_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->roll_comm_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wrist_pitch_comm_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrist_pitch_comm_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wrist_pitch_comm_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wrist_roll_comm_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrist_roll_comm_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wrist_roll_comm_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // base_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->base_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // shoulder_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "shoulder_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shoulder_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // elbow_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "elbow_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->elbow_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // roll_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->roll_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wrist_pitch_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrist_pitch_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wrist_pitch_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wrist_roll_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrist_roll_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wrist_roll_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // base_faults
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_faults");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->base_faults = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // shoulder_faults
    PyObject * field = PyObject_GetAttrString(_pymsg, "shoulder_faults");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shoulder_faults = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // elbow_faults
    PyObject * field = PyObject_GetAttrString(_pymsg, "elbow_faults");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->elbow_faults = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // roll_faults
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_faults");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->roll_faults = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wrist_pitch_faults
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrist_pitch_faults");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wrist_pitch_faults = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wrist_roll_faults
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrist_roll_faults");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wrist_roll_faults = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rover_arm_interface__msg__arm_status_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ArmStatusMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rover_arm_interface.msg._arm_status_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ArmStatusMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rover_arm_interface__msg__ArmStatusMessage * ros_message = (rover_arm_interface__msg__ArmStatusMessage *)raw_ros_message;
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
  {  // base_comm_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->base_comm_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_comm_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shoulder_comm_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->shoulder_comm_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shoulder_comm_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elbow_comm_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->elbow_comm_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elbow_comm_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_comm_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->roll_comm_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_comm_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrist_pitch_comm_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wrist_pitch_comm_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrist_pitch_comm_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrist_roll_comm_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wrist_roll_comm_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrist_roll_comm_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->base_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shoulder_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->shoulder_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shoulder_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elbow_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->elbow_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elbow_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->roll_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrist_pitch_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wrist_pitch_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrist_pitch_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrist_roll_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wrist_roll_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrist_roll_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_faults
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->base_faults);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_faults", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shoulder_faults
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->shoulder_faults);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shoulder_faults", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elbow_faults
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->elbow_faults);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elbow_faults", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_faults
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->roll_faults);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_faults", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrist_pitch_faults
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wrist_pitch_faults);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrist_pitch_faults", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrist_roll_faults
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wrist_roll_faults);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrist_roll_faults", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
