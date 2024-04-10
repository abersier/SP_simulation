#include "ros/ros.h"
#include <cmath>
#include <visualization_msgs/Marker.h>
#include "std_msgs/Float32MultiArray.h"
#include "gas_sensing/ConcentrationWithHeader.h"
#include <geometry_msgs/PoseWithCovarianceStamped.h>
// #include <tf/transform_datatypes.h>
// #include <tf/transform_broadcaster.h>


// Gaussian function for gas concentration
float gas_concentration(float x, float y) {
    float sigma = 5.0; // Standard deviation

    // Define center point of the Gaussian
    float mu_x = 2.0; // Mean for x
    float mu_y = 3.0; // Mean for y

    float peak_value = 50; // Peak value of the Gaussian corresponding to the concentration in ppm at the source

    return peak_value* exp(-0.5 * (pow((x - mu_x) / sigma, 2.0) + pow((y - mu_y) / sigma, 2.0)));
}

// This function was taken from the node pathFollower
// void odomHandler(const geometry_msgs::PoseWithCovarianceStampedConstPtr& odomIn)
// {
//   odomTime = odomIn->header.stamp.toSec();

//   double roll, pitch, yaw;
//   geometry_msgs::Quaternion geoQuat = odomIn->pose.pose.orientation;
//   tf::Matrix3x3(tf::Quaternion(geoQuat.x, geoQuat.y, geoQuat.z, geoQuat.w)).getRPY(roll, pitch, yaw);

//   vehicleRoll = roll;
//   vehiclePitch = pitch;
//   vehicleYaw = yaw;
//   vehicleX = odomIn->pose.pose.position.x;
//   vehicleY = odomIn->pose.pose.position.y;
//   vehicleZ = odomIn->pose.pose.position.z;

//   if ((fabs(roll) > inclThre * PI / 180.0 || fabs(pitch) > inclThre * PI / 180.0) && useInclToStop) {
//     stopInitTime = odomIn->header.stamp.toSec();
//   }
// }

class SensorFaker
{
public:
    SensorFaker()
    {
        subPosition = nh.subscribe("/state_estimator/pose_in_odom", 1000, &SensorFaker::callback, this);
        
        pub = nh.advertise<gas_sensing::ConcentrationWithHeader>("gas_concentration_transmitter", 1000);

        marker_pub = nh.advertise<visualization_msgs::Marker>("concentration_marker", 1);
    }
private:
    void callback(const geometry_msgs::PoseWithCovarianceStampedConstPtr& msg)
    {
        float x = msg->pose.pose.position.x;
        float y = msg->pose.pose.position.y;
        float z = msg->pose.pose.position.z;
        
        ROS_INFO("Received pose: [%f, %f, %f]", x, y, z);
        // In case you want to use the orientation as well, use the other callback function: void odomHandler(const geometry_msgs::PoseWithCovarianceStampedConstPtr& odomIn)
        // ROS_INFO("Received orientation: [%f, %f, %f, %f]", msg->pose.orientation.x, msg->pose.orientation.y, msg->pose.orientation.z, msg->pose.orientation.w);
        ROS_INFO("Received timestamp: [%f]", msg->header.stamp.toSec());
        ROS_INFO("Received frame_id: [%s]", msg->header.frame_id.c_str());

        // Given the position (x,y), compute the corresponding gas concentration
        float concentration = gas_concentration(x, y);

        gas_sensing::ConcentrationWithHeader transmitted_gas_concentration;

        // Prepare the message to be sent
        transmitted_gas_concentration.pose.position.x = x;
        transmitted_gas_concentration.pose.position.y = y;
        transmitted_gas_concentration.pose.position.z = z;
        
        // Note: this topic will only send the latest concentration, not the history of concentrations. Storing concentrations will be done by the planning node.
        transmitted_gas_concentration.concentration = concentration;

        transmitted_gas_concentration.header.stamp = msg->header.stamp;
        transmitted_gas_concentration.header.frame_id = "odom";

        // Normalize the concentration to be used as the scale of the marker
        float max_concentration = 50.0;
        float normalized_concentration = concentration/max_concentration;

        visualization_msgs::Marker marker;
        marker.header.frame_id = "odom";
        marker.header.stamp = msg->header.stamp;
        marker.ns = "gas_concentration";
        marker.id = 0;
        marker.type = visualization_msgs::Marker::SPHERE;
        marker.action = visualization_msgs::Marker::ADD;
        marker.pose.position.x = x;
        marker.pose.position.y = y;
        marker.pose.position.z = z + 1;
        marker.pose.orientation.x = 0.0;
        marker.pose.orientation.y = 0.0;
        marker.pose.orientation.z = 0.0;
        marker.pose.orientation.w = 1.0;
        marker.scale.x = normalized_concentration;
        marker.scale.y = normalized_concentration;
        marker.scale.z = normalized_concentration;
        // Now set RGB value and opacity (alpha)
        marker.color.a = 1.0;
        marker.color.r = std::min(normalized_concentration, 1.0f);
        marker.color.g = 0.0;
        marker.color.b = 0.0;

        pub.publish(transmitted_gas_concentration);
        marker_pub.publish(marker);
    }

    ros::NodeHandle nh;
    ros::Subscriber subPosition;
    ros::Publisher pub;

    ros::Publisher marker_pub;
};

int main(int argc, char **argv)
{
    //Initialize ros and create a node handle
    ros::init(argc, argv, "sensor_faker");

    //Create an instance of the SensorFaker class.
    SensorFaker sensor_faker;

    ros::spin();

    return 0;
}