include(FetchContent)
set(GLOG_PREFIX glog)
if(NOT ${GLOG_PREFIX}_POPULATED)
    set(GLOG_BUILD_TESTS OFF CACHE BOOL INTERNAL)
    set(GLOG_BUILD_EXAMPLES OFF CACHE BOOL INTERNAL)
    set(GLOG_BUILD_DOCS OFF CACHE BOOL INTERNAL)
    set(GLOG_VERSION "v0.6.0")
    set(GLOG_URL https://github.com/google/glog/archive/refs/tags/${GLOG_VERSION}.tar.gz)
    set(GLOG_GIT https://github.com/google/glog.git)
    FetchContent_Declare(${GLOG_PREFIX}
        # URL ${GLOG_URL}
        GIT_REPOSITORY  ${GLOG_GIT}
        GIT_TAG         ${GLOG_VERSION}
        SOURCE_SUBDIR   cmake
    )
    set(GLOG_BUILD_TESTS OFF)
    set(GLOG_BUILD_EXAMPLES OFF)
    FetchContent_MakeAvailable(${GLOG_PREFIX})
endif()