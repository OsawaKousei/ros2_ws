#include "rclcpp/rclcpp.hpp"
#include "bt_sample/srv/service_bt.hpp"

using namespace std::chrono_literals;
using msg = bt_sample::srv::ServiceBt;

class ServerBt : public rclcpp::Node{
    public:
    ServerBt() : Node("server_bt"){
        auto service_callback = [this](const std::shared_ptr<msg::Request> request, std::shared_ptr<msg::Response> response) -> void{
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "get request %d", request->req);
            response->res = request->req;
        };
        srv = create_service<msg>("server_bt", service_callback);
    }
    private:
    rclcpp::Service<msg>::SharedPtr srv;

};

int main(int argc, char **argv){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ServerBt>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}