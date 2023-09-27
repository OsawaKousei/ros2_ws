from setuptools import find_packages
from setuptools import setup

setup(
    name='cpp_server_client',
    version='0.0.0',
    packages=find_packages(
        include=('cpp_server_client', 'cpp_server_client.*')),
)
