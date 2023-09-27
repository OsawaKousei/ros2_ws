from setuptools import find_packages
from setuptools import setup

setup(
    name='cpp_topic_pubsub',
    version='0.0.0',
    packages=find_packages(
        include=('cpp_topic_pubsub', 'cpp_topic_pubsub.*')),
)
