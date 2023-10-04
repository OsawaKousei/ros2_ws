cmake_minimum_required(VERSION 3.8)
project(android_controll_test)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)  
find_package(std_msgs REQUIRED)  
find_package(rosidl_default_generators REQUIRED)  # msgを作るのに必要
find_package(custom_test_msgs REQUIRED)  
find_package(custom_message_unity REQUIRED)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

set(srv_files "srv/AddThreeInts.srv") # srvファイルの場所を指定  

set(msg_files "msg/CustomUnity.msg") # srvファイルの場所を指定  
rosidl_generate_interfaces(${PROJECT_NAME} ${msg_files} ${srv_files}) # srvを作成  
ament_export_dependencies(rosidl_default_runtime) # 実行時の依存関係を設定

# subscriberの設定
add_executable(connecter_node src/connecter_node.cpp)
ament_target_dependencies(connecter_node rclcpp std_msgs custom_test_msgs custom_message_unity)
install(TARGETS
        connecter_node
        DESTINATION lib/${PROJECT_NAME})

# interface(msgなど)のlink
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} rosidl_typesupport_cpp)
target_link_libraries(connecter_node "${cpp_typesupport_target}")  # msgをpractice_server_nodeにリンク

ament_package()