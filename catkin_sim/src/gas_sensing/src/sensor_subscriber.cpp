#include "ros/ros.h"
#include <cmath>
#include <visualization_msgs/Marker.h>
#include "std_msgs/Float32MultiArray.h"
#include "gas_sensing/ConcentrationWithHeader.h"
#include "esp32_ros/FloatWithHeader.h"
#include <geometry_msgs/PoseWithCovarianceStamped.h>

// TODO!!!!
// I think there is still work to do: I don't simply want any message to be published on the topic /sensor_data_transmitter, I also want to make sure that the position and concentration I am combining correspond to the same timestamp.
// My FloatWithHeader message has a header, so I can use that to check the timestamp of the concentration data.
// I will therefore need to use message_filters to synchronize the two messages. I will need to use a TimeSynchronizer object to synchronize the two messages.


// After this, also modify the CMakeLists.txt file to include the message_filters package.
// But also to get access to the FloatWithHeader message, I need to add the esp32_ros package to the package.xml file and make all corresponding changes.
// Also think to add this new node as executable in the CMakeLists.txt file.

// Once this is working, look at the launch file, and make sure that the new node is launched with the correct parameters.
// Should I also modify the CMakeLists.txt file, now that I have a launch file?

// Once this is done, build the new_package esp32_ros and test the sensor reading, before modifying the code there to integrate new sensor.

class SensorSubscriber
{
public:
    SensorSubscriber()
    {
        subPosition = nh.subscribe("/state_estimator/pose_in_odom", 1000, &SensorSubscriber::poseCallback, this);
        subConcentration = nh.subscribe("sensor_data_transmitter", 1000, &SensorSubscriber::concentrationCallback, this);
        
        pub = nh.advertise<gas_sensing::ConcentrationWithHeader>("gas_concentration_transmitter", 1000);
        marker_pub = nh.advertise<visualization_msgs::Marker>("concentration_marker", 1);
    }
private:
    void poseCallback(const geometry_msgs::PoseWithCovarianceStampedConstPtr& msg)
    {
        lastPose = *msg;
        publishConcentrationWithPose();
    }

    void concentrationCallback(const esp32_ros::FloatWithHeaderConstPtr& msg)
    {
        lastConcentration = *msg;
        publishConcentrationWithPose();
    }
    
    void publishConcentrationWithPose()
    {
        if (!lastPose || !lastConcentration)
        {
            // We don't have both pose and concentration data yet.
            return;
        } else 
        {
            float x = lastPose->pose.pose.position.x;
            float y = lastPose->pose.pose.position.y;
            float z = lastPose->pose.pose.position.z;
            
            ROS_INFO("Received pose: [%f, %f, %f]", x, y, z);
            ROS_INFO("Received timestamp: [%f]", lastPose->header.stamp.toSec());
            ROS_INFO("Received frame_id: [%s]", lastPose->header.frame_id.c_str());

            // Get the concentration from the sensor
            //TODO: How can I do this with only one callback? do I need a second callback function?
            float concentration = lastConcentration->data;

            gas_sensing::ConcentrationWithHeader transmitted_gas_concentration;

            // Prepare the message to be sent
            transmitted_gas_concentration.pose.position.x = x;
            transmitted_gas_concentration.pose.position.y = y;
            transmitted_gas_concentration.pose.position.z = z;
            
            // Note: this topic will only send the latest concentration, not the history of concentrations. Storing concentrations will be done by the planning node.
            // TODO: For now, concentration is hardcoded, but for later: think about coordinating the timestamps of the position and of the gas concentration
            transmitted_gas_concentration.concentration = concentration;

            transmitted_gas_concentration.header.stamp = lastPose->header.stamp;
            transmitted_gas_concentration.header.frame_id = "odom";

            // Normalize the concentration to be used as the scale of the marker (max_concentration is hardcoded for now, but it should be a parameter of the node)
            float max_concentration = 50.0;
            float normalized_concentration = concentration/max_concentration;

            visualization_msgs::Marker marker;
            marker.header.frame_id = "odom";
            marker.header.stamp = lastPose->header.stamp;
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
            marker.color.a = 1.0;
            marker.color.r = std::min(normalized_concentration, 1.0f);
            marker.color.g = 0.0;
            marker.color.b = 0.0;

            pub.publish(transmitted_gas_concentration);
            marker_pub.publish(marker);
        }
        
    }

    ros::NodeHandle nh;
    ros::Subscriber subPosition;
    ros::Subscriber subConcentration;
    ros::Publisher pub;
    ros::Publisher marker_pub;

    geometry_msgs::PoseWithCovarianceStampedConstPtr lastPose;
    esp32_ros::FloatWithHeaderConstPtr lastConcentration;
};

int main(int argc, char **argv)
{
    //Initialize ros and create a node handle
    ros::init(argc, argv, "sensor_faker");

    //Create an instance of the SensorFaker class.
    SensorSubscriber sensor_subscriber;

    ros::spin();

    return 0;
}