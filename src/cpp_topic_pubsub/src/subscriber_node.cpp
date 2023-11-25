#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class SubscriberNode : public rclcpp::Node {
public:
    SubscriberNode() : Node("subscriber_node") {  // rclcpp::Nodeを継承してsubscriber_nodeというNodeを作成
        // topicにメッセージが送られてきた時に呼び出されるcallback
        //型名の代わりに auto を使って、変数の型を初期化子から推論
        auto topic_callback = [this](const std_msgs::msg::String &msg) -> void {
            //rclcppの標準出力
            //%sはchar(配列)型の変換指定子であることに注意
            RCLCPP_INFO(this->get_logger(), "catch:%s", msg.data.c_str());
        }; 

        //subscliberの作成：第1引数の文字列はトピック名、第2引数の数値はQoS、第３引数にコールバック関数を指定
        //<std_msgs::msg::String> でトピックのデータ型を指定
        subscription_ = this->create_subscription<std_msgs::msg::String>
                ("practice_topic", 10, topic_callback);
    }
private:
    // 上記の動作に必要なprivateメンバ
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SubscriberNode>());
    rclcpp::shutdown();
    return 0;
}

