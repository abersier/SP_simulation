#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h"
#include "nav_msgs/Path.h"
#include "std_srvs/Empty.h" // Include the Empty service message

#include <tf2_ros/transform_listener.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>


class PathHardcoder
{
public:

    tf2_ros::Buffer tfBuffer;
    tf2_ros::TransformListener tfListener;

    PathHardcoder() : tfListener(tfBuffer)
    {
        // Create the topic to publish the path
        pub = nh.advertise<nav_msgs::Path>("hardcoded_path", 1000);
        // Define the service server
        service = nh.advertiseService("send_path", &PathHardcoder::sendPathCallback, this);
    }

    void publish(const nav_msgs::Path& path)
    {
        pub.publish(path);
    }

    // Service callback function
    bool sendPathCallback(std_srvs::Empty::Request& req, std_srvs::Empty::Response& res)
    {
        // Call your path generation code here
        // This is the code that generates the path and publishes it

        // Robot simulates walk towards the source
        // Room dimensions
        double room_length = 12.0; // rounded from 12.9
        double room_width = 6.0; // rounded from 6.4

        // Location of the source
        double source_x = 5.5;
        double source_y = 2.5;

        // Starting point of the robot
        double start_x = 0.0;
        double start_y = 0.0;

        // Number of step-points
        int num_points = 100;

        // Array of hardcoded step-points
        // geometry_msgs::PoseStamped step_points[num_points];
        std::vector<geometry_msgs::PoseStamped> step_points(num_points);

        // Initialize the step-points following the path with small deviations and corrections
        for (int i = 0; i < num_points; ++i) {
            step_points[i].header.stamp = ros::Time::now();
            step_points[i].header.frame_id = "odom";

            // Linear interpolation between the start and end points
            double t = (double)i / (num_points - 1);
            step_points[i].pose.position.x = (1 - t) * start_x + t * source_x;
            step_points[i].pose.position.y = (1 - t) * start_y + t * source_y;

            // Add some random noise to simulate small deviations and corrections
            step_points[i].pose.position.x += ((double) rand() / (RAND_MAX)) * 0.7 - 0.35;
            step_points[i].pose.position.y += ((double) rand() / (RAND_MAX)) * 0.7 - 0.35;

            step_points[i].pose.orientation.w = 1.0;

            try {
                geometry_msgs::TransformStamped transform = tfBuffer.lookupTransform("base", "odom", ros::Time(0));
                tf2::doTransform(step_points[i], step_points[i], transform);
            } catch (tf2::TransformException &ex) {
                ROS_WARN("%s", ex.what());
                ros::Duration(1.0).sleep();
                continue;
            }
        }

        // Create a Path message
        nav_msgs::Path path;
        path.header.stamp = ros::Time::now();
        path.header.frame_id = "base"; // The published path needs to be in the base frame

        // // Add the step-points to the Path message
        // for (int i = 0; i < num_points; ++i) {
        //     path.poses.push_back(step_points[i]);
        // }
        path.poses.push_back(step_points[0]);
        path.poses.push_back(step_points[99]);

        // Publish the Path message
        publish(path);

        return true;
    }


private:
    ros::NodeHandle nh;
    ros::Publisher pub;
    ros::ServiceServer service; // Define the service server
};


int main(int argc, char **argv)
{
    // Initialize the ROS system and become a node.
    ros::init(argc, argv, "path_hardcoder");

    PathHardcoder path_hardcoder;

    ros::spin();

    return 0;
}