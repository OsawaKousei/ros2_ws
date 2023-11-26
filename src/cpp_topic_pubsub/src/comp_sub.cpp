#include <chrono> //計測用，xxmsという書き方ができるようにする
#include <functional> //ラムダ式などを使えるようにする
#include <memory> //メモリを扱えるようにする
#include <string>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "rclcpp_components/register_node_macro.hpp" //コンポーネントを使えるようにする
//通常はincludeしたROSライブラリ（rclcppとstd_msgs)をpackage.xmlに追加する。
//例：  <depend>rclcpp</depend>

namespace cpp_topic_pubsub{

class CompSub : public rclcpp::Node{ //rclcpp::Nodeを継承してMinimalPubSubクラスを作成
    public:
    CompSub(const rclcpp::NodeOptions& options) : Node("comp_sub", options){ //Node関数をオーバーライド
        auto topic_callback = [this](const std_msgs::msg::String& msg) -> void{
            //普通にサブスクライバーのcallback関数
            RCLCPP_INFO(this->get_logger(), "I heard:%s", msg.data.c_str());
        };

        rclcpp::QoS qos(rclcpp::KeepLast(10));
        //thisはpythonでいうところのselfのようなもの
        subscription_ = this->create_subscription<std_msgs::msg::String>("topic", qos, topic_callback);
    }
    private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};
}
RCLCPP_COMPONENTS_REGISTER_NODE(cpp_topic_pubsub::CompSub)