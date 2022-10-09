#include<iostream>
#include"abc/abc.pb.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include "google/protobuf/text_format.h"
#include"udprecv/recv.h"
#include "glog/logging.h"
#include <thread>
using namespace pt;
int main(){
    std::cout << "main2" << std::endl;
    std::string str;
    std::thread recv_thread(udprecv, &str);
    recv_thread.detach();
    abc abc;
    while(1){
        abc.ParseFromString(str);
        std::cout<<"a:"<<abc.a()<<std::endl<<"b:"<<abc.b()<<std::endl<<"c:"<<abc.c()<<std::endl;
        sleep(3);
    }

    return 0;
}