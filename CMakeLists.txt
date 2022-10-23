cmake_minimum_required(VERSION 3.23)
project(lab3b)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Google_test)
include_directories(Google_test/googlemock/include)
include_directories(Google_test/googletest/include)
add_executable(lab3b main.cpp dice.cpp handle.cpp dialog.cpp test.cpp)
target_link_libraries(lab3b gtest gtest_main)