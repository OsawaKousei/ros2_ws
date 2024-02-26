cmake_minimum_required(VERSION 3.8)
project(cpp_server_client)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)  
find_package(std_msgs REQUIRED)  
find_package(rosidl_default_generators REQUIRED)  # msgを作るのに必要

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

set(srv_files "srv/PracticeSrv.srv") # srvファイルの場所を指定  
rosidl_generate_interfaces(${PROJECT_NAME} ${srv_files}) # srvを作成  
ament_export_dependencies(rosidl_default_runtime) # 実行時の依存関係を設定

# Serverの設定
add_executable(practice_server_node src/server_node.cpp)
ament_target_dependencies(practice_server_node rclcpp)
install(TARGETS
        practice_server_node
        DESTINATION lib/${PROJECT_NAME})

# Clientの設定
add_executable(practice_client_node src/client_node.cpp)
ament_target_dependencies(practice_client_node rclcpp)
install(TARGETS
        practice_client_node
        DESTINATION lib/${PROJECT_NAME})

# interface(msgなど)のlink
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} rosidl_typesupport_cpp)
target_link_libraries(practice_server_node "${cpp_typesupport_target}")  # msgをpractice_server_nodeにリンク
target_link_libraries(practice_client_node "${cpp_typesupport_target}")  # msgをpractice_client_nodeにリンク

ament_package()
