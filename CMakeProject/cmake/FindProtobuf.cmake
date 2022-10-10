include(FetchContent)
set(PROTOBUF_PREFIX protobuf)
if(NOT ${PROTOBUF_PREFIX}_POPULATED)
    set(PROTOBUF_BUILD_TESTS OFF CACHE BOOL INTERNAL)
    set(PROTOBUF_BUILD_EXAMPLES OFF CACHE BOOL INTERNAL)
    set(PROTOBUF_BUILD_DOCS OFF CACHE BOOL INTERNAL)
    set(PROTOBUF_VERSION "v3.18.1")
    set(PROTOBUF_URL https://github.com/protocolbuffers/protobuf/archive/refs/tags/${PROTOBUF_VERSION}.tar.gz)
    FetchContent_Declare(${PROTOBUF_PREFIX}
        # URL ${PROTOBUF_URL}
        GIT_REPOSITORY https://github.com/protocolbuffers/protobuf.git
        GIT_TAG        ${PROTOBUF_VERSION}
        SOURCE_SUBDIR  cmake
    )
    set(PROTOBUF_BUILD_TESTS OFF)
    set(PROTOBUF_BUILD_EXAMPLES OFF)
    FetchContent_MakeAvailable(${PROTOBUF_PREFIX})
endif()