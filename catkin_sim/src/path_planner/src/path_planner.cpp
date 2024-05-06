#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h"
#include "nav_msgs/Path.h"
// #include "gas_sensing/ConcentrationWithHeader.h"
#include "path_planner/ConcentrationWithHeader.h"

#include <deque>
#include <cmath>

// TODO: here is a list of modifications related to this node, if I want my pipeline to work
// 1. I need to replace the hardcoded path with the gradient path in the node path_follower.cpp (done)
// 2. I need to modify my CMakeLists.txt to include the new node path_planner.cpp (done)
// 3. I need to modify my launch file to include the new node path_planner.cpp and verify its correctness (done)
// 4. I need to modify my CMakeLists.txt and my package.xml to include #include <deque> and #include <cmath>



double computeDistance(const geometry_msgs::PoseStamped& pose1, const geometry_msgs::PoseStamped& pose2) {
    double dx = pose1.pose.position.x - pose2.pose.position.x;
    double dy = pose1.pose.position.y - pose2.pose.position.y;
    // double dz = pose1.pose.position.z - pose2.pose.position.z;

    return std::sqrt(dx * dx + dy * dy);
}


// In this node, I want to do the planning of the path, based on the approximated gradient of the concenetration.
// All the needed information is contained in the topic gas_concentration_transmitter
// It contains a header with a stamp and a frame_id
// As well as a position of the type geometry_msgs::PoseStamped
// And a concentration value of the type float32.
class PathPlanner
{
public:
    PathPlanner()
    {
        // Initialize moving_to_goal to false
        moving_to_goal = false;

        // Initialize the variable previous_goal to the starting point
        previous_goal.pose.position.x = start_x;
        previous_goal.pose.position.y = start_y;

        // Subscribe to the gas concentration transmitter topic
        sub = nh.subscribe("gas_concentration_transmitter", 1000, &PathPlanner::callback, this);
        // Create publisher to publish the path
        pub = nh.advertise<nav_msgs::Path>("gradient_path", 1000);
    }

    void publish(const nav_msgs::Path& path)
    {
        pub.publish(path);
    }

    // // The first 3 measurements, as the gradient cannot be calculated yet, are obtained randomly
    // // The path should be planned in a way that the robot moves towards the area with the highest concentration
    // // The path should be planned in a way that the robot stays inside the boundaries of the room

    // // In my opinion, this simple method should work, as we don't have obstacles in the room.
    // // Otherwise, we would could try using RRT* (not possible because the "goal", namely the gas source, is not known)

    // // Basically, after getting the first three points (compute them by sampling, randomly)
    // // We can compute the gradient of the concentration
    // // Then we start moving in that direction of a distance proportional to the gradient
    // // If we go out of the boudaries before, we recompute the gradient
    // // Else we recompute the gradient at that new reached positon

    // // A variant could be to keep walking in that direction, as long as the concentration increases

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

    bool moving_to_goal;
    geometry_msgs::PoseStamped temp_goal;
    geometry_msgs::PoseStamped previous_goal;

