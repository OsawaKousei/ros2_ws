#pragma once
#include "rclcpp/rclcpp.hpp"
#include "bt_sample/srv/call_text.hpp"

using namespace std::chrono_literals;

namespace action_ros_node{

void start(std::string buff[]){
    rclcpp::init(0, nullptr);

    std::string res;

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("action_bt_node");
    rclcpp::Client<bt_sample::srv::CallText>::SharedPtr client =
            node->create_client<bt_sample::srv::CallText>("call_text");

    // Requestを作成
    auto request = std::make_shared<bt_sample::srv::CallText::Request>();

    // Serviceを探索
    while(!client->wait_for_service(1s)){
            if(!rclcpp::ok()){
                break;
            }
            std::cout << "call_text service not available" << std::endl;

        }

    auto result = client->async_send_request(request);  // ServerにRequestを送信

    std::cout << "send request" << std::endl;

    if (rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS) {  // Responseを待つ
        std::cout << "catch request" << std::endl;
        res = result.get()->text;
        std::cout << res << std::endl;

        buff[0] = res;
    
        rclcpp::shutdown(); 
    } else {
        std::cout << "request failed" << std::endl;
    }
}
}
