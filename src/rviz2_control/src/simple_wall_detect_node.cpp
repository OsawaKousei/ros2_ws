#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "../include/coordinate.hpp"
#include "../include/viz_maker.hpp"
#include "../include/statistics.hpp"
#include "tf2_msgs/msg/tf_message.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2_ros/transform_broadcaster.h"
#include "tf2/LinearMath/Quaternion.h"

using namespace std::chrono_literals;

class ScanFilterNode : public rclcpp::Node {
public:
    ScanFilterNode() : Node("scan_filter_node") {//nodeを作成
        //publishreの作成<メッセージ型>(topic名,qos)
        publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("simple_wall", 10);

        //
        auto topic_callback = [this](const sensor_msgs::msg::LaserScan &msg) -> void {

            vector<float> x;
            vector<float> y;

            for(int i = 0; i < msg.ranges.size(); i++){
                x.push_back(msg.ranges[i] * cos(msg.angle_min + msg.angle_increment * i));
                y.push_back(msg.ranges[i] * sin(msg.angle_min + msg.angle_increment * i));
            }

            LeastSquaresMethod data1;
            coef_x = data1.coef_x(x, y, x.size());
            coef_y = data1.coef_y(x, y, x.size());
            constant = data1.constant(x, y, x.size());
         
            auto message = visualization_msgs::msg::Marker();

            message.header.frame_id = "base_link";
            message.header.stamp = this->now();
            message.ns = "simple_wall";
            message.id = 10;

            //各端から最も近い近似直線上の点を表示する直線の端点とする
            geometry_msgs::msg::Point start_point;
            geometry_msgs::msg::Point end_point;

            double angle1 = msg.angle_min;
            double range1 = msg.ranges[0];
            double angle2 = msg.angle_max;
            double range2 = msg.ranges[msg.ranges.size()-1];

            Coordinate::polar_to_xy(range1,angle1,edge1[0],edge1[1]);
            start_point.x = (coef_y * coef_y * edge1[0] - coef_x * coef_y * edge1[1] - coef_x * constant) / (coef_x * coef_x + coef_y * coef_y);
            start_point.y = (coef_x * coef_x * edge1[1] - coef_x * coef_y * edge1[0] - coef_y * constant) / (coef_x * coef_x + coef_y * coef_y);

            Coordinate::polar_to_xy(range2,angle2,edge2[0],edge2[1]);
            end_point.x = (coef_y * coef_y * edge2[0] - coef_x * coef_y * edge2[1] - coef_x * constant) / (coef_x * coef_x + coef_y * coef_y);
            end_point.y = (coef_x * coef_x * edge2[1] - coef_x * coef_y * edge2[0] - coef_y * constant) / (coef_x * coef_x + coef_y * coef_y);
            
            VizMaker::std_line_setter(&message, 
                                        start_point, 
                                        end_point);

            this->publisher_->publish(message); 
        }; 
        
        auto timer_callback = [this]() -> void {
        }; 


        //サブスクリプションの作成<メッセージ型>(topic名,qos,コールバック関数)
        subscription_ = this->create_subscription<sensor_msgs::msg::LaserScan>("filtered_scan", 10, topic_callback);
        timer_ = this->create_wall_timer(500ms, timer_callback); 
    }
private:
    double pos_x = 0.0;
    double pos_y = 0.0;

    double min_x = 0.0;
    double max_x = 0.0;
    double coef_x = 0.0;
    double coef_y = 0.0;
    double constant = 0.0;

    double edge1[2] {0,0};
    double edge2[2] = {0,0};

    // 上記の動作に必要なprivateメンバ
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr subscription_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr publisher_;
    std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ScanFilterNode>());
    rclcpp::shutdown();
    return 0;
}