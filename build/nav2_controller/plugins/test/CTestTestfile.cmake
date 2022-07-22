# CMake generated Testfile for 
# Source directory: /home/nth/ros2_ws/src/navigation2/nav2_controller/plugins/test
# Build directory: /home/nth/ros2_ws/build/nav2_controller/plugins/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(pctest "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/nth/ros2_ws/build/nav2_controller/test_results/nav2_controller/pctest.gtest.xml" "--package-name" "nav2_controller" "--output-file" "/home/nth/ros2_ws/build/nav2_controller/ament_cmake_gtest/pctest.txt" "--command" "/home/nth/ros2_ws/build/nav2_controller/plugins/test/pctest" "--gtest_output=xml:/home/nth/ros2_ws/build/nav2_controller/test_results/nav2_controller/pctest.gtest.xml")
set_tests_properties(pctest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nth/ros2_ws/build/nav2_controller/plugins/test/pctest" TIMEOUT "60" WORKING_DIRECTORY "/home/nth/ros2_ws/build/nav2_controller/plugins/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nth/ros2_ws/src/navigation2/nav2_controller/plugins/test/CMakeLists.txt;1;ament_add_gtest;/home/nth/ros2_ws/src/navigation2/nav2_controller/plugins/test/CMakeLists.txt;0;")
add_test(gctest "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/nth/ros2_ws/build/nav2_controller/test_results/nav2_controller/gctest.gtest.xml" "--package-name" "nav2_controller" "--output-file" "/home/nth/ros2_ws/build/nav2_controller/ament_cmake_gtest/gctest.txt" "--command" "/home/nth/ros2_ws/build/nav2_controller/plugins/test/gctest" "--gtest_output=xml:/home/nth/ros2_ws/build/nav2_controller/test_results/nav2_controller/gctest.gtest.xml")
set_tests_properties(gctest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nth/ros2_ws/build/nav2_controller/plugins/test/gctest" TIMEOUT "60" WORKING_DIRECTORY "/home/nth/ros2_ws/build/nav2_controller/plugins/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nth/ros2_ws/src/navigation2/nav2_controller/plugins/test/CMakeLists.txt;3;ament_add_gtest;/home/nth/ros2_ws/src/navigation2/nav2_controller/plugins/test/CMakeLists.txt;0;")
subdirs("../../gtest")
