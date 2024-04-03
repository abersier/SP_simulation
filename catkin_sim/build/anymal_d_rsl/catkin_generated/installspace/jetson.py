from stack_launcher_jetson import launch

import rospy


if __name__ == '__main__':
    # Start a ROS node. No need to wait for master explicitly, this is done by init_node.
    rospy.init_node('anymal_jetson')

    launch("jetson", trigger_param="/config_loaded")
