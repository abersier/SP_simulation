#!/usr/bin/env python3

import argparse
import rospkg
import os
import sys

from stack_launcher import launch
from anymal_launch import get_anymal_feature_toggle_descriptions, get_ros_launch, load_config_with_argparse_with_override, clear_config
from anymal_d import get_anymal_d_feature_toggle_descriptions
from anymal_d_rsl import get_rsl_feature_toggle_descriptions
import rospy


def lpc(args):
    # Clear the config to make sure we don't have residual parameters from ANYbotics feature toggles
    clear_config()

    rospy.init_node('anymal_lpc')
    
    # extract package paths
    rospack = rospkg.RosPack()
    custom_package_path = rospack.get_path(f"anymal_d_rsl")
    custom_config_file = f"{custom_package_path}/config/{args.cfg}"
    override_arg_descriptions = {}
    override_arg_descriptions["robot"] = {"value": os.getenv('ANYMAL_NAME')}
    override_arg_descriptions["extension_config_file"] = {"value": custom_config_file}

    # feature toggles
    anymal_feature_toggles = get_anymal_feature_toggle_descriptions()
    anymal_d_feature_toggles = get_anymal_d_feature_toggle_descriptions()
    anymal_d_rsl_feature_toggles = get_rsl_feature_toggle_descriptions()

    # load config
    load_config_with_argparse_with_override(
        default_generation="d",
        additional_feature_toggle_descriptions={**anymal_feature_toggles, **anymal_d_feature_toggles, **anymal_d_rsl_feature_toggles},
        override_arg_descriptions=override_arg_descriptions
    )
    # launch lpc
    launch("lpc", trigger_param="/config_loaded", use_cgroups=True)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--cfg', type=str, default='rsl.yaml', help='config file')

    # The anybotics launch script has different arguments to parse. We need to parse the known args here and then remove them from argv
    parsed_args, remaining_args = parser.parse_known_args()
    sys.argv = sys.argv[:1] + remaining_args

    lpc(parsed_args)
