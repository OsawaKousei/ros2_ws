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
        publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("dist_corner", 10);

        //scanの最遠点を取得し、その位置にマーカーを表示する
        auto topic_callback = [this](const sensor_msgs::msg::LaserScan &msg) -> void {

            double max_range_num = 0;
            for(int i = 0; i < msg.ranges.size(); i++){
                if(msg.ranges[i] > msg.ranges[max_range_num]){
                    max_range_num = i;
                }
            }

            double angle = msg.angle_min + msg.angle_increment * max_range_num;
            double range = msg.ranges[max_range_num];

            auto message = visualization_msgs::msg::Marker();

            message.header.frame_id = "base_link";
            message.header.stamp = this->now();
            message.ns = "corner";
            message.id = 2;

            VizMaker::std_cube_setter(&message);

            Coordinate::polar_to_xy(range,angle,corner[0],corner[1]);
            message.pose.position.x = corner[0];
            message.pose.position.y = corner[1];

            message.color.r = 1.0;
            message.color.g = 0.0;
            message.color.b = 0.0;
            message.color.a = 1.0;

            this->publisher_->publish(message);
        }; 

        auto timer_callback = [this]() -> void {
        }; 

        //サブスクリプションの作成<メッセージ型>(topic名,qos,コールバック関数)
        subscription_ = this->create_subscription<sensor_msgs::msg::LaserScan>("filtered_scan", 10, topic_callback);
        timer_ = this->create_wall_timer(500ms, timer_callback); 
    }
private:
    double corner[2] {0,0};

    int count = 0;

    // 上記の動作に必要なprivateメンバ
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr subscription_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr publisher_;
    std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ScanEdgeNode>());
    rclcpp::shutdown();
    return 0;
}