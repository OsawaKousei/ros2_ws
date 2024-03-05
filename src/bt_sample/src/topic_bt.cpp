#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "bt_sample/msg/topic_bt.hpp"

using namespace std::chrono_literals;
using msg = bt_sample::msg::TopicBt;

class PubsubNode : public rclcpp::Node {
public:

    PubsubNode() : Node("pubsub_node") {
        publisher_ = this->create_publisher<msg>("topic_bt2", 10);
       
        auto topic_callback = [this](const msg &msgs) -> void {
            auto message = msg();
            message.msg = count;
            this->publisher_->publish(message);

            count ++;
        }; 

        subscription_ = this->create_subscription<msg>("topic_bt1", 10, topic_callback);
    }
private:
    // 上記の動作に必要なprivateメンバ
    rclcpp::Subscription<msg>::SharedPtr subscription_;
    rclcpp::Publisher<msg>::SharedPtr publisher_;

    int count;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PubsubNode>());
    rclcpp::shutdown();
    return 0;
}