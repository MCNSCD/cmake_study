include(FetchContent)
set(GFLAGS_PREFIX gflags)
if(NOT GFLAGS_POPULATED)
    set(GFLAGS_BUILD_TESTS OFF CACHE BOOL INTERNAL)
    set(GFLAGS_BUILD_EXAMPLES OFF CACHE BOOL INTERNAL)
    set(GFLAGS_BUILD_DOCS OFF CACHE BOOL INTERNAL)
    set(GFLAGS_VERSION "2.2.2")
    set(GFLAGS_URL https://github.com/gflags/gflags/archive/refs/tags/v${GFLAGS_VERSION}.tar.gz)
    FetchContent_Declare(${GFLAGS_PREFIX}
        URL ${GFLAGS_URL}
    )
    FetchContent_MakeAvailable(${GFLAGS_PREFIX})
endif()