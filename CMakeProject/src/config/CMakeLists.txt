file(GLOB config_src
        ${CMAKE_CURRENT_SOURCE_DIR}/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(config SHARED ${config_src})
target_link_libraries(config gflags)