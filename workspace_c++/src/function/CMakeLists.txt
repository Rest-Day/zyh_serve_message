cmake_minimum_required(VERSION 3.8)
project(function)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(OpenCV REQUIRED)
find_package(message REQUIRED)

# 节点①：发图
add_executable(imgget src/imgget.cpp)
ament_target_dependencies(imgget rclcpp sensor_msgs cv_bridge)
target_link_libraries(imgget ${OpenCV_LIBS})

install(TARGETS imgget DESTINATION lib/${PROJECT_NAME})

ament_package()