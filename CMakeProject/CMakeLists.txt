cmake_minimum_required(VERSION 3.10)
project("ECloud")

# 设置编译版本
set(CMAKE_BUILD_TYPE "Debug")
# set(CMAKE_BUILD_TYPE "Release")

# 设置C++11标准
set(CMAKE_CXX_STANDARD 14)

# 添加cmake 库文件搜索路径
# list(APPEND CMAKE_PREFIX_PATH "${third_party_path}/poco/poco-libstdcxx-install/lib/cmake/Poco")


# 设置静态库文件路径
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib" CACHE PATH "Archive output dir.")
# 设置动态库文件路径
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib" CACHE PATH "Library output dir.")
# set(CMAKE_PDB_OUTPUT_DIRECTORY     "${CMAKE_CURRENT_SOURCE_DIR}/bin" CACHE PATH "PDB (MSVC debug symbol)output dir.")
# 设置可执行文件路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin" CACHE PATH "Executable/dll output dir.")

# 添加编译选项fpic
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -fpic -pthread -Wno-error=deprecated-declarations -Wno-deprecated-declarations")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}  -fpic -pthread")

# 设置ASN debug日志输出
# set(CMAKE_C_FLAGS "-DEMIT_ASN_DEBUG=0 ${CMAKE_C_FLAGS}")
set(CMAKE_C_FLAGS "-DASN_EMIT_DEBUG=0 ${CMAKE_C_FLAGS}")

list (APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(glog REQUIRED)
find_package(gflags REQUIRED)
find_package(Protobuf 3.18 REQUIRED)

add_executable(test_glog src/test.cpp)
target_link_libraries(test_glog glog::glog)
# add_subdirectory(third_party)
# 引入源码目录
add_subdirectory(src)