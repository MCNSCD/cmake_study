aux_source_directory(. DIR_LIB_SRCS)
add_library (udprecv ${DIR_LIB_SRCS})
target_link_libraries(udprecv glog::glog)
