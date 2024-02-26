#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "../include/viz_maker.hpp"
#include "geometry_msgs/msg/point.hpp"

using namespace std::chrono_literals;

class ShowLine : public rclcpp::Node {
public:
    float slope = 1.0;
    float intercept = 1.0;
    float min_x = -10.0;
    float max_x = 10.0;
    
    ShowLine() : Node("show_line") {  

        publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("practice_topic", 10);

        auto publish_msg_callback = [this]() -> void {
            auto message = visualization_msgs::msg::Marker();

            message.header.frame_id = "base_link";
            message.header.stamp = this->now();
            message.ns = "basic_shapes";
            message.id = 0;

            geometry_msgs::msg::Point start_point;
            start_point.x = min_x;
            start_point.y = min_x * slope + intercept;
            start_point.z = 0.0;

            geometry_msgs::msg::Point end_point;
            end_point.x = max_x;
            end_point.y = max_x * slope + intercept;
            end_point.z = 0.0;

            VizMaker::std_line_setter(&message, 
                                        start_point, 
                                        end_point);

            this->publisher_->publish(message); 
        }; 
        timer_ = this->create_wall_timer(500ms, publish_msg_callback);  
    }

private:
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr publisher_;  
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ShowLine>());  
    rclcpp::shutdown();
    return 0;
}


