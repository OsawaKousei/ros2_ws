from setuptools import find_packages
from setuptools import setup

setup(
    name='custom_message_unity',
    version='0.0.0',
    packages=find_packages(
        include=('custom_message_unity', 'custom_message_unity.*')),
)
