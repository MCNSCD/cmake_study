include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(proto)
add_subdirectory(client)
add_subdirectory(server)
add_subdirectory(config)

add_executable(client_node client_node.cpp)
target_link_libraries(client_node client gflags::gflags glog::glog message_proto config)

add_executable(server_node server_node.cpp)
target_link_libraries(server_node server gflags::gflags glog::glog message_proto config)