#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h"
#include "nav_msgs/Path.h"
#include "gas_sensing/ConcentrationWithHeader.h"
#include <deque>
#include <cmath>



double computeDistance(const geometry_msgs::PoseStamped& pose1, const geometry_msgs::PoseStamped& pose2) {
    double dx = pose1.pose.position.x - pose2.pose.position.x;
    double dy = pose1.pose.position.y - pose2.pose.position.y;
    double dz = pose1.pose.position.z - pose2.pose.position.z;

    return std::sqrt(dx * dx + dy * dy + dz * dz);
}


// In this node, I want to do the planning of the path, based on the approximated gradient of the concenetration.
// All the needed information is contained in the topic gas_concentration_transmitter
// It contains a header with a stamp and a frame_id
// As well as a position of the type geometry_msgs::PoseWithCovarianceStamped
// And a concentration value of the type float.
class PathPlanner
{
public:
    PathPlanner()
    {
        // Subscribe to the gas concentration transmitter topic
        sub = nh.subscribe("gas_concentration_transmitter", 1000, &PathPlanner::callback, this);
        // Create publisher to publish the path
        pub = nh.advertise<nav_msgs::Path>("gradient_path", 1000);
    }

    void publish(const nav_msgs::Path& path)
    {
        pub.publish(path);
    }

    // The first 3 measurements, as the gradient cannot be calculated yet, are obtained randomly
    // The path should be planned in a way that the robot moves towards the area with the highest concentration
    // The path should be planned in a way that the robot stays inside the boundaries of the room

    // In my opinion, this simple method should work, as we don't have obstacles in the room.
    // Otherwise, we would could try using RRT* (not possible because the "goal", namely the gas source, is not known)

    // Basically, after getting the first three points (compute them by sampling, randomly)
    // We can compute the gradient of the concentration
    // Then we start moving in that direction of a distance proportional to the gradient
    // If we go out of the boudaries before, we recompute the gradient
    // Else we recompute the gradient at that new reached positon

    // A variant could be to keep walking in that direction, as long as the concentration increases
    void plan()
    {
        return 0;
    }

private:
    // Initialize the arrays to store the information used in the callback function
    std::deque<ros::Time> timeDeque;
    std::deque<geometry_msgs::PoseStamped> positionDeque;
    std::deque<float> concentrationDeque;

    // Robot needs to stay inside the boudaries of the room, as for now, we don't have obstacle avoidance
    // Room dimensions
    double room_length = 12.0; // rounded from 12.9
    double room_width = 6.0; // rounded from 6.4

    // Starting point of the robot
    double start_x = 0.0;
    double start_y = 0.0;

    // On the topic gas_concentration_transmitter, a new message is being published everytime a new synchronized concentration-position pair is being measured
    // NOTE: for now, we don't assert a certain distance between points used for the gradient calculation
    void callback(const gas_sensing::ConcentrationWithHeadeConstPtr& msg) {

        // Extract the current time, position, and concentration
        ros::Time current_time = msg->header.stamp;
        geometry_msgs::PoseStamped current_position = msg->position;
        float current_concentration = msg->concentration;

        // Start by treating the edge cases: the first point, the same point, and the invalid concentration values
        //TODO: consider the case where the robot has found the source: terminate the algorithm!
        if (timeDeque.size() == 0) {
            timeDeque.push_front(current_time);
            positionDeque.push_front(current_position);
            concentrationDeque.push_front(current_concentration);
            return;
        } else if (positionDque[0] == current_position) {
            return;
        } else if (current_concentration == 0 || current_concentration == -INFINITY || current_concentration == INFINITY || current_concentration != current_concentration) {
            return;
        } 

        // In case, situation is valid:
        // Save information in arrays of 10 elements, so that the gradient can be calculated
        // Once the arrays are full, the new values should replace the oldest ones
        if (timeDeque.size() == 10) {
            timeDeque.pop_back();
            positionDeque.pop_back();
            concentrationDeque.pop_back();
        }
        timeDeque.push_front(current_time);
        positionDeque.push_front(current_position);
        concentrationDeque.push_front(current_concentration);

        // Since the callback is called everytime a new concentration-position pair is being measured
        // The robot shouldn't have time to move to far from its initial position before we have 3 points
        if (timeDeque.size() < 3) {
            // Randomly sample the first point inside room boundaries, as the gradient cannot be calculated yet
            geometry_msgs::PoseStamped random_goal;
            random_goal.header.stamp = ros::Time::now();
            random_goal.header.frame_id = "odom";
            random_goal.pose.position.x = ((double) rand() / (RAND_MAX)) * 12.0;
            random_goal.pose.position.y = ((double) rand() / (RAND_MAX)) * 6.0;
            random_goal.pose.orientation.w = 1.0;

            // Create a Path message corresponding to the random_goal: idea is to gather more data before planning using the gradient
            nav_msgs::Path path;
            path.header.stamp = ros::Time::now();
            path.header.frame_id = "odom";
            path.poses.push_back(random_goal); 
            publish(path);

            // The Deque arrays are too small to calculate the gradient, exit the callback
            return;
        } else {
            // Compute the gradient of the concentration
            // The gradient is computed using the 3 most recent points
            // The gradient is computed using the formula: grad = (c2 - c1) / d
            // Where c1 and c2 are the concentrations at the first and second points
            // And d is the distance between the first and second points
            // The gradient is a vector, so we need to compute the x and y components separately
            // The x component is computed using the formula: grad_x = (c2 - c1) / dx
            // The y component is computed using the formula: grad_y = (c2 - c1) / dy
            // Where dx and dy are the x and y components of the distance vector between the first and second points
            // The gradient is then used to plan the path of the robot
            // The robot should move in the direction of the gradient, towards the area with the highest concentration
            // The robot should stay inside the boundaries of the room
            // The robot should stop moving when it reaches the source of the gas
            // The robot should stop moving when the concentration is above a certain threshold
            // The robot should stop moving when the gradient is below a certain threshold
            // The robot should stop moving when the gradient is zero
            // The robot should stop moving when the concentration is decreasing
            // The robot should stop moving when the concentration is zero
            // The robot should stop moving when the concentration is negative
            // The robot should stop moving when the concentration is NaN
            // The robot should stop moving when the concentration is infinite
            // The robot should stop moving when the concentration is -infinite
            // The robot should stop moving when the concentration is not a finite number
        }
        

    }

    ros::NodeHandle nh;
    ros::Publisher pub;
    ros::Subscriber sub;
};


int main(int argc, char **argv)
{
    // Initialize the ROS system and become a node.
    ros::init(argc, argv, "path_hardcoder");

    PathPlanner path_planner;

    ros::spin();

    return 0;
}