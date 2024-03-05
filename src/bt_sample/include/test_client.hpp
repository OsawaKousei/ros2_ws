#pragma once
#include "rclcpp/rclcpp.hpp"
#include "bt_sample/srv/service_bt.hpp"

using namespace std::chrono_literals;
using srv = bt_sample::srv::ServiceBt;

class TestClient : public rclcpp::Node{
    public:

        TestClient(const rclcpp::NodeOptions & options = rclcpp::NodeOptions()) : Node("test_client",options){
                using namespace std::placeholders;

                this->client_ptr_ = this->create_client<srv>("server_bt");

                if (!this->client_ptr_->wait_for_service()) {
                RCLCPP_ERROR(this->get_logger(), "Service server not available after waiting");
                rclcpp::shutdown();
                }
        }

        void execute(int *result, std::shared_ptr<TestClient> test_client)
        {   
            // Requestを作成
            auto request = std::make_shared<srv::Request>();

            // Serviceを探索
            while(!client_ptr_->wait_for_service(1s)){
                    if(!rclcpp::ok()){
                        break;
                    }
                    std::cout << "call_text service not available" << std::endl;

                }

            auto responce = client_ptr_->async_send_request(request);  // ServerにRequestを送信

            std::cout << "send request" << std::endl;

            if (rclcpp::spin_until_future_complete(test_client, responce) == rclcpp::FutureReturnCode::SUCCESS) {  // Responseを待つ
                *result = responce.get()->res;
                rclcpp::shutdown(); 
            } else {
                std::cout << "request failed" << std::endl;
                rclcpp::shutdown(); 
            }
        }

    private:
        rclcpp::Client<srv>::SharedPtr client_ptr_;
};

