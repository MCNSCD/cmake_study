PROJECT_DIR=${PWD}
mkdir ${PROJECT_DIR}/build
cd ${PROJECT_DIR}/build


# GFLAG_BASENAME=gflag
# GFLAG_VERSION=v2.2.2
# GFLAG_DOWNLOAD_DIR=${PROJECT_DIR}/build/${GFLAG_BASENAME}-${GFLAG_VERSION}
# GFLAG_DOWNLOAD_LINK=https://gitee.com/liang_zhi_gang/gflags.git
# GFLAG_INSTALL_DIR=${PROJECT_DIR}/third_party/${GFLAG_BASENAME}

# git clone --depth=1 -b ${GFLAG_VERSION} ${GFLAG_DOWNLOAD_LINK} ${GFLAG_DOWNLOAD_DIR}
# mkdir ${GFLAG_DOWNLOAD_DIR}/build && cd  ${GFLAG_DOWNLOAD_DIR}/build
# cmake -DBUILD_SHARED_LIBS=ON \
#       -DCMAKE_C_COMPILER=/usr/bin/gcc \
#       -DCMAKE_CXX_COMPILER=/usr/bin/g++ \
#       -DCMAKE_INSTALL_PREFIX=${GFLAG_INSTALL_DIR} \
#       ${GFLAG_DOWNLOAD_DIR}
# make && make install
# cd ${PROJECT_DIR}/build

# GLOG_BASENAME=glog
# GLOG_VERSION=v0.5.0
# GLOG_DOWNLOAD_DIR=${PROJECT_DIR}/build/${GLOG_BASENAME}-${GLOG_VERSION}
# GLOG_DOWNLOAD_LINK=https://gitee.com/liang_zhi_gang/glog.git
# GLOG_INSTALL_DIR=${PROJECT_DIR}/third_party/${GLOG_BASENAME}

# git clone --depth=1 -b ${GLOG_VERSION} ${GLOG_DOWNLOAD_LINK} ${GLOG_DOWNLOAD_DIR}
# mkdir ${GLOG_DOWNLOAD_DIR}/build && cd  ${GLOG_DOWNLOAD_DIR}/build
# cmake -DBUILD_SHARED_LIBS=ON \
#       -DCMAKE_C_COMPILER=/usr/bin/gcc \
#       -DCMAKE_CXX_COMPILER=/usr/bin/g++ \
#       -DCMAKE_INSTALL_PREFIX=${GLOG_INSTALL_DIR} \
#       ${GLOG_DOWNLOAD_DIR}
# make && make install
# cd ${PROJECT_DIR}/build

# PROTOBUF_BASENAME=protobuf
# PROTOBUF_VERSION=v3.18.1
# PROTOBUF_DOWNLOAD_DIR=${PROJECT_DIR}/build/${PROTOBUF_BASENAME}-${PROTOBUF_VERSION}
# PROTOBUF_DOWNLOAD_LINK=https://gitee.com/liang_zhi_gang/protobuf.git
# PROTOBUF_INSTALL_DIR=${PROJECT_DIR}/third_party/${PROTOBUF_BASENAME}

# git clone --depth=1 -b ${PROTOBUF_VERSION} ${PROTOBUF_DOWNLOAD_LINK} ${PROTOBUF_DOWNLOAD_DIR}
# mkdir ${PROTOBUF_DOWNLOAD_DIR}/build && cd  ${PROTOBUF_DOWNLOAD_DIR}/build
# cmake -DBUILD_SHARED_LIBS=ON \
#       -DCMAKE_C_COMPILER=/usr/bin/gcc \
#       -DCMAKE_CXX_COMPILER=/usr/bin/g++ \
#       -DCMAKE_INSTALL_PREFIX=${PROTOBUF_INSTALL_DIR} \
#       -Dprotobuf_BUILD_TESTS=OFF \
#       ${PROTOBUF_DOWNLOAD_DIR}/cmake
# make && make install
# cd ${PROJECT_DIR}/build

rm -rf ${PROJECT_DIR}/build/*

