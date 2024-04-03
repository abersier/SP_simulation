#!/usr/bin/env python3

from anymal_launch import get_ros_launch, load_yaml_into_rosparam

import roslib
roslib.load_manifest("rosparam")
import rosparam
import rospkg
import rospy
import stack_launcher
import sys

def replay(yaml_file):
    ros_launch = get_ros_launch() # Creates ROS master on the fly.
    rospy.init_node(f'anymal_replay')
    rospy.loginfo(f"ANYmal Replay is started.")

    # Load rosparameter from yaml file.
    paramlist=rosparam.load_file(yaml_file, default_namespace="")
    for params, ns in paramlist:
        rosparam.upload_params(ns, params)

    # Load extension file to the define the replay stack and overwrite requiered rosparams.
    rospack = rospkg.RosPack()
    package_path = rospack.get_path(f"anymal_d_rsl")
    file_name = f"{package_path}/config/replay.yaml"
    load_yaml_into_rosparam(file_name)

    stack_launcher.launch("replay_rsl", ros_launch=ros_launch)

if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("anymal_d_rsl:replay.py: No yaml file provided. Exiting.")
    else:
        yaml_file = sys.argv[1]
        replay(yaml_file)