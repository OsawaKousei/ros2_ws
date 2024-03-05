#pragma once
#include "rclcpp/rclcpp.hpp"
#include "bt_sample/srv/service_bt.hpp"

using namespace std::chrono_literals;
using msg = bt_sample::srv::ServiceBt;

namespace test_client{

void send_request(int *result){
    rclcpp::init(0, nullptr);
    
    std::string res;

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("client_bt");
    rclcpp::Client<msg>::SharedPtr client =
            node->create_client<msg>("server_bt");

    // Requestを作成
    auto request = std::make_shared<msg::Request>();

    // Serviceを探索
    while(!client->wait_for_service(1s)){
            if(!rclcpp::ok()){
                break;
            }
            std::cout << "call_text service not available" << std::endl;

        }

    auto responce = client->async_send_request(request);  // ServerにRequestを送信

    std::cout << "send request" << std::endl;

    if (rclcpp::spin_until_future_complete(node, responce) == rclcpp::FutureReturnCode::SUCCESS) {  // Responseを待つ
        *result = responce.get()->res;
        rclcpp::shutdown(); 
    } else {
        std::cout << "request failed" << std::endl;
        rclcpp::shutdown(); 
    }
}
}
