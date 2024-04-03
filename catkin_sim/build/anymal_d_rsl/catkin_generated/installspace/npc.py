#!/usr/bin/env python3

from stack_launcher import launch

import rospy


if __name__ == '__main__':
    # Start a ROS node. No need to wait for master explicitly, this is done by init_node.
    rospy.init_node('anymal_npc')

    launch("npc", trigger_param="/config_loaded")