#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h"
#include "nav_msgs/Path.h"


class PathHardcoder
{
public:
    PathHardcoder()
    {
        pub = nh.advertise<nav_msgs::Path>("hardcoded_path", 1000); //This creates the topic to publish the path
    }

    void publish(const nav_msgs::Path& path)
    {
        pub.publish(path);
    }

private:
    ros::NodeHandle nh;
    ros::Publisher pub;
};


int main(int argc, char **argv)
{
    // Initialize the ROS system and become a node.
    ros::init(argc, argv, "path_hardcoder");

    PathHardcoder path_hardcoder;

    // Wait for the publisher to connect to subscribers
    sleep(1);

    
    // // Robot walks along a straight line
    // // Array of hardcoded step-points
    // geometry_msgs::PoseStamped step_points[4];

    // // Initialize the step-points
    // for (int i = 0; i < 4; ++i) {
    //     step_points[i].header.stamp = ros::Time::now();
    //     step_points[i].header.frame_id = "odom";
    //     step_points[i].pose.position.x = i * 1.0; // replace with actual x coordinates
    //     step_points[i].pose.position.y = i * 1.0; // replace with actual y coordinates
    //     step_points[i].pose.orientation.w = 1.0; // replace with actual orientation
    // }

    // // Create a Path message
    // nav_msgs::Path path;
    // path.header.stamp = ros::Time::now();
    // path.header.frame_id = "odom";

    // // Add the step-points to the Path message
    // for (int i = 0; i < 4; ++i) {
    //     path.poses.push_back(step_points[i]);
    // }

    // ros::Rate loop_rate(10); // 10 Hz
    
    // // Publish the Path message
    // path_hardcoder.publish(path);

    // // Robot walks on a circle
    // // Radius of the circle
    // double radius = 1.0;

    // // Number of step-points
    // int num_points = 100;

    // // Array of hardcoded step-points
    // geometry_msgs::PoseStamped step_points[num_points];

    // // Initialize the step-points along a circle
    // for (int i = 0; i < num_points; ++i) {
    //     double theta = 2.0 * M_PI * i / num_points; // angle for each step-point
    //     step_points[i].header.stamp = ros::Time::now();
    //     step_points[i].header.frame_id = "odom";
    //     step_points[i].pose.position.x = radius * cos(theta); // x coordinate on the circle
    //     step_points[i].pose.position.y = radius * sin(theta); // y coordinate on the circle
    //     step_points[i].pose.orientation.w = 1.0;
    // }

    // Robot walks on a random path
    // Room dimensions
    double room_length = 12.0; // rounded from 12.9
    double room_width = 6.0; // rounded from 6.4

    // Number of step-points
    int num_points = 100;

    // Array of hardcoded step-points
    geometry_msgs::PoseStamped step_points[num_points];

    // Initialize the step-points randomly within the room
    for (int i = 0; i < num_points; ++i) {
        step_points[i].header.stamp = ros::Time::now();
        step_points[i].header.frame_id = "odom";

        // Random x and y coordinates within the room
        step_points[i].pose.position.x = ((double) rand() / (RAND_MAX)) * room_length - room_length / 2;
        step_points[i].pose.position.y = ((double) rand() / (RAND_MAX)) * room_width - room_width / 2;

        step_points[i].pose.orientation.w = 1.0;
    }

    // Create a Path message
    nav_msgs::Path path;
    path.header.stamp = ros::Time::now();
    path.header.frame_id = "odom"; 

    // Add the step-points to the Path message
    for (int i = 0; i < num_points; ++i) {
        path.poses.push_back(step_points[i]);
    }

    // Publish the Path message
    path_hardcoder.publish(path);


    ros::spin();

    return 0;
}