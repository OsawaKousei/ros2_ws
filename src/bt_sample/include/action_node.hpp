#pragma once
#include <rclcpp/allocator/allocator_common.hpp>
#include "behaviortree_cpp/behavior_tree.h"
#include "behaviortree_cpp/bt_factory.h"
#include "bt_sample/srv/service_bt.hpp"
#include "test_action_client.hpp"
#include "test_client.hpp"
#include "test_topic.hpp"

using namespace BT;

namespace MyActionNodes{
    
    class ClientTest : public StatefulActionNode {
    public:
        ClientTest(const std::string& name) : StatefulActionNode(name,{}){ }

        bool initialized_frag = false;

        // ノードが呼び出されると一度だけ実行される
        NodeStatus onStart() override {
            std::cout << "call client test" << std::endl;
            return NodeStatus::RUNNING;
        }
        
        // Running状態のときに実行される
        NodeStatus onRunning() override {
            rclcpp::init(0, nullptr);
            std::shared_ptr<TestClient> test_client = std::make_shared<TestClient>();
            test_client.get()->execute(&res, test_client);

            std::cout << "service res: " << res << std::endl;
            
            return NodeStatus::SUCCESS;
        }

        void onHalted() override {
            std::cout << "interrupt client test" << std::endl;
        }

    private:
        int res;
    };

    class ActionClientTest : public StatefulActionNode {
    public:
        ActionClientTest(const std::string& name) : StatefulActionNode(name,{}){ }

        bool initialized_frag = false;

        // ノードが呼び出されると一度だけ実行される
        NodeStatus onStart() override {
            std::cout << "call action client test" << std::endl;
            return NodeStatus::RUNNING;
        }
        
        // Running状態のときに実行される
        NodeStatus onRunning() override {

            rclcpp::init(0, nullptr);
            std::shared_ptr<TestActionClient> test_action_client = std::make_shared<TestActionClient>();
            test_action_client.get()->execute(&res, test_action_client);

            std::cout << "action res: " << res << std::endl;
            
            return NodeStatus::SUCCESS;
        }

        void onHalted() override {
            std::cout << "interrupt action client test" << std::endl;
        }

    private:
        int res;
    };

    class TopicTest : public StatefulActionNode {
    public:
        TopicTest(const std::string& name) : StatefulActionNode(name,{}){ }

        bool initialized_frag = false;

        // ノードが呼び出されると一度だけ実行される
        NodeStatus onStart() override {
            std::cout << "call topic test" << std::endl;
            return NodeStatus::RUNNING;
        }
        
        // Running状態のときに実行される
        NodeStatus onRunning() override {
            rclcpp::init(0, nullptr);
            std::shared_ptr<TestTopic> topic_test = std::make_shared<TestTopic>();
            topic_test.get()->execute(&res, topic_test);

            return NodeStatus::SUCCESS;
        }

        void onHalted() override {
            std::cout << "interrupt action topic test" << std::endl;
        }

    private:
        int res;
    };
}