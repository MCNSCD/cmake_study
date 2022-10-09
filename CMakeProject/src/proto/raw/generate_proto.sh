curr_dir=$(cd "$(dirname "$0")";pwd)
exe=/home/liangzg/Project/CMakeProject/third_party/protobuf/bin/protoc

pushd ${curr_dir} > /dev/null

${exe} --cpp_out=.. -I=./  *.proto
# ${exe} --java_out=.. -I=./  *.proto

# ${exe} --python_out=../py_proto -I./  *.proto

popd > /dev/null

