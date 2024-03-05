#include <memory>
#include <rclcpp/rclcpp.hpp>
#include "comp_pub.cpp"
#include "comp_sub.cpp"

int main(int argc, char * argv[])
{
  //標準出力stdoutのバッファリングを無効化する
  setvbuf(stdout, NULL, _IONBF, BUFSIZ);
  rclcpp::init(argc, argv);

  rclcpp::executors::SingleThreadedExecutor exec; //シングルスレッド
  //rclcpp::executors::MultiThreadedExecutor exec; //マルチスレッド
  auto talker = std::make_shared<cpp_topic_pubsub::CompPub>(rclcpp::NodeOptions());
  auto listener = std::make_shared<cpp_topic_pubsub::CompSub>(rclcpp::NodeOptions());
  exec.add_node(talker);
  exec.add_node(listener);
  exec.spin();
  rclcpp::shutdown();
  return 0;
}