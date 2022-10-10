# aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} protobuf_src)
# add_library(protobuf_proto ${protobuf_src})
# target_link_libraries(protobuf_proto protobuf)

#设置protoc的搜索路径
LIST(APPEND PROTO_FLAGS -I${CMAKE_SOURCE_DIR}/raw)

#获取需要编译的proto文件
file(GLOB_RECURSE MSG_PROTOS ${CMAKE_SOURCE_DIR}/raw/*.proto)
set(MESSAGE_SRC "")
set(MESSAGE_HDRS "")
foreach(msg ${MSG_PROTOS})
        get_filename_component(FIL_WE ${msg} NAME_WE)

        list(APPEND MESSAGE_SRC "${CMAKE_SOURCE_DIR}/${FIL_WE}.pb.cc")
        list(APPEND MESSAGE_HDRS "${CMAKE_SOURCE_DIR}/${FIL_WE}.pb.h")
        
        # 生成源码
        execute_process(
            COMMAND ${PROTOBUF_PROTOC_EXECUTABLE} ${PROTO_FLAGS} --cpp_out=${DST_DIR} ${msg}
            )
endforeach()
set_source_files_properties(${MESSAGE_SRC} ${MESSAGE_HDRS} PROPERTIES GENERATED TRUE)

