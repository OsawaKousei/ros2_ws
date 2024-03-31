#pragma once
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "bt_sample/action/action_bt.hpp"

using namespace std::chrono_literals;

class TestActionClient : public rclcpp::Node{
    public:

        using msg = bt_sample::action::ActionBt;
        using GoalHandle = rclcpp_action::ClientGoalHandle<msg>;//使用するゴールハンドルの名前空間

        TestActionClient(const rclcpp::NodeOptions & options = rclcpp::NodeOptions()) : Node("test_action_client",options){
                using namespace std::placeholders;

                this->client_ptr_ = rclcpp_action::create_client<msg>(this,"test_action_server");

                if (!this->client_ptr_->wait_for_action_server()) {
                RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
                rclcpp::shutdown();
                }

                //nodeがspinされると１度だけ以下が実行される
                //ゴールを作成して送信
                auto goal_msg = msg::Goal();
                goal_msg.goal = 1;
                send_goal(goal_msg);
        }

        void start(int *result, std::shared_ptr<TestActionClient> test_action_client)
        {
            this->res = result;

            std::cout << "execute called" << std::endl;

            rclcpp::spin(test_action_client);            
        }

        void send_goal(msg::Goal goal_msg){
                using namespace std::placeholders;

                RCLCPP_INFO(this->get_logger(), "Sending goal");

                auto send_goal_options = rclcpp_action::Client<msg>::SendGoalOptions();

                send_goal_options.goal_response_callback =
                std::bind(&TestActionClient::goal_response_callback, this, _1);
                send_goal_options.feedback_callback =
                std::bind(&TestActionClient::feedback_callback, this, _1, _2);
                send_goal_options.result_callback =
                std::bind(&TestActionClient::result_callback, this, _1);

                this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
        }

    private:
        rclcpp_action::Client<msg>::SharedPtr client_ptr_;
        int *res;

        void goal_response_callback(const GoalHandle::SharedPtr & goal_handle)
        {
        if (!goal_handle) {
        RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
        } else {
        RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
        }
        }
        
        void feedback_callback(
        GoalHandle::SharedPtr,
        const std::shared_ptr<const msg::Feedback> feedback)
        {
        RCLCPP_INFO(this->get_logger(), "feed back received: %d", feedback->feedback);
        }

        void result_callback(const GoalHandle::WrappedResult & result)
        {
            switch (result.code) {
            case rclcpp_action::ResultCode::SUCCEEDED:
                    RCLCPP_INFO(this->get_logger(), "Goal successed");
                    //結果を格納して終了処理
                    *res = result.result->result;
                    rclcpp::shutdown();
                    return;
            case rclcpp_action::ResultCode::ABORTED:
                    RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
                    return;
            case rclcpp_action::ResultCode::CANCELED:
                    RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
                    return;
            default:
                    RCLCPP_ERROR(this->get_logger(), "Unknown result code");
                    return;
            }
        }
};