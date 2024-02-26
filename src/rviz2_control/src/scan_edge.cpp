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

class ScanEdgeNode : public rclcpp::Node {
public:
    ScanEdgeNode() : Node("scan_edge") {//nodeを作成
        //publishreの作成<メッセージ型>(topic名,qos)
        publisher1_ = this->create_publisher<visualization_msgs::msg::Marker>("scan_edge1", 10);
        publisher2_ = this->create_publisher<visualization_msgs::msg::Marker>("scan_edge2", 10);

        //scanの端を取得し、その位置にマーカーを表示する
        auto topic_callback = [this](const sensor_msgs::msg::LaserScan &msg) -> void {

            double angle1 = msg.angle_min;
            double range1 = msg.ranges[0];
            double angle2 = msg.angle_max;
            double range2 = msg.ranges[msg.ranges.size()-1];

            auto message1 = visualization_msgs::msg::Marker();

            message1.header.frame_id = "base_link";
            message1.header.stamp = this->now();
            message1.ns = "edge1";
            message1.id = 0;

            VizMaker::std_cube_setter(&message1);

            Coordinate::polar_to_xy(range1,angle1,edge1[0],edge1[1]);
            message1.pose.position.x = edge1[0];
            message1.pose.position.y = edge1[1];

            auto message2 = visualization_msgs::msg::Marker();

            message2.header.frame_id = "base_link";
            message2.header.stamp = this->now();
            message2.ns = "edge2";
            message2.id = 1;

            VizMaker::std_cube_setter(&message2);

            Coordinate::polar_to_xy(range2,angle2,edge2[0],edge2[1]);
            message2.pose.position.x = edge2[0];
            message2.pose.position.y = edge2[1];

            this->publisher2_->publish(message2);
            this->publisher1_->publish(message1);
        }; 

        auto timer_callback = [this]() -> void {
        }; 

        //サブスクリプションの作成<メッセージ型>(topic名,qos,コールバック関数)
        subscription_ = this->create_subscription<sensor_msgs::msg::LaserScan>("filtered_scan", 10, topic_callback);
        timer_ = this->create_wall_timer(500ms, timer_callback); 
    }
private:
    double edge1[2] {0,0};
    double edge2[2] = {0,0};

    int count = 0;

    // 上記の動作に必要なprivateメンバ
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr subscription_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr publisher1_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr publisher2_;
    std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ScanEdgeNode>());
    rclcpp::shutdown();
    return 0;
}