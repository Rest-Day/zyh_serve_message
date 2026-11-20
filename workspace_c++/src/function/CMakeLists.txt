cmake_minimum_required(VERSION 3.8)
project(function)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(OpenCV REQUIRED)
find_package(message REQUIRED)

add_executable(imgget src/imgget.cpp)
ament_target_dependencies(imgget
  rclcpp
  std_msgs
  sensor_msgs
  cv_bridge
)
target_link_libraries(imgget ${OpenCV_LIBS})

add_executable(imgdo src/imgdo.cpp)
ament_target_dependencies(imgdo
  rclcpp
  std_msgs
  sensor_msgs
  cv_bridge
  message
)
target_link_libraries(imgdo ${OpenCV_LIBS})

add_executable(colorselect src/colorselect.cpp)
ament_target_dependencies(colorselect
  rclcpp
  message
)

install(TARGETS imgget imgdo colorselect
  DESTINATION lib/${PROJECT_NAME})

ament_package()