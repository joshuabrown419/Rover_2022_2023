# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rover_arm_interface:msg/ArmStatusMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmStatusMessage(type):
    """Metaclass of message 'ArmStatusMessage'."""

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
                'rover_arm_interface.msg.ArmStatusMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arm_status_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arm_status_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arm_status_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arm_status_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arm_status_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmStatusMessage(metaclass=Metaclass_ArmStatusMessage):
    """Message class 'ArmStatusMessage'."""

    __slots__ = [
        '_base',
        '_shoulder',
        '_elbow',
        '_roll',
        '_wrist_pitch',
        '_wrist_roll',
        '_base_comm_status',
        '_shoulder_comm_status',
        '_elbow_comm_status',
        '_roll_comm_status',
        '_wrist_pitch_comm_status',
        '_wrist_roll_comm_status',
        '_base_status',
        '_shoulder_status',
        '_elbow_status',
        '_roll_status',
        '_wrist_pitch_status',
        '_wrist_roll_status',
        '_base_faults',
        '_shoulder_faults',
        '_elbow_faults',
        '_roll_faults',
        '_wrist_pitch_faults',
        '_wrist_roll_faults',
    ]

    _fields_and_field_types = {
        'base': 'double',
        'shoulder': 'double',
        'elbow': 'double',
        'roll': 'double',
        'wrist_pitch': 'double',
        'wrist_roll': 'double',
        'base_comm_status': 'int32',
        'shoulder_comm_status': 'int32',
        'elbow_comm_status': 'int32',
        'roll_comm_status': 'int32',
        'wrist_pitch_comm_status': 'int32',
        'wrist_roll_comm_status': 'int32',
        'base_status': 'int32',
        'shoulder_status': 'int32',
        'elbow_status': 'int32',
        'roll_status': 'int32',
        'wrist_pitch_status': 'int32',
        'wrist_roll_status': 'int32',
        'base_faults': 'int32',
        'shoulder_faults': 'int32',
        'elbow_faults': 'int32',
        'roll_faults': 'int32',
        'wrist_pitch_faults': 'int32',
        'wrist_roll_faults': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.base_comm_status = kwargs.get('base_comm_status', int())
        self.shoulder_comm_status = kwargs.get('shoulder_comm_status', int())
        self.elbow_comm_status = kwargs.get('elbow_comm_status', int())
        self.roll_comm_status = kwargs.get('roll_comm_status', int())
        self.wrist_pitch_comm_status = kwargs.get('wrist_pitch_comm_status', int())
        self.wrist_roll_comm_status = kwargs.get('wrist_roll_comm_status', int())
        self.base_status = kwargs.get('base_status', int())
        self.shoulder_status = kwargs.get('shoulder_status', int())
        self.elbow_status = kwargs.get('elbow_status', int())
        self.roll_status = kwargs.get('roll_status', int())
        self.wrist_pitch_status = kwargs.get('wrist_pitch_status', int())
        self.wrist_roll_status = kwargs.get('wrist_roll_status', int())
        self.base_faults = kwargs.get('base_faults', int())
        self.shoulder_faults = kwargs.get('shoulder_faults', int())
        self.elbow_faults = kwargs.get('elbow_faults', int())
        self.roll_faults = kwargs.get('roll_faults', int())
        self.wrist_pitch_faults = kwargs.get('wrist_pitch_faults', int())
        self.wrist_roll_faults = kwargs.get('wrist_roll_faults', int())

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
        if self.base_comm_status != other.base_comm_status:
            return False
        if self.shoulder_comm_status != other.shoulder_comm_status:
            return False
        if self.elbow_comm_status != other.elbow_comm_status:
            return False
        if self.roll_comm_status != other.roll_comm_status:
            return False
        if self.wrist_pitch_comm_status != other.wrist_pitch_comm_status:
            return False
        if self.wrist_roll_comm_status != other.wrist_roll_comm_status:
            return False
        if self.base_status != other.base_status:
            return False
        if self.shoulder_status != other.shoulder_status:
            return False
        if self.elbow_status != other.elbow_status:
            return False
        if self.roll_status != other.roll_status:
            return False
        if self.wrist_pitch_status != other.wrist_pitch_status:
            return False
        if self.wrist_roll_status != other.wrist_roll_status:
            return False
        if self.base_faults != other.base_faults:
            return False
        if self.shoulder_faults != other.shoulder_faults:
            return False
        if self.elbow_faults != other.elbow_faults:
            return False
        if self.roll_faults != other.roll_faults:
            return False
        if self.wrist_pitch_faults != other.wrist_pitch_faults:
            return False
        if self.wrist_roll_faults != other.wrist_roll_faults:
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
    def base_comm_status(self):
        """Message field 'base_comm_status'."""
        return self._base_comm_status

    @base_comm_status.setter
    def base_comm_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'base_comm_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'base_comm_status' field must be an integer in [-2147483648, 2147483647]"
        self._base_comm_status = value

    @property
    def shoulder_comm_status(self):
        """Message field 'shoulder_comm_status'."""
        return self._shoulder_comm_status

    @shoulder_comm_status.setter
    def shoulder_comm_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shoulder_comm_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'shoulder_comm_status' field must be an integer in [-2147483648, 2147483647]"
        self._shoulder_comm_status = value

    @property
    def elbow_comm_status(self):
        """Message field 'elbow_comm_status'."""
        return self._elbow_comm_status

    @elbow_comm_status.setter
    def elbow_comm_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'elbow_comm_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'elbow_comm_status' field must be an integer in [-2147483648, 2147483647]"
        self._elbow_comm_status = value

    @property
    def roll_comm_status(self):
        """Message field 'roll_comm_status'."""
        return self._roll_comm_status

    @roll_comm_status.setter
    def roll_comm_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'roll_comm_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'roll_comm_status' field must be an integer in [-2147483648, 2147483647]"
        self._roll_comm_status = value

    @property
    def wrist_pitch_comm_status(self):
        """Message field 'wrist_pitch_comm_status'."""
        return self._wrist_pitch_comm_status

    @wrist_pitch_comm_status.setter
    def wrist_pitch_comm_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wrist_pitch_comm_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wrist_pitch_comm_status' field must be an integer in [-2147483648, 2147483647]"
        self._wrist_pitch_comm_status = value

    @property
    def wrist_roll_comm_status(self):
        """Message field 'wrist_roll_comm_status'."""
        return self._wrist_roll_comm_status

    @wrist_roll_comm_status.setter
    def wrist_roll_comm_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wrist_roll_comm_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wrist_roll_comm_status' field must be an integer in [-2147483648, 2147483647]"
        self._wrist_roll_comm_status = value

    @property
    def base_status(self):
        """Message field 'base_status'."""
        return self._base_status

    @base_status.setter
    def base_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'base_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'base_status' field must be an integer in [-2147483648, 2147483647]"
        self._base_status = value

    @property
    def shoulder_status(self):
        """Message field 'shoulder_status'."""
        return self._shoulder_status

    @shoulder_status.setter
    def shoulder_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shoulder_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'shoulder_status' field must be an integer in [-2147483648, 2147483647]"
        self._shoulder_status = value

    @property
    def elbow_status(self):
        """Message field 'elbow_status'."""
        return self._elbow_status

    @elbow_status.setter
    def elbow_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'elbow_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'elbow_status' field must be an integer in [-2147483648, 2147483647]"
        self._elbow_status = value

    @property
    def roll_status(self):
        """Message field 'roll_status'."""
        return self._roll_status

    @roll_status.setter
    def roll_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'roll_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'roll_status' field must be an integer in [-2147483648, 2147483647]"
        self._roll_status = value

    @property
    def wrist_pitch_status(self):
        """Message field 'wrist_pitch_status'."""
        return self._wrist_pitch_status

    @wrist_pitch_status.setter
    def wrist_pitch_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wrist_pitch_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wrist_pitch_status' field must be an integer in [-2147483648, 2147483647]"
        self._wrist_pitch_status = value

    @property
    def wrist_roll_status(self):
        """Message field 'wrist_roll_status'."""
        return self._wrist_roll_status

    @wrist_roll_status.setter
    def wrist_roll_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wrist_roll_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wrist_roll_status' field must be an integer in [-2147483648, 2147483647]"
        self._wrist_roll_status = value

    @property
    def base_faults(self):
        """Message field 'base_faults'."""
        return self._base_faults

    @base_faults.setter
    def base_faults(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'base_faults' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'base_faults' field must be an integer in [-2147483648, 2147483647]"
        self._base_faults = value

    @property
    def shoulder_faults(self):
        """Message field 'shoulder_faults'."""
        return self._shoulder_faults

    @shoulder_faults.setter
    def shoulder_faults(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shoulder_faults' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'shoulder_faults' field must be an integer in [-2147483648, 2147483647]"
        self._shoulder_faults = value

    @property
    def elbow_faults(self):
        """Message field 'elbow_faults'."""
        return self._elbow_faults

    @elbow_faults.setter
    def elbow_faults(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'elbow_faults' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'elbow_faults' field must be an integer in [-2147483648, 2147483647]"
        self._elbow_faults = value

    @property
    def roll_faults(self):
        """Message field 'roll_faults'."""
        return self._roll_faults

    @roll_faults.setter
    def roll_faults(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'roll_faults' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'roll_faults' field must be an integer in [-2147483648, 2147483647]"
        self._roll_faults = value

    @property
    def wrist_pitch_faults(self):
        """Message field 'wrist_pitch_faults'."""
        return self._wrist_pitch_faults

    @wrist_pitch_faults.setter
    def wrist_pitch_faults(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wrist_pitch_faults' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wrist_pitch_faults' field must be an integer in [-2147483648, 2147483647]"
        self._wrist_pitch_faults = value

    @property
    def wrist_roll_faults(self):
        """Message field 'wrist_roll_faults'."""
        return self._wrist_roll_faults

    @wrist_roll_faults.setter
    def wrist_roll_faults(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wrist_roll_faults' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wrist_roll_faults' field must be an integer in [-2147483648, 2147483647]"
        self._wrist_roll_faults = value
