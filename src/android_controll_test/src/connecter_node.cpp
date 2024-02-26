#include <iostream>
#include <functional>
#include <memory>
#include "std_msgs/msg/string.hpp"
#include "rclcpp/rclcpp.hpp"
#include <cstdlib>
#include <cinttypes>
#include <string>
#include "custom_test_msgs/srv/add_three_ints.hpp"
#include "custom_message_unity/msg/custom_unity.hpp"

using namespace std::chrono_literals;
using namespace custom_test_msgs::srv;
using namespace custom_message_unity::msg;

class ConnecterNode : public rclcpp::Node {
public:
    ConnecterNode() : Node("connecter_node") {  // rclcpp::Nodeを継承してsubscriber_nodeというNodeを作成

    //型と名前が一致しなければ通信できない
    client_ = create_client<AddThreeInts>("add_three_ints");
    while (!client_->wait_for_service(1s)) {  // wait_for_serviceはServiceが存在するか検索 (1sでタイムアウト)してる。
        if (!rclcpp::ok()) {
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");  // serviceが見つからない場合
    }

    
    auto topic_callback = [this](const std_msgs::msg::String::SharedPtr msg) -> void {
        RCLCPP_INFO(this->get_logger(),"got message");
        RCLCPP_INFO(this->get_logger(), "%s", msg->data.c_str());
        auto request = std::make_shared<AddThreeInts::Request>();
          request->a = 1;
          request->b = 12;
          request->c = 3;
        auto future_result = client_->async_send_request(request);
    };  // topicにメッセージが送られてきた時に呼び出されるcallback

    subscription_ = this->create_subscription<std_msgs::msg::String>("hello_from_Unity", 10, topic_callback);  // topicをsubscribeする為の設定
    
    }
private:
    // 上記の動作に必要なprivateメンバ
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
    rclcpp::Client<AddThreeInts>::SharedPtr client_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ConnecterNode>());
    rclcpp::shutdown();
    return 0;
}
