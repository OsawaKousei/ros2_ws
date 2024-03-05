#include "../include/action_node.hpp"
#include "ament_index_cpp/get_package_share_directory.hpp"
#include "iostream"

using namespace MyActionNodes;
using namespace BT;

int main(int argc, char* argv[]){  
  BehaviorTreeFactory factory;
  // action_node.hppで定義したActionNodeクラスを登録
  factory.registerNodeType<ClientTest>("client_test");
  factory.registerNodeType<ActionClientTest>("action_client_test");
  factory.registerNodeType<TopicTest>("topic_test");

  // main_bt.xmlのpathを取得して登録
  std::string package_path = ament_index_cpp::get_package_share_directory("bt_sample");
  factory.registerBehaviorTreeFromFile(package_path + "/config/main_bt.xml");

  // main_bt.xml内のMainBTツリーを作成
  BT::Tree tree = factory.createTree("Main_BT");

  // Tree構造を表示
  printTreeRecursively(tree.rootNode());
  
  NodeStatus status = NodeStatus::RUNNING;
  while(status == NodeStatus::RUNNING){
    status = tree.tickOnce();
  }
  return 0;
}