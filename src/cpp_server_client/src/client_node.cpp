//
// Created by emile on 23/05/23.
//

#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <memory>
#include "cpp_server_client/srv/practice_srv.hpp"
#include <algorithm>
#include <string>

using namespace std::chrono_literals;

//argcはこれから与えられる引数の数を示し、argvはコマンドライン引数
int main(int argc, char **argv) {
    rclcpp::init(argc, argv);

    if (argc <= 1) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: input x1 x2 .... xn");
        return 1;
    }

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("practice_client");
    rclcpp::Client<cpp_server_client::srv::PracticeSrv>::SharedPtr client =
            node->create_client<cpp_server_client::srv::PracticeSrv>("practice_service");

    // Requestを作成
    auto request = std::make_shared<cpp_server_client::srv::PracticeSrv::Request>();
    std::vector<std::string> input_vec(argv+1, argv + argc);
    std::transform(input_vec.begin(), input_vec.end(), std::back_inserter(request->num_vector),
                   [](auto tmp){ return std::stol(tmp);});

    // Serviceを探索
    while (!client->wait_for_service(1s)) {  // wait_for_serviceはServiceが存在するか検索 (1sでタイムアウト)してる。
        if (!rclcpp::ok()) {
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
            return 0;
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");  // serviceが見つからない場合
    }

    auto result = client->async_send_request(request);  // ServerにRequestを送信
    if (rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS) {  // Responseを待つ
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sum: %ld", result.get()->cumulative_sum);
    } else {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service add_two_ints");
    }

    rclcpp::shutdown();
    return 0;
}
