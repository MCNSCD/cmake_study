include(FetchContent)
set(GLOG_PREFIX glog)
if(NOT GLOG_POPULATED)
    set(GLOG_BUILD_TESTS OFF CACHE BOOL INTERNAL)
    set(GLOG_BUILD_EXAMPLES OFF CACHE BOOL INTERNAL)
    set(GLOG_BUILD_DOCS OFF CACHE BOOL INTERNAL)
    set(GLOG_VERSION "0.6.0")
    set(GLOG_URL https://github.com/google/glog/archive/refs/tags/v${GLOG_VERSION}.tar.gz)
    FetchContent_Declare(${GLOG_PREFIX}
        URL ${GLOG_URL}
    )
    FetchContent_MakeAvailable(${GLOG_PREFIX})
endif()