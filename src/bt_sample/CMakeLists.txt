cmake_minimum_required(VERSION 3.8)
project(bt_sample)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()  # packageから自動でfind_packageしてくれる

ament_auto_add_executable(
  bt_node src/bt_node.cpp
)

ament_auto_add_executable(
server_bt src/server_bt.cpp
)

ament_auto_add_executable(
  action_server_bt src/action_server_bt.cpp
)

ament_auto_add_executable(
  topic_bt src/topic_bt.cpp
)

install(DIRECTORY
  config
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

## msg/srv generation
file(GLOB ${PROJECT_NAME}_msg_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} msg/*)
file(GLOB ${PROJECT_NAME}_srv_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} srv/*)
file(GLOB ${PROJECT_NAME}_action_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} action/*)
rosidl_generate_interfaces(
        ${PROJECT_NAME}
        ${${PROJECT_NAME}_msg_files}  # msg使わないならコメントアウト
        ${${PROJECT_NAME}_srv_files}  # srv使わないならコメントアウト
        ${${PROJECT_NAME}_action_files}  # action使わないならコメントアウト
        DEPENDENCIES ${${PROJECT_NAME}_FOUND_BUILD_DEPENDS}
)

rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} rosidl_typesupport_cpp)
target_link_libraries(bt_node "${cpp_typesupport_target}")
target_link_libraries(server_bt "${cpp_typesupport_target}")
target_link_libraries(action_server_bt "${cpp_typesupport_target}")
target_link_libraries(topic_bt "${cpp_typesupport_target}")

#ライブラリのビルド
ament_auto_package(INSTALL_TO_SHARE)
