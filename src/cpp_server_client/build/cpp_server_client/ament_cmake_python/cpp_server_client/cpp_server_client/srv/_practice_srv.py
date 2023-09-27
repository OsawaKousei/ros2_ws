# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cpp_server_client:srv/PracticeSrv.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'num_vector'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PracticeSrv_Request(type):
    """Metaclass of message 'PracticeSrv_Request'."""

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
            module = import_type_support('cpp_server_client')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cpp_server_client.srv.PracticeSrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__practice_srv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__practice_srv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__practice_srv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__practice_srv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__practice_srv__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PracticeSrv_Request(metaclass=Metaclass_PracticeSrv_Request):
    """Message class 'PracticeSrv_Request'."""

    __slots__ = [
        '_num_vector',
        '_a',
        '_b',
    ]

    _fields_and_field_types = {
        'num_vector': 'sequence<int64>',
        'a': 'int64',
        'b': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.num_vector = array.array('q', kwargs.get('num_vector', []))
        self.a = kwargs.get('a', int())
        self.b = kwargs.get('b', int())

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
        if self.num_vector != other.num_vector:
            return False
        if self.a != other.a:
            return False
        if self.b != other.b:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num_vector(self):
        """Message field 'num_vector'."""
        return self._num_vector

    @num_vector.setter
    def num_vector(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'num_vector' array.array() must have the type code of 'q'"
            self._num_vector = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'num_vector' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._num_vector = array.array('q', value)

    @builtins.property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'a' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'a' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._a = value

    @builtins.property
    def b(self):
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'b' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._b = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PracticeSrv_Response(type):
    """Metaclass of message 'PracticeSrv_Response'."""

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
            module = import_type_support('cpp_server_client')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cpp_server_client.srv.PracticeSrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__practice_srv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__practice_srv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__practice_srv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__practice_srv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__practice_srv__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PracticeSrv_Response(metaclass=Metaclass_PracticeSrv_Response):
    """Message class 'PracticeSrv_Response'."""

    __slots__ = [
        '_cumulative_sum',
    ]

    _fields_and_field_types = {
        'cumulative_sum': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cumulative_sum = kwargs.get('cumulative_sum', int())

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
        if self.cumulative_sum != other.cumulative_sum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cumulative_sum(self):
        """Message field 'cumulative_sum'."""
        return self._cumulative_sum

    @cumulative_sum.setter
    def cumulative_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cumulative_sum' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'cumulative_sum' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._cumulative_sum = value


class Metaclass_PracticeSrv(type):
    """Metaclass of service 'PracticeSrv'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cpp_server_client')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cpp_server_client.srv.PracticeSrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__practice_srv

            from cpp_server_client.srv import _practice_srv
            if _practice_srv.Metaclass_PracticeSrv_Request._TYPE_SUPPORT is None:
                _practice_srv.Metaclass_PracticeSrv_Request.__import_type_support__()
            if _practice_srv.Metaclass_PracticeSrv_Response._TYPE_SUPPORT is None:
                _practice_srv.Metaclass_PracticeSrv_Response.__import_type_support__()


class PracticeSrv(metaclass=Metaclass_PracticeSrv):
    from cpp_server_client.srv._practice_srv import PracticeSrv_Request as Request
    from cpp_server_client.srv._practice_srv import PracticeSrv_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
