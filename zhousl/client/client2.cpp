#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "/home/zero/proto/UDP/User.pb.h"
#include <time.h>
#include <fstream>
#include <gflags/gflags.h>
#include <glog/logging.h>

using namespace std;

DEFINE_string(ip, "127.0.0.1", "IP address");
DEFINE_int32(port, 8080, "port");

int main(int argc, char** argv) {
    //google::InitGoogleLogging(argv[0]);
	gflags::ParseCommandLineFlags(&argc, &argv, true);

    cout<<"ip:"<<FLAGS_ip<<endl;
    cout<<"port:"<<FLAGS_port<<endl;

    //FLAGS_log_dir="/home/zero/proto/UDP/log";   //设置log目录  没有指定则输出到控制台
    
    //LOG(INFO) << "file";
    //LOG(INFO) << "ip:"<<FLAGS_ip<<endl;
    //google::ShutdownGoogleLogging();

	// create socket
	int clientfd = socket(AF_INET, SOCK_STREAM, 0);
	if(-1 == clientfd) {
		printf("create socket error");
		return -1;
	}
	
	// connect server 
	struct sockaddr_in serveraddr;
	serveraddr.sin_family = AF_INET;
	serveraddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    //char * IP;
    //strcpy(IP,FLAGS_ip.data());
    //serveraddr.sin_addr.s_addr=inet_addr(IP);

    serveraddr.sin_port = htons(3000);
	
	if(-1 == connect(clientfd, (struct sockaddr *)&serveraddr, sizeof(serveraddr))) {
		printf("connect error");
		return -1;
	}
	
	// send data

    int curtime = time(NULL) ;
    IM::Account account1;
    account1.set_id(1);
    account1.set_name("ysl");
    account1.set_password("123456");
    char buff[128];
    account1.SerializePartialToArray(buff,128);

	int ret = send(clientfd, buff, strlen(buff), 0);
	if (ret != strlen(buff)){
		printf("send data error");
		return -1;
	}
	// receive data
	char recvBuf[32] = {0};
	ret = recv(clientfd, recvBuf, 32, 0);
	if (ret > 0) {
		printf("receive data from server: %s", recvBuf);
	} else {
		printf("receive data error: %s", recvBuf);
	}
	
	// close socket
	close(clientfd);
    google::protobuf::ShutdownProtobufLibrary();
    gflags::ShutDownCommandLineFlags();
    return 0;
}
