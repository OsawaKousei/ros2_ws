#include <chrono> //計測用，xxmsという書き方ができるようにする
#include <functional> //ラムダ式などを使えるようにする
#include <memory> //メモリを扱えるようにする
#include <string>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "rclcpp_components/register_node_macro.hpp" //コンポーネントを使えるようにする

using namespace std::chrono_literals;
// パッケージ名の名前空間を宣言しておくとわかりやすくなる。
namespace cpp_topic_pubsub{

class CompPub : public rclcpp::Node{
//rclcpp::Nodeを継承してMinimalPubSubクラスを作成
    public:
    //コンストラクタ引数をNodeOptionsに変更
    CompPub(const rclcpp::NodeOptions& options) : Node("comp_pub", options){
    //Node関数をオーバーライド
        rclcpp::QoS qos(rclcpp::KeepLast(10));
        
        auto timer_callback = [this]() -> void{
            //ROS1で言うところのwhileループの中身
            auto message = std_msgs::msg::String();
            message.data = "Hello world from ros2";
            publisher_->publish(message);
        };
               
        publisher_ = this->create_publisher<std_msgs::msg::String>("topic", qos);
        //この例では500msごとにtimer_callback関数を呼び出すタイマーを定義
        timer_ = this->create_wall_timer(500ms, timer_callback);
    }
    private:
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
};

}
RCLCPP_COMPONENTS_REGISTER_NODE(cpp_topic_pubsub::CompPub)