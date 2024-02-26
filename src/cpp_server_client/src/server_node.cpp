//
// Created by emile on 23/05/23.
//

#include "rclcpp/rclcpp.hpp"
#include <memory>
#include "cpp_server_client/srv/practice_srv.hpp"
#include <algorithm>

void accumulate_sum_callback(std::shared_ptr<cpp_server_client::srv::PracticeSrv::Request> request,
         std::shared_ptr<cpp_server_client::srv::PracticeSrv::Response> response) {
    response->cumulative_sum = std::accumulate(request->num_vector.begin(), request->num_vector.end(), (long)0);
    // 累積和を返す
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request: Vec = {");
    std::for_each(request->num_vector.begin(), request->num_vector.end(), [](const auto& tmp){
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "   %ld", tmp);
    });
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "}");

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", (long int) response->cumulative_sum);
}  // Serverのcallbackを定義


int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("practice_server");  // nodeを作成

    rclcpp::Service<cpp_server_client::srv::PracticeSrv>::SharedPtr service =
            node->create_service<cpp_server_client::srv::PracticeSrv>("practice_service", &accumulate_sum_callback);
    // Serviceを作成
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to practice_server.");

    rclcpp::spin(node);
    rclcpp::shutdown();
}
