#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class PubsubNode : public rclcpp::Node {
public:
    //必要があればここにpublic変数を宣言

    PubsubNode() : Node("pubsub_node") {//nodeを作成
        //publishreの作成<メッセージ型>(topic名,qos)
        publisher_ = this->create_publisher<std_msgs::msg::String>("practice_topic", 10);

        //timerのコールバック関数、autoは型を推測してくれる
        auto publish_msg_callback = [this]() -> void {
            auto message = std_msgs::msg::String(); //メッセージの作成
            message.data = "Hello world";  //値の代入

            this->publisher_->publish(message);  // publishする
        }; 

        //タイマーの作成(コールバックを呼ぶ頻度,コールバック関数)
        timer_ = this->create_wall_timer(500ms, publish_msg_callback);

        //サブスクリプションのコールバック関数
        auto topic_callback = [this](const std_msgs::msg::String &msg) -> void {
            
            //コンソールにメッセージを表示
            RCLCPP_INFO(this->get_logger(), "catch:%s\r\n", msg.data.c_str());
        }; 

        //サブスクリプションの作成<メッセージ型>(topic名,qos,コールバック関数)
        subscription_ = this->create_subscription<std_msgs::msg::String>("practice_topic", 10, topic_callback);
    }
private:
    // 上記の動作に必要なprivateメンバ
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PubsubNode>());
    rclcpp::shutdown();
    return 0;
}