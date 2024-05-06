#include "ros/ros.h" // ROS core library
#include "std_msgs/Float32MultiArray.h" // Message type for the incoming data
#include "esp32_ros/FloatWithHeader.h" // Custom ROS message type for a floating-point number with a header
#include <fstream>
#include <ctime>


// Define a new class for the ROS node
class SensorListener
{
public:
    // Constructor for the class
    SensorListener()
    {
        // Subscribe to the "sensor_data" topic. When a message is received on this topic,
        // the callback function is called. The "1000" is the size of the message queue.
        // "&SensorListener::callback" is a pointer to the callback method.
        // "this" is a pointer to the current instance of the class, which is passed to the callback.
        sub = nh.subscribe("sensor_data", 1000, &SensorListener::callback, this);

        // Advertise the "sensor_data_with_header" topic. This is where the data will be republished with a timestamp.
        pub = nh.advertise<esp32_ros::FloatWithHeader>("sensor_data_transmitter", 1000);
    
        // Open the file
        std::ofstream file;
        file.open("/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/sensor_data/sensor_data.csv", std::ios_base::app); // append instead of overwrite

        // Get the current time
        std::time_t now = std::time(0);
        std::tm* now_tm = std::localtime(&now);
        char time_str[100];
        std::strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", now_tm);

        // Write the current time as a header
        file << "\n" << time_str << "\n";

        file.close();
    
    }

private:
    // Callback function that is called when a message is received on the "sensor_data" topic
    void callback(const std_msgs::Float32MultiArray::ConstPtr& msg)
    {
        // // Print the received data to the console. The data is accessed with "msg->data[0]" and "msg->data[1]".
        // ROS_INFO("Received TVOC value: [%f]", msg->data[0]);
        // ROS_INFO("Received time: [%f]", msg->data[1]);

        // Create a new FloatWithHeader message
        esp32_ros::FloatWithHeader transmitted_data;

        // Set the data field to the temperature
        transmitted_data.data = msg->data[0];

        // Set the timestamp to the current time
        transmitted_data.header.stamp = ros::Time::now();

        // Publish the message
        pub.publish(transmitted_data);

        std::ofstream file;
        ros::Time ros_time = ros::Time::now();
        std::time_t time_t_object = ros_time.toSec();
        std::string time_str = std::ctime(&time_t_object);
        time_str.erase(std::remove(time_str.begin(), time_str.end(), '\n'), time_str.end());
        file.open("/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/sensor_data/sensor_data.csv", std::ios_base::app); // append instead of overwrite
        file << time_str << "," << msg->data[0] << "," << msg->data[2] << "," << msg->data[3] << "\n";
        file.close();
    }

    // NodeHandle is the main access point to communications with the ROS system.
    // The first NodeHandle constructed will fully initialize this node, and the last
    // NodeHandle destructed will close down the node.
    ros::NodeHandle nh;

    // Subscriber object that can listen to messages from a topic
    ros::Subscriber sub;

    // Publisher object that can publish messages to a topic
    ros::Publisher pub;
};

int main(int argc, char **argv)
{
    // Initialize the ROS system and become a node.
    ros::init(argc, argv, "sensor_listener");

    // Create an instance of the SensorListener class.
    SensorListener sensorListener;

    // Enter a loop, pumping callbacks. This will call the callback function whenever a new message arrives.
    ros::spin();

    return 0;
}