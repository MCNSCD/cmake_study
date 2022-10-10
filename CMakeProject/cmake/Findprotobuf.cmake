include(FetchContent)
set(PROTOBUF_PREFIX protobuf)
if(NOT PROTOBUF_POPULATED)
    set(PROTOBUF_BUILD_TESTS OFF CACHE BOOL INTERNAL)
    set(PROTOBUF_BUILD_EXAMPLES OFF CACHE BOOL INTERNAL)
    set(PROTOBUF_BUILD_DOCS OFF CACHE BOOL INTERNAL)
    set(PROTOBUF_VERSION "3.6.1")
    set(PROTOBUF_URL https://github.com/protocolbuffers/protobuf/archive/refs/tags/v${PROTOBUF_VERSION}.tar.gz)
    FetchContent_Declare(${PROTOBUF_PREFIX}
        URL ${PROTOBUF_URL}
    )
    FetchContent_MakeAvailable(${PROTOBUF_PREFIX})
endif()