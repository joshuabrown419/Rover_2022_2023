# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rover_arm_interface:msg/ArmControlMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmControlMessage(type):
    """Metaclass of message 'ArmControlMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rover_arm_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rover_arm_interface.msg.ArmControlMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arm_control_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arm_control_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arm_control_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arm_control_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arm_control_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmControlMessage(metaclass=Metaclass_ArmControlMessage):
    """Message class 'ArmControlMessage'."""

    __slots__ = [
        '_base',
        '_shoulder',
        '_elbow',
        '_roll',
        '_wrist_pitch',
        '_wrist_roll',
        '_clear_faults',
        '_reset_controllers',
        '_calibrate',
    ]

    _fields_and_field_types = {
        'base': 'double',
        'shoulder': 'double',
        'elbow': 'double',
        'roll': 'double',
        'wrist_pitch': 'double',
        'wrist_roll': 'double',
        'clear_faults': 'boolean',
        'reset_controllers': 'boolean',
        'calibrate': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.base = kwargs.get('base', float())
        self.shoulder = kwargs.get('shoulder', float())
        self.elbow = kwargs.get('elbow', float())
        self.roll = kwargs.get('roll', float())
        self.wrist_pitch = kwargs.get('wrist_pitch', float())
        self.wrist_roll = kwargs.get('wrist_roll', float())
        self.clear_faults = kwargs.get('clear_faults', bool())
        self.reset_controllers = kwargs.get('reset_controllers', bool())
        self.calibrate = kwargs.get('calibrate', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.base != other.base:
            return False
        if self.shoulder != other.shoulder:
            return False
        if self.elbow != other.elbow:
            return False
        if self.roll != other.roll:
            return False
        if self.wrist_pitch != other.wrist_pitch:
            return False
        if self.wrist_roll != other.wrist_roll:
            return False
        if self.clear_faults != other.clear_faults:
            return False
        if self.reset_controllers != other.reset_controllers:
            return False
        if self.calibrate != other.calibrate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def base(self):
        """Message field 'base'."""
        return self._base

    @base.setter
    def base(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base' field must be of type 'float'"
        self._base = value

    @property
    def shoulder(self):
        """Message field 'shoulder'."""
        return self._shoulder

    @shoulder.setter
    def shoulder(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'shoulder' field must be of type 'float'"
        self._shoulder = value

    @property
    def elbow(self):
        """Message field 'elbow'."""
        return self._elbow

    @elbow.setter
    def elbow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'elbow' field must be of type 'float'"
        self._elbow = value

    @property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
        self._roll = value

    @property
    def wrist_pitch(self):
        """Message field 'wrist_pitch'."""
        return self._wrist_pitch

    @wrist_pitch.setter
    def wrist_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wrist_pitch' field must be of type 'float'"
        self._wrist_pitch = value

    @property
    def wrist_roll(self):
        """Message field 'wrist_roll'."""
        return self._wrist_roll

    @wrist_roll.setter
    def wrist_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wrist_roll' field must be of type 'float'"
        self._wrist_roll = value

    @property
    def clear_faults(self):
        """Message field 'clear_faults'."""
        return self._clear_faults

    @clear_faults.setter
    def clear_faults(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'clear_faults' field must be of type 'bool'"
        self._clear_faults = value

    @property
    def reset_controllers(self):
        """Message field 'reset_controllers'."""
        return self._reset_controllers

    @reset_controllers.setter
    def reset_controllers(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_controllers' field must be of type 'bool'"
        self._reset_controllers = value

    @property
    def calibrate(self):
        """Message field 'calibrate'."""
        return self._calibrate

    @calibrate.setter
    def calibrate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'calibrate' field must be of type 'bool'"
        self._calibrate = value
