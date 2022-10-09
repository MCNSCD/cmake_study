aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} protobuf_src)
add_library(protobuf_proto ${protobuf_src})
target_link_libraries(protobuf_proto protobuf)