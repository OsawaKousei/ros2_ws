#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

class TeleopNode : public rclcpp::Node {
public:
    TeleopNode() : Node("teleop_node") {
        
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("teleop", 10);

        auto timer_callback = [this]() -> void {
            auto message = geometry_msgs::msg::Twist();
            message.linear.x = 0;
            message.angular.z = 0;

            this->publisher_->publish(message);
        }; 

        auto topic_callback = [this](const std_msgs::msg::String &msg) -> void {
            RCLCPP_INFO(this->get_logger(), "catch:%s\r\n", msg.data.c_str());
        }; 

        subscription_ = this->create_subscription<std_msgs::msg::String>
                ("feedBack_topic", 10, topic_callback);
    }
private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TeleopNode>());
    rclcpp::shutdown();
    return 0;
}