from setuptools import find_packages
from setuptools import setup

setup(
    name='rosidl_generator_cs',
    version='2.0.0',
    packages=find_packages(
        include=('rosidl_generator_cs', 'rosidl_generator_cs.*')),
)