    // On the topic gas_concentration_transmitter, a new message is being published everytime a new synchronized concentration-position pair is being measured
    // NOTE: for now, we don't assert a certain distance between points used for the gradient calculation
    void callback(const path_planner::ConcentrationWithHeaderConstPtr& msg) {

        // Extract the current time, position, and concentration
        ros::Time current_time = msg->header.stamp;
        geometry_msgs::PoseStamped current_position = msg->pose;
        float current_concentration = msg->concentration;

        // Start by treating the edge cases: the first point, the same point, and the invalid concentration values
        //TODO: consider the case where the robot has found the source: terminate the algorithm!
        if (timeDeque.size() == 0) {
            // First point, save it in the arrays
            timeDeque.push_front(current_time);
            positionDeque.push_front(current_position);
            concentrationDeque.push_front(current_concentration);
            ROS_INFO("First value saved");
            return;
        } else if (positionDeque[0] == current_position) { //TODO: you can't simply compare two PoseStamped objects!!!!
            // Robot didn't move, ignore the new measurement
            ROS_INFO("Robot didn't move, ignore the new measurement");
            return;
        } else if (current_concentration == 0 || current_concentration == -INFINITY || current_concentration == INFINITY || current_concentration != current_concentration) {
            // Invalid concentration value, ignore the new measurement
            ROS_INFO("Invalid concentration value");
            return;
        } 

        // In case, situation is valid:
        // Save information in arrays of 10 elements, so that the gradient can be calculated
        // Once the arrays are full, the new values should replace the oldest ones
        if (timeDeque.size() == 10) {
            timeDeque.pop_back();
            positionDeque.pop_back();
            concentrationDeque.pop_back();
            ROS_INFO("Point has been popped out of the arrays");

        }
        timeDeque.push_front(current_time);
        positionDeque.push_front(current_position);
        concentrationDeque.push_front(current_concentration);
        ROS_INFO("New point has been saved in the arrays");


        // Verifiy if the latest point corresponds to the temp_goal
        // TODO: make sure that this margin of 0.1 doesn't create a bug regarding the room boundaries
        double distance = computeDistance(temp_goal, current_position);
        ROS_INFO("Distance: %f", distance);
        ROS_INFO("Temp_goal: x = %f, y = %f, z = %f", temp_goal.pose.position.x, temp_goal.pose.position.y, temp_goal.pose.position.z);
        ROS_INFO("Current_position: x = %f, y = %f, z = %f", current_position.pose.position.x, current_position.pose.position.y, current_position.pose.position.z);


        if (moving_to_goal && computeDistance(temp_goal, current_position) < 0.1) {
            moving_to_goal = false;
            previous_goal = temp_goal;
        }

        // If the robot is currently moving towards a goal, ignore new measurements
        if (moving_to_goal) {
            ROS_INFO("Still moving to goal");
            return;
        }

        // Since the callback is called everytime a new concentration-position pair is being measured
        // The robot shouldn't have time to move to far from its initial position before we have 3 points
        if (timeDeque.size() < 3) {
            // Randomly sample the first point inside room boundaries, as the gradient cannot be calculated yet
            geometry_msgs::PoseStamped random_goal;
            random_goal.header.stamp = ros::Time::now();
            random_goal.header.frame_id = "odom";
            random_goal.pose.position.x = ((double) rand() / (RAND_MAX)) * 2.0;
            random_goal.pose.position.y = ((double) rand() / (RAND_MAX)) * 1.0;
            random_goal.pose.orientation.w = 1.0;

            // Create a Path message corresponding to the random_goal: idea is to gather more data before planning using the gradient
            nav_msgs::Path path;
            path.header.stamp = ros::Time::now();
            path.header.frame_id = "odom";
            path.poses.push_back(current_position); //previous_goal
            path.poses.push_back(random_goal); 
            publish(path);
            temp_goal = random_goal;
            moving_to_goal = true;

            // The Deque arrays are too small to calculate the gradient, exit the callback
            ROS_INFO("Random goal has been set, not enough values for gradient calculation");
            return;
        } else {
            // Compute the gradient of the concentration
            // The gradient is computed using the 3 most recent points
            // The gradient is computed using a central difference approximation
            float x1 = positionDeque[0].pose.position.x;
            float y1 = positionDeque[0].pose.position.y;
            float c1 = concentrationDeque[0];
            float x2 = positionDeque[1].pose.position.x;
            float y2 = positionDeque[1].pose.position.y;
            float c2 = concentrationDeque[1];
            float x3 = positionDeque[2].pose.position.x;
            float y3 = positionDeque[2].pose.position.y;
            float c3 = concentrationDeque[2];
            
            float dx1 = x2 - x1;
            float dy1 = y2 - y1;
            float dc1 = c2 - c1;
            float dx2 = x3 - x2;
            float dy2 = y3 - y2;
            float dc2 = c3 - c2;

            // This corresponds to the gradient vector
            float grad_x = (dc2 / dx2 + dc1 / dx1) / 2;
            float grad_y = (dc2 / dy2 + dc1 / dy1) / 2;

            // Now let's compute its norm
            float grad_norm = std::sqrt(grad_x * grad_x + grad_y * grad_y);

            // Normalize the gradient vector
            grad_x /= grad_norm;
            grad_y /= grad_norm;
            // TODO: define a meaningful step size
            float step_size = 0.5; // This is a parameter that can be tuned
            
            // Ensure that your new temporary goal is inside the room boundaries
            do {
                // Compute the new goal point
                temp_goal.pose.position.x = positionDeque[1].pose.position.x + grad_x * step_size;
                temp_goal.pose.position.y = positionDeque[1].pose.position.y + grad_y * step_size;

                // NOTE: The time is set to now, but it should it be set to the time where the point is reached?
                temp_goal.header.stamp = ros::Time::now();
                temp_goal.header.frame_id = "odom";
                temp_goal.pose.orientation.w = 1.0;

                // Decrease step size if the goal point is outside the room boundaries
                // TODO: here, consider the criterium of (is temporary goal reached, using a margin of 0.1)
                // TODO: it could generate problems with the room boundaries
                if (temp_goal.pose.position.x < -(room_length/2) || temp_goal.pose.position.x > (room_length/2) || temp_goal.pose.position.y < -(room_width/2) || temp_goal.pose.position.y > (room_width/2)) {
                    step_size *= 0.5;
                } else {
                    break;
                }
            } while (true);

            // TODO: Again, consider this margin that might be problematic whith the step size and with the room boudaries
            if (computeDistance(temp_goal, previous_goal) < 0.1) {
                // consider that the goal has been reached
                while(true);
            } else {
                previous_goal = temp_goal;
                ROS_INFO("Found goal");
            }



            // NOTE: Here the time is set to now, but it could be set to the time of the last measurement
            // Take this into consideration while debugging
            nav_msgs::Path path;
            path.header.stamp = ros::Time::now();
            path.header.frame_id = "odom";
            path.poses.push_back(current_position); //previous_goal
            path.poses.push_back(temp_goal); 
            publish(path);

            moving_to_goal = true; 


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
    ros::init(argc, argv, "path_planner");

    PathPlanner path_planner;

    // Did not work here
    // // Wait for the publisher to connect to subscribers
    // sleep(1);

    ros::spin();

    return 0;
}



// The issue that I have seem to be related to timings problems.
// When I start the hardcoded path outisde of the launch file, it behaves similary:
// The robot starts walking into to wrong direction.
// It seems like the initialization of the coordinate system in path_follower might have an influence.
// When I start the hardcoded path inside the launch file, it behaves correctly.
// But when I start the path_planner node inside the launch file, it behaves incorrectly.
// It then also go into the wrong direction. My guess is that it might be related to the sleep(1).
// This is present in the hardcoded path, but not in the path_planner.

// Even after switching the order of the nodes in the launch file (putting path_follower first)
// Removing the sleep(1) from the hardcoded path breaks it

// I should consider look into services


