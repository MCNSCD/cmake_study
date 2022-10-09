set(BUILD_GLOG_EXAMPLES FALSE)
set(GLOG_PREFIX glog)
set(GLOG_VERSION "0.6.0")
set(GLOG_URL https://github.com/google/glog/archive/refs/tags/v${GLOG_VERSION}.tar.gz)
set(GLOG_URL_MD5 "c98a6068bc9b8ad9cebaca625ca73aa2")

if (WIN32)
    set(GLOG_MAKE gmake)
else (WIN32)
    set(GLOG_MAKE make)
endif (WIN32)

set(NCPU 8)

if (BUILD_GLOG_EXAMPLES)
    set(GLOG_STEP_EXAMPLES ${GLOG_PREFIX}_examples)
endif (BUILD_GLOG_EXAMPLES)

option(FOUND_Ninja ON)
if (FOUND_Ninja)
    set(CMAKE_GENERATOR_STRING "Ninja")
else(FOUND_Ninja)
    set(CMAKE_GENERATOR_STRING "Unix Makefiles")
endif(FOUND_Ninja)

ExternalProject_Add(${GLOG_PREFIX}
    PREFIX ${GLOG_PREFIX}
    URL ${GLOG_URL}
    URL_MD5 ${GLOG_URL_MD5}
    # CONFIGURE_COMMAND ""
    CMAKE_GENERATOR "${CMAKE_GENERATOR}"
    BUILD_COMMAND ${MAKE}
    BUILD_IN_SOURCE 1
    INSTALL_COMMAND ""
    LOG_DOWNLOAD 1
    LOG_BUILD 1
    STEP_TARGETS ${GLOG_PREFIX} ${GLOG_STEP_EXAMPLES}
)

ExternalProject_Get_Property(${GLOG_PREFIX} SOURCE_DIR)
message(STATUS "Source directory of ${GLOG_PREFIX} ${SOURCE_DIR}")
ExternalProject_Add_Step(${GLOG_PREFIX} ${GLOG_PREFIX}_info
    COMMAND ${MAKE}
    DEPENDEES build
    WORKING_DIRECTORY ${SOURCE_DIR}
    LOG 1
)

if (BUILD_GLOG_EXAMPLES)
    ExternalProject_Add_Step(${GLOG_PREFIX} ${GLOG_PREFIX}_examples
        COMMAND ${GLOG_MAKE} -j${NCPU} examples glog_build_prefix=${GLOG_PREFIX}
        DEPENDEES build
        WORKING_DIRECTORY ${SOURCE_DIR}
        LOG 1
    )
endif (BUILD_GLOG_EXAMPLES)

set(GLOG_DEBUG_DIR ${SOURCE_DIR}/build/${GLOG_PREFIX}_debug)
set(GLOG_RELEASE_DIR ${SOURCE_DIR}/build/${GLOG_PREFIX}_release)
message(STATUS "GLOG Debug directory ${GLOG_DEBUG_DIR}")
message(STATUS "GLOG Release directory ${GLOG_RELEASE_DIR}")

# set the include directory variable and include it
set(GLOG_INCLUDE_DIRS ${SOURCE_DIR}/include)
include_directories(${GLOG_INCLUDE_DIRS})

# link the correct GLOG directory when the project is in
# Debug or Release mode
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    # in Debug mode
    link_directories(${GLOG_RELEASE_DIR})
    set(GLOG_LIBS glog_debug glogmalloc_debug)
    set(GLOG_LIBRARY_DIRS ${GLOG_DEBUG_DIR})
else (CMAKE_BUILD_TYPE STREQUAL "Debug")
    link_directories(${GLOG_RELEASE_DIR})
    set(GLOG_LIBS glog glogmalloc)
    set(GLOG_LIBRARY_DIRS ${GLOG_RELEASE_DIR})
endif (CMAKE_BUILD_TYPE STREQUAL "Debug")
# verify that the GLOG header files can be included
set(CMAKE_REQUIRED_INCLUDES_SAVE ${CMAKE_REQUIRED_INCLUDES})
set(CMAKE_REQUIRED_INCLUDES ${CMAKE_REQUIRED_INCLUDES} ${GLOG_INCLUDE_DIRS})
check_include_file_cxx("glog/glog.h" HAVE_GLOG)
set(CMAKE_REQUIRED_INCLUDES ${CMAKE_REQUIRED_INCLUDES_SAVE})
if (NOT HAVE_GLOG)
    message(STATUS "Did not build GLOG correctly as cannot find glog.h")
    set(HAVE_GLOG 1)
endif (NOT HAVE_GLOG)

if (UNIX)
install(DIRECTORY ${GLOG_LIBRARY_DIRS}/ DESTINATION lib
    USE_SOURCE_PERMISSIONS FILES_MATCHING PATTERN "*.so*")
else (UNIX)
    # do nothing
endif (UNIX)