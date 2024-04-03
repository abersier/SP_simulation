#!/usr/bin/env python3

import argparse
import rospkg
import rospy
import sys

from stack_launcher import launch
from anymal_launch import get_ros_launch, load_config_with_argparse_with_override
from anymal_d import get_anymal_d_feature_toggle_descriptions
from anymal_d_rsl import get_rsl_feature_toggle_descriptions


def sim(args):
    # Start the substacks based on the --substack option (or the lack of it)
    ros_launch = get_ros_launch()
    rospy.init_node('anymal_sim')

    # exrtact package paths
    rospack = rospkg.RosPack()
    custom_package_path = rospack.get_path(f"anymal_d_rsl")
    custom_config_file = f"{custom_package_path}/config/{args.cfg}"
    override_arg_descriptions = dict()
    override_arg_descriptions["extension_config_file"] = {"value": custom_config_file}
    override_arg_descriptions["setup"] = dict()
    override_arg_descriptions["setup"]["value"] = "sim"

    # feature toggles
    anybotics_feature_toggles = get_anymal_d_feature_toggle_descriptions()
    rsl_feature_toggles = get_rsl_feature_toggle_descriptions()

    # load config
    load_config_with_argparse_with_override(
        default_generation="d",
        additional_feature_toggle_descriptions={**anybotics_feature_toggles, **rsl_feature_toggles},
        override_arg_descriptions=override_arg_descriptions
    )
    # launch sim
    launch("sim", trigger_param="/config_loaded", ros_launch=ros_launch)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--cfg', type=str, default='rsl.yaml', help='config file')

    # The anybotics launch script has different arguments to parse. We need to parse the known args here and then remove them from argv
    parsed_args, remaining_args = parser.parse_known_args()
    sys.argv = sys.argv[:1] + remaining_args

    sim(parsed_args)