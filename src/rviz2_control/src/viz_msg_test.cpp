#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "../include/viz_maker.hpp"

using namespace std::chrono_literals;  // 500msとか書けるようにするため

class VizMsgTest : public rclcpp::Node {
public:
    int count = 0;
    
    VizMsgTest() : Node("viz_msg_test") {  // rclcpp::Nodeを継承してpublisher_nodeというNodeを作成

        //publisherの作成：第1引数の文字列はトピック名、第2引数の数値はQoS
        //<std_msgs::msg::String> でトピックのデータ型を指定
        publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("practice_topic", 10);

        // messageをpublish(送信)するcallback関数
        auto publish_msg_callback = [this]() -> void {
            auto message = visualization_msgs::msg::Marker();

            message.header.frame_id = "base_link";
            message.header.stamp = this->now();
            message.ns = "basic_shapes";
            message.id = 0;

            VizMaker::std_cube_setter(&message);

            message.pose.position.x = (double)count;

            this->publisher_->publish(message); 

            count++;
        }; 
        timer_ = this->create_wall_timer(500ms, publish_msg_callback);  // 500msに一度callbackが呼ばれる
    }

private:
    // 上記の動作に必要なprivateメンバ
    //publicで作成したメンバについて書く
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr publisher_;  //トピックのデータ型を併記
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<VizMsgTest>());  //クラスを実体化し、ノードを作る
    rclcpp::shutdown();
    return 0;
}


