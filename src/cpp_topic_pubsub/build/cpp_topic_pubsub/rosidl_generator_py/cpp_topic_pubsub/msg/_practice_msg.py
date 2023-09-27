# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cpp_topic_pubsub:msg/PracticeMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PracticeMsg(type):
    """Metaclass of message 'PracticeMsg'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PRODUCT_TYPE_GIN': 0,
        'PRODUCT_TYPE_WHISKEY': 1,
        'PRODUCT_TYPE_VODKA': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cpp_topic_pubsub')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cpp_topic_pubsub.msg.PracticeMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__practice_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__practice_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__practice_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__practice_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__practice_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PRODUCT_TYPE_GIN': cls.__constants['PRODUCT_TYPE_GIN'],
            'PRODUCT_TYPE_WHISKEY': cls.__constants['PRODUCT_TYPE_WHISKEY'],
            'PRODUCT_TYPE_VODKA': cls.__constants['PRODUCT_TYPE_VODKA'],
        }

    @property
    def PRODUCT_TYPE_GIN(self):
        """Message constant 'PRODUCT_TYPE_GIN'."""
        return Metaclass_PracticeMsg.__constants['PRODUCT_TYPE_GIN']

    @property
    def PRODUCT_TYPE_WHISKEY(self):
        """Message constant 'PRODUCT_TYPE_WHISKEY'."""
        return Metaclass_PracticeMsg.__constants['PRODUCT_TYPE_WHISKEY']

    @property
    def PRODUCT_TYPE_VODKA(self):
        """Message constant 'PRODUCT_TYPE_VODKA'."""
        return Metaclass_PracticeMsg.__constants['PRODUCT_TYPE_VODKA']


class PracticeMsg(metaclass=Metaclass_PracticeMsg):
    """
    Message class 'PracticeMsg'.

    Constants:
      PRODUCT_TYPE_GIN
      PRODUCT_TYPE_WHISKEY
      PRODUCT_TYPE_VODKA
    """

    __slots__ = [
        '_name',
        '_product_type',
        '_price',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'product_type': 'uint8',
        'price': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.product_type = kwargs.get('product_type', int())
        self.price = kwargs.get('price', int())

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
        if self.name != other.name:
            return False
        if self.product_type != other.product_type:
            return False
        if self.price != other.price:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def product_type(self):
        """Message field 'product_type'."""
        return self._product_type

    @product_type.setter
    def product_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'product_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'product_type' field must be an unsigned integer in [0, 255]"
        self._product_type = value

    @builtins.property
    def price(self):
        """Message field 'price'."""
        return self._price

    @price.setter
    def price(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'price' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'price' field must be an unsigned integer in [0, 4294967295]"
        self._price = value
