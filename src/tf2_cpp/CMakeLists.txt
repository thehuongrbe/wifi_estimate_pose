cmake_minimum_required(VERSION 3.5)
project(tf2_cpp)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
find_package(geometry_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(turtlesim REQUIRED)
# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()

endif()

add_executable(turtle_tf2 src/turtle_tf2.cpp)
add_executable(tf2_broadcaster src/tf2_broadcaster.cpp)
add_executable(turtle_tf2_listener src/turtle_tf2_listener.cpp)
ament_target_dependencies(
   turtle_tf2_listener
   geometry_msgs
   rclcpp
   tf2
   tf2_ros
   turtlesim
)
ament_target_dependencies(
   turtle_tf2
   geometry_msgs
   rclcpp
   tf2
   tf2_ros
   turtlesim
)
ament_target_dependencies(
   tf2_broadcaster
   geometry_msgs
   rclcpp
   tf2
   tf2_ros
   turtlesim
)

   
install(TARGETS
    turtle_tf2
    DESTINATION lib/${PROJECT_NAME})
install(TARGETS
    turtle_tf2_listener
    DESTINATION lib/${PROJECT_NAME})
install(TARGETS
    tf2_broadcaster
    DESTINATION lib/${PROJECT_NAME})
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME})
ament_package()
