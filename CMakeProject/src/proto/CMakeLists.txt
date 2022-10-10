# aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} protobuf_src)
# add_library(protobuf_proto ${protobuf_src})
# target_link_libraries(protobuf_proto protobuf)

#设置protoc的搜索路径
LIST(APPEND PROTO_FLAGS ${CMAKE_CURRENT_SOURCE_DIR}/raw)

find_package(Protobuf 3 REQUIRED)
#获取需要编译的proto文件
file(GLOB_RECURSE MSG_PROTOS ${CMAKE_CURRENT_SOURCE_DIR}/raw/*.proto)
set(MESSAGE_SRC "")
set(MESSAGE_HDRS "")
foreach(msg ${MSG_PROTOS})
        get_filename_component(FIL_WE ${msg} NAME_WE)

        list(APPEND MESSAGE_SRC "${CMAKE_CURRENT_SOURCE_DIR}/${FIL_WE}.pb.cc")
        list(APPEND MESSAGE_HDRS "${CMAKE_CURRENT_SOURCE_DIR}/${FIL_WE}.pb.h")

        # 生成源码
        execute_process(
            COMMAND ${PROTOBUF_PROTOC_EXECUTABLE} ${msg} --cpp_out=${CMAKE_CURRENT_SOURCE_DIR} -I${CMAKE_CURRENT_SOURCE_DIR}/raw
            )
endforeach()
set_source_files_properties(${MESSAGE_SRC} ${MESSAGE_HDRS} PROPERTIES GENERATED TRUE)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} message_proto_src)
add_library(message_proto ${message_proto_src})
target_link_libraries(message_proto protobuf)