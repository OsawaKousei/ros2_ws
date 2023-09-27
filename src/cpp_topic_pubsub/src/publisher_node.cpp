//
// Created by emile on 23/05/23.
//

#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "cpp_topic_pubsub/msg/practice_msg.hpp"  // msgのinclude

using namespace std::chrono_literals;  // 500msとか書けるようにするため

class PublisherNode : public rclcpp::Node {
public:
    PublisherNode() : Node("publisher_node") {  // rclcpp::Nodeを継承してpublisher_nodeというNodeを作成

        //publisherの作成：第1引数の文字列はトピック名、第2引数の数値はQoS
        //<std_msgs::msg::String> でトピックのデータ型を指定
        publisher_ = this->create_publisher<cpp_topic_pubsub::msg::PracticeMsg>("practice_topic", 10);

        // messageをpublish(送信)するcallback関数
        auto publish_msg_callback = [this]() -> void {
            auto message = cpp_topic_pubsub::msg::PracticeMsg();
            message.name = "PortCharlot";  // 6500円のウイスキー (実在)
            message.price = 6500;
            message.product_type = cpp_topic_pubsub::msg::PracticeMsg::PRODUCT_TYPE_WHISKEY;
            // ここまでmsgの代入、msgファイルで作成した変数に値を代入

            this->publisher_->publish(message);  // publishする
        }; 
        timer_ = this->create_wall_timer(500ms, publish_msg_callback);  // 500msに一度callbackが呼ばれる
    }

private:
    // 上記の動作に必要なprivateメンバ
    //publicで作成したメンバについて書く
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<cpp_topic_pubsub::msg::PracticeMsg>::SharedPtr publisher_;  //トピックのデータ型を併記
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PublisherNode>());  //クラスを実体化し、ノードを作る
    rclcpp::shutdown();
    return 0;
}


