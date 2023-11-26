#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"


using namespace std::chrono_literals;  // 500msとか書けるようにするため

class PublisherNode : public rclcpp::Node {
public:
    PublisherNode() : Node("publisher_node") {  // rclcpp::Nodeを継承してpublisher_nodeというNodeを作成

        //publisherの作成：第1引数の文字列はトピック名、第2引数の数値はQoS
        //<std_msgs::msg::String> でトピックのデータ型を指定
        publisher_ = this->create_publisher<std_msgs::msg::String>("practice_topic", 10);

        // messageをpublish(送信)するcallback関数
        auto publish_msg_callback = [this]() -> void {
            auto message = std_msgs::msg::String();
            message.data = "Hello world";  //値の代入

            this->publisher_->publish(message);  // publishする
        }; 
        timer_ = this->create_wall_timer(500ms, publish_msg_callback);  // 500msに一度callbackが呼ばれる
    }

private:
    // 上記の動作に必要なprivateメンバ
    //publicで作成したメンバについて書く
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;  //トピックのデータ型を併記
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PublisherNode>());  //クラスを実体化し、ノードを作る
    rclcpp::shutdown();
    return 0;
}


