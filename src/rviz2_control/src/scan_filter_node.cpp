#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "../include/coordinate.hpp"
#include "../include/viz_maker.hpp"
#include "tf2_msgs/msg/tf_message.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2_ros/transform_broadcaster.h"
#include "tf2/LinearMath/Quaternion.h"

using namespace std::chrono_literals;

class ScanFilterNode : public rclcpp::Node {
public:
    ScanFilterNode() : Node("scan_filter_node") {//nodeを作成
        //publishreの作成<メッセージ型>(topic名,qos)
        publisher_ = this->create_publisher<sensor_msgs::msg::LaserScan>("filtered_scan", 10);

        //
        auto topic_callback = [this](const sensor_msgs::msg::LaserScan &msg) -> void {
            //scanメッセージを変更
            message = msg;
            message.angle_max = max_angle;
            message.angle_min = min_angle;

            //scanデータを変更
            int start_index = 0;
            int end_index = 0;

            start_index = (int)((min_angle - msg.angle_min) / msg.angle_increment);
            end_index = (int)((max_angle - msg.angle_min) / msg.angle_increment);

            int size = end_index - start_index + 1;

            message.ranges.resize(size);
            for(int i = 0; i < size; i++){
                message.ranges[i] = msg.ranges[start_index + i];
            }
        }; 
        
        //tfをpublishするためのtf_broadcasterを作成
        tf_broadcaster_ =std::make_unique<tf2_ros::TransformBroadcaster>(*this);

        auto tf_publisher = [this]() -> void {
            auto tf = geometry_msgs::msg::TransformStamped();

            tf.header.stamp = this->get_clock()->now();
            tf.header.frame_id = "base_link";
            tf.child_frame_id = "base_scan";

            tf.transform.translation.x = 0;
            tf.transform.translation.y = 0;
            tf.transform.translation.z = 0;

            tf2::Quaternion q;
            q.setRPY(0, 0, 0);

            tf.transform.rotation.x = q.x();
            tf.transform.rotation.y = q.y();
            tf.transform.rotation.z = q.z();
            tf.transform.rotation.w = q.w();

            //<geometry_msgs::msg::TransformStamped>をtfに変換してpublish
            tf_broadcaster_->sendTransform(tf);
        };

        auto timer_callback = [this,tf_publisher]() -> void {
            //scanとscan_edgeを同時にrviz2で表示するためのtfをpublish
            tf_publisher();
            this->publisher_->publish(message);
        }; 


        //サブスクリプションの作成<メッセージ型>(topic名,qos,コールバック関数)
        subscription_ = this->create_subscription<sensor_msgs::msg::LaserScan>("scan", 10, topic_callback);
        timer_ = this->create_wall_timer(500ms, timer_callback); 
        //サブスクリプションの作成<メッセージ型>(topic名,qos,コールバック関数)
        subscription_ = this->create_subscription<sensor_msgs::msg::LaserScan>("scan", 10, topic_callback);
    }
private:
    double min_angle = -0.785;
    double max_angle = 0.785;

    sensor_msgs::msg::LaserScan message = sensor_msgs::msg::LaserScan();

    // 上記の動作に必要なprivateメンバ
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr subscription_;
    rclcpp::Publisher<sensor_msgs::msg::LaserScan>::SharedPtr publisher_;
    std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ScanFilterNode>());
    rclcpp::shutdown();
    return 0;
}