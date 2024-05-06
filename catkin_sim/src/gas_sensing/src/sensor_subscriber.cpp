#include "ros/ros.h"
#include <cmath>
#include <visualization_msgs/Marker.h>
#include "std_msgs/Float32MultiArray.h"
#include "gas_sensing/ConcentrationWithHeader.h"
#include "esp32_ros/FloatWithHeader.h"
#include <geometry_msgs/PoseWithCovarianceStamped.h>

#include <message_filters/subscriber.h>
#include <message_filters/time_synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>

// TODO: In this node, the handling of the normalization is wrong.
// when following the gradient, in theory, the normalized_concentration will be 1 (because maximal) all the time


typedef message_filters::sync_policies::ApproximateTime<geometry_msgs::PoseWithCovarianceStamped, esp32_ros::FloatWithHeader> MySyncPolicy;

void concentration_to_color(float normalized_concentration, float& r, float& g, float& b) {

    if (normalized_concentration < 0.5) {
        // Gradient from blue to green
        b = 1.0 - 2 * normalized_concentration;
        g = 2 * normalized_concentration;
        r = 0.0;
    } else {
        // Gradient from green to red
        g = 2.0 - 2 * normalized_concentration;
        r = 2 * normalized_concentration - 1.0;
        b = 0.0;
    }
}

class SensorSubscriber
{
public:
    // HERE, TAKE CARE OF THE max_concentration. THIS IS RELVANT FOR THE NORMALIZATION
    SensorSubscriber()
        : max_concentration(1.0)
    {
        subPosition.subscribe(nh, "/state_estimator/pose_in_odom", 1000);
        subConcentration.subscribe(nh, "sensor_data_transmitter", 1000);
        
        sync.reset(new message_filters::Synchronizer<MySyncPolicy>(MySyncPolicy(10), subPosition, subConcentration));
        sync->registerCallback(boost::bind(&SensorSubscriber::syncCallback, this, _1, _2));

        pub = nh.advertise<gas_sensing::ConcentrationWithHeader>("gas_concentration_transmitter", 1000);
        marker_pub = nh.advertise<visualization_msgs::Marker>("concentration_marker", 1);
    }
private:

    int marker_id = 0; // Add this line to keep track of marker IDs
    int counter = 0;

    float max_concentration;
    void syncCallback(const geometry_msgs::PoseWithCovarianceStampedConstPtr& pose, const esp32_ros::FloatWithHeaderConstPtr& concentration)
    {
        lastPose = pose;
        lastConcentration = concentration;
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
            float concentration = lastConcentration->data;

            gas_sensing::ConcentrationWithHeader transmitted_gas_concentration;

            // Prepare the message to be sent
            transmitted_gas_concentration.pose.pose.position.x = x;
            transmitted_gas_concentration.pose.pose.position.y = y;
            transmitted_gas_concentration.pose.pose.position.z = z;
            transmitted_gas_concentration.pose.header.stamp = lastPose->header.stamp;
            transmitted_gas_concentration.pose.header.frame_id = "odom";
            
            // Note: this topic will only send the latest concentration, not the history of concentrations. Storing concentrations will be done by the planning node.
            transmitted_gas_concentration.concentration = concentration;

            transmitted_gas_concentration.header.stamp = lastPose->header.stamp;
            transmitted_gas_concentration.header.frame_id = "odom";

            // Normalize the concentration to be used as the scale of the marker (max_concentration is hardcoded for now, but it should be a parameter of the node)
            if (concentration > max_concentration) {
                max_concentration = concentration;
            }
            float normalized_concentration = concentration/max_concentration;
            float r, g, b;
            concentration_to_color(normalized_concentration, r, g, b);

            visualization_msgs::Marker marker;
            marker.header.frame_id = "odom";
            marker.header.stamp = lastPose->header.stamp;
            marker.ns = "gas_concentration";
            marker.id = marker_id;
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
            marker.color.r = r;
            marker.color.g = g;
            marker.color.b = b;

            pub.publish(transmitted_gas_concentration);
            marker_pub.publish(marker);

            if (counter % 100 == 0) {
                marker_pub.publish(marker);
                marker_id++;
            }
            counter++;

            if (counter == 1000) {
                counter = 0;
                marker_id = 0;
            }
        }
        
    }

    ros::NodeHandle nh;
    message_filters::Subscriber<geometry_msgs::PoseWithCovarianceStamped> subPosition;
    message_filters::Subscriber<esp32_ros::FloatWithHeader> subConcentration;
    boost::shared_ptr<message_filters::Synchronizer<MySyncPolicy>> sync;
    ros::Publisher pub;
    ros::Publisher marker_pub;

    geometry_msgs::PoseWithCovarianceStampedConstPtr lastPose;
    esp32_ros::FloatWithHeaderConstPtr lastConcentration;
};

int main(int argc, char **argv)
{
    //Initialize ros and create a node handle
    ros::init(argc, argv, "sensor_subscriber");

    //Create an instance of the SensorFaker class.
    SensorSubscriber sensor_subscriber;

    ros::spin();

    return 0;
}