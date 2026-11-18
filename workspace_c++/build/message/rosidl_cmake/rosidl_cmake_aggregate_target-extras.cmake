# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target message::message
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${message_TARGETS}.
if(message_TARGETS AND NOT TARGET message::message)
  add_library(message::message INTERFACE IMPORTED)
  set_target_properties(message::message PROPERTIES
    INTERFACE_LINK_LIBRARIES "${message_TARGETS}")
endif()
