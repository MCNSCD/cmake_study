#include<iostream>
#include"abc/abc.pb.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include "google/protobuf/text_format.h"
#include"udpsend/send.h"
#include"udprecv/recv.h"
#include "glog/logging.h"
#include"gflags/gflags.h"
#include <pthread.h>
using namespace pt;

DEFINE_string(ip, "127.0.0.1", "socket ip address");
DEFINE_int32(port, 8888, "socker port");


int main(int argc, char** argv){
    std::cout << "main1" <<std:: endl;
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    FLAGS_logtostderr = true;
    google::InitGoogleLogging(argv[0]);
    //INFO级别的日志都存放到logs目录下且前缀为INFO_
    google::SetLogDestination(google::GLOG_INFO, "./log/INFO_");
    //WARNING级别的日志都存放到logs目录下且前缀为WARNING_
    google::SetLogDestination(google::GLOG_WARNING, "./log/WARNING_");
    //ERROR级别的日志都存放到logs目录下且前缀为ERROR_
    google::SetLogDestination(google::GLOG_ERROR, "./log/ERROR_");	
    //FATAL级别的日志都存放到logs目录下且前缀为FATAL_
    google::SetLogDestination(google::GLOG_FATAL, "./log/FATAL_");	

    abc abc;
    abc.set_a("mfz");
    abc.set_b(20);
    abc.set_c(22);
    msg_init(abc);
    pthread_t udp_send;
    std::cout << "Got '" << FLAGS_ip << ":" << FLAGS_port << "'." << std::endl;

    char ip[FLAGS_ip.size()];
    strcpy(ip ,FLAGS_ip.c_str());
    int port = FLAGS_port;
    ip_init(port, ip);

    pthread_create(&udp_send, NULL, udpsend, NULL);
	LOG(INFO) << "udp_send_thread start"; 


    while (1){
    }
    google::ShutdownGoogleLogging();
    return 0;
}

