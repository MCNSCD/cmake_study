cmake_minimum_required(VERSION 3.10.2)
project(cmkl)
# add_compile_options(-std=c++11) 
# 使用CMAKE_CXX_STANDARD
set(CMAKE_CXX_STANDARD 11)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(src/udpsend) 
add_subdirectory(src/udprecv) 
add_subdirectory(third_party/glog)
add_subdirectory(third_party/gflags-master)

find_package(Threads REQUIRED)
# find_package (glog 0.6.0 REQUIRED)
find_package(Protobuf REQUIRED)

aux_source_directory(./src/abc ABC_SRC)
aux_source_directory(./src/udpsend UDPSEND_SRC)
aux_source_directory(./src/udprev UDPRECV_SRC)

add_executable(main1 ./src/main1.cpp ${ABC_SRC} ${UDPSEND_SRC} ${UDPRECV_SRC})
add_executable(main2 ./src/main2.cpp ${ABC_SRC} ${UDPSEND_SRC} ${UDPRECV_SRC})
# 添加链接库，PROTOBUF_LIBRARIES需find_package(Protobuf REQUIRED)后才可链接
target_link_libraries(main1 ${PROTOBUF_LIBRARIES} glog::glog udpsend Threads::Threads )
target_link_libraries(main2 ${PROTOBUF_LIBRARIES} glog::glog udprecv Threads::Threads)
