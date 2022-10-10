include(FetchContent)
set(GFLAGS_PREFIX gflags)
if(NOT ${GFLAGS_PREFIX}_POPULATED)
    set(GFLAGS_BUILD_TESTS OFF CACHE BOOL INTERNAL)
    set(GFLAGS_BUILD_EXAMPLES OFF CACHE BOOL INTERNAL)
    set(GFLAGS_BUILD_DOCS OFF CACHE BOOL INTERNAL)
    set(GFLAGS_VERSION "v2.2.2")
    set(GFLAGS_URL https://github.com/gflags/gflags/archive/refs/tags/${GFLAGS_VERSION}.tar.gz)
    set(GFLAGS_GIT https://github.com/gflags/gflags.git)
    FetchContent_Declare(${GFLAGS_PREFIX}
        # URL ${GFLAGS_URL}
        GIT_REPOSITORY  ${GFLAGS_GIT}
        GIT_TAG         ${GFLAGS_VERSIONS}
        SOURCE_SUBDIR   cmake
    )
    set(BUILD_TESTING OFF)
    set(GFLAGS_BUILD_SHARED_LIBS ON)
    set(GFLAGS_BUILD_EXAMPLES OFF)
    FetchContent_MakeAvailable(${GFLAGS_PREFIX})
endif()