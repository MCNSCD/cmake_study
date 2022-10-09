cmake_minimum_required(VERSION 2.8)
project(glog_test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake")

find_package(Glog REQUIRED)

add_executable(glog_test main.cpp)
target_link_libraries (glog_test glog)

