#pragma once
#include "rclcpp/rclcpp.hpp"
#include "bt_sample/msg/topic_bt.hpp"

using namespace std::chrono_literals;
using msg = bt_sample::msg::TopicBt;

class TestTopic : public rclcpp::Node{
    public:

        TestTopic(const rclcpp::NodeOptions & options = rclcpp::NodeOptions()) : Node("test_client",options){
                using namespace std::placeholders;
            publisher_ = this->create_publisher<msg>("topic_bt1", 10);
       
            auto topic_callback = [this](const msg &msgs) -> void {
                RCLCPP_INFO(this->get_logger(), "I heard: '%d'", msgs.msg);

                //条件を満たしたら終了処理を行う
                if(msgs.msg == 10){
                    *res = 10;
                    rclcpp::shutdown();
                }
            }; 

            auto publish_msg_callback = [this]() -> void {
                auto message = msg(); 
                message.msg = 1;
                this->publisher_->publish(message); 
            }; 

            timer_ = this->create_wall_timer(500ms, publish_msg_callback);
            subscription_ = this->create_subscription<msg>("topic_bt2", 10, topic_callback);
        }

        void start(int *result, std::shared_ptr<TestTopic> topic_test)
        {   
            this->res = result;

            std::cout << "execute called" << std::endl;

            rclcpp::spin(topic_test);
        }

    private:
        rclcpp::Subscription<msg>::SharedPtr subscription_;
        rclcpp::Publisher<msg>::SharedPtr publisher_;
        rclcpp::TimerBase::SharedPtr timer_;

        int *res;
};

