#include <functional>
#include <memory>
#include <thread>
#include <unistd.h>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "bt_sample/action/action_bt.hpp"

class ActionServerBt : public rclcpp::Node {
public:
    using msg = bt_sample::action::ActionBt;
    using GoalHandle = rclcpp_action::ServerGoalHandle<msg>;

    explicit ActionServerBt(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
    : Node("action_server_bt", options)
    {
        using namespace std::placeholders;

        this->action_server_ = rclcpp_action::create_server<msg>(
        this,
        "test_action_server",
        std::bind(&ActionServerBt::handle_goal, this, _1, _2),
        std::bind(&ActionServerBt::handle_cancel, this, _1),
        std::bind(&ActionServerBt::handle_accepted, this, _1));
    }
private:
    rclcpp_action::Server<msg>::SharedPtr action_server_;
   
    //全てのゴールをアクセプトするだけのゴールハンドラー
    rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const msg::Goal> goal)
  {
    RCLCPP_INFO(this->get_logger(), "Received goal request");
    (void)uuid;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  //ゴールのキャンセルをアクセプトするだけのキャンセルハンドラー
  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandle> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;
  }


  void handle_accepted(const std::shared_ptr<GoalHandle> goal_handle)
  {
    using namespace std::placeholders;

    // this needs to return quickly to avoid blocking the executor, so spin up a new thread
    std::thread{std::bind(&ActionServerBt::execute, this, _1), goal_handle}.detach();
  }

  void execute(const std::shared_ptr<GoalHandle> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Executing goal");

    int goal = goal_handle.get()->get_goal()->goal;

    auto feedback = std::make_shared<msg::Feedback>();
    
    feedback->feedback = goal;

    goal_handle->publish_feedback(feedback);
    RCLCPP_INFO(this->get_logger(), "Publish feedback");

    RCLCPP_INFO(this->get_logger(), "sedd result");
    send_success(goal_handle);
  }

  void send_success(const std::shared_ptr<GoalHandle> goal_handle){
    auto result = std::make_shared<msg::Result>();

    goal_handle->succeed(result);
  }

    
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ActionServerBt>());
    rclcpp::shutdown();
    return 0;
}
