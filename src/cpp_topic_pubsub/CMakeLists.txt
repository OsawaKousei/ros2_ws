cmake_minimum_required(VERSION 3.8)
project(cpp_topic_pubsub)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()  # packageから自動でfind_packageしてくれる

#ライブラリの生成
ament_auto_add_library(comp_pub SHARED src/comp_pub.cpp)
rclcpp_components_register_nodes(comp_pub "cpp_topic_pubsub::comp_pub")

#ライブラリの生成
ament_auto_add_library(comp_sub SHARED src/comp_sub.cpp)
rclcpp_components_register_nodes(comp_sub "cpp_topic_pubsub::comp_sub")

install(DIRECTORY
  DESTINATION share/${PROJECT_NAME}/
)

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

#これはnodeごとに書く必要がある
ament_auto_add_executable(
publisher_node src/publisher_node.cpp
)
ament_auto_add_executable(
subscriber_node src/subscriber_node.cpp
)
ament_auto_add_executable(
pubsub_node src/pubsub_node.cpp
)

#実行ファイルの生成
ament_auto_add_executable(comp_test_node #実行ファイル名
src/comp_test.cpp #依存ファイル
)

#ライブラリのビルド
ament_auto_package(INSTALL_TO_SHARE)
