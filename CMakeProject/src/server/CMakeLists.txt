aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} src)
add_library(server SHARED ${src})
# target_include_directories()
target_link_libraries(server gflags::gflags glog::glog)