#include "visualization_msgs/msg/marker.hpp"
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/point.hpp"

class VizMaker{
    public:
    VizMaker(){
        
    }

    static void std_cube_setter(visualization_msgs::msg::Marker *message){
        message->type = visualization_msgs::msg::Marker::CUBE;
        message->action = visualization_msgs::msg::Marker::ADD;
        message->lifetime = rclcpp::Duration(0,0);

        message->scale.x = 0.05;
        message->scale.y = 0.05;
        message->scale.z = 0.01;

        message->pose.position.x = 0.0;
        message->pose.position.y = 0.0;
        message->pose.position.z = 0.0;

        message->pose.orientation.x = 0.0;
        message->pose.orientation.y = 0.0;
        message->pose.orientation.z = 0.0;
        message->pose.orientation.w = 1.0;

        message->color.r = 0.0f;
        message->color.g = 1.0f;
        message->color.b = 0.0f;
        message->color.a = 1.0;
    }

    static void std_line_setter(visualization_msgs::msg::Marker *message
                                ,geometry_msgs::msg::Point start_point
                                ,geometry_msgs::msg::Point end_point     ){

        message->type = visualization_msgs::msg::Marker::LINE_STRIP;
        message->action = visualization_msgs::msg::Marker::ADD;
        message->lifetime = rclcpp::Duration(0,0);

        message->scale.x = 0.02;

        message->color.r = 0.0f;
        message->color.g = 1.0f;
        message->color.b = 0.0f;
        message->color.a = 1.0;

        message->points.push_back(start_point);
        message->points.push_back(end_point);
    }
    private:
    
};