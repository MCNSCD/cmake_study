aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} src)
add_library(client SHARED ${src})
target_link_libraries(client gflags::gflags glog::glog)
