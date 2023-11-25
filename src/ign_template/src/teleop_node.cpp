#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "rclcpp_components/register_node_macro.hpp"
#include "key_event_nodes/key_hit_event_node.hpp"
#include "key_event_msgs/msg/key_event.hpp"


using namespace std::chrono_literals;

class TeleopNode : public rclcpp::Node {
public:
    TeleopNode(
        const std::string& name_space="", 
        const rclcpp::NodeOptions& options = rclcpp::NodeOptions()
    ) : Node("teleop_node",name_space,options) {
        
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

        sub_ = this->create_subscription<key_event_msgs::msg::KeyEvent>(
        "key_hit_event",
        rclcpp::QoS(10),
        [this](const key_event_msgs::msg::KeyEvent::SharedPtr msg) ->void {
            RCLCPP_INFO(this->get_logger(), "subscriber:key:%c", msg->key);
        }
        );
    }
private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::Subscription<key_event_msgs::msg::KeyEvent>::SharedPtr sub_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);

    rclcpp::executors::SingleThreadedExecutor exec;
    auto node1 = std::make_shared<key_event::KeyHitEventNode>();
    exec.add_node(node1);
    auto node2 = std::make_shared<TeleopNode>();
    exec.add_node(node2);
    exec.spin();

    rclcpp::shutdown();
    return 0;
}