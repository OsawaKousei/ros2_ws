#pragma once
#include <rclcpp/allocator/allocator_common.hpp>
#include "behaviortree_cpp/behavior_tree.h"
#include "behaviortree_cpp/bt_factory.h"
#include "bt_sample/srv/service_bt.hpp"
#include "test_action_client.hpp"
#include "test_client.hpp"
#include "test_pubsub.hpp"

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
            test_client::send_request(&res);

            std::cout << "res: " << res << std::endl;
            
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
            
            return NodeStatus::SUCCESS;
        }

        void onHalted() override {
            std::cout << "interrupt action client test" << std::endl;
        }

    private:
        int res;
    };

    class PubSubTest : public StatefulActionNode {
    public:
        PubSubTest(const std::string& name) : StatefulActionNode(name,{}){ }

        bool initialized_frag = false;

        // ノードが呼び出されると一度だけ実行される
        NodeStatus onStart() override {
            std::cout << "call action pubsub test" << std::endl;
            return NodeStatus::RUNNING;
        }
        
        // Running状態のときに実行される
        NodeStatus onRunning() override {
            
            return NodeStatus::SUCCESS;
        }

        void onHalted() override {
            std::cout << "interrupt action pubsub test" << std::endl;
        }

    private:
        int res;
    };
}