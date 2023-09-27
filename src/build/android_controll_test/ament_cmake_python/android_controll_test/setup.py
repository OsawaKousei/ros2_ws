from setuptools import find_packages
from setuptools import setup

setup(
    name='android_controll_test',
    version='0.0.0',
    packages=find_packages(
        include=('android_controll_test', 'android_controll_test.*')),
)
