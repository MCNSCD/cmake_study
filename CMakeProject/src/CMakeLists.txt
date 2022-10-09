include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# gflags
set(gflags_path ${third_party_path}/gflag)
include_directories(${gflags_path}/include)
link_directories(${gflags_path}/lib)
# glog
set(glog_path ${third_party_path}/glog)
include_directories(${glog_path}/include)
link_directories(${glog_path}/lib)
# protobuf
set(protobuf_path ${third_party_path}/protobuf/)
include_directories(${protobuf_path}/include)
link_directories(${protobuf_path}/lib) #libprotobuf

add_subdirectory(client)
add_subdirectory(server)
add_subdirectory(proto)
add_subdirectory(config)

add_executable(client_node client_node.cpp)
target_link_libraries(client_node client glog protobuf_proto config)

add_executable(server_node server_node.cpp)
target_link_libraries(server_node server glog protobuf_proto config)