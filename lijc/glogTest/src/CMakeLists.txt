# glog
find_package(Glog REQUIRED)
#include_directories(BEFORE ${GLOG_INCLUDE_DIRS}) 

add_executable(glog_test glog.cpp)
target_link_libraries(glog_test  glog)
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
