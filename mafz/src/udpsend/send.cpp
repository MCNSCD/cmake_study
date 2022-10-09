#include"send.h"
using namespace pt;
abc abc_send;
int socket_port;
const char *socket_ip_addr;

void msg_init(abc abc_init){
	abc_send.set_a(abc_init.a());
	abc_send.set_b(abc_init.b());
	abc_send.set_c(abc_init.c());
}

void ip_init(int port, const char *ip_addr){
	socket_port = port;
	socket_ip_addr = ip_addr;
}

void *udpsend(void *arg)
{

	// 创建socket连接
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
	// 绑定IP地址和端口信息
	int ret=0;
	struct sockaddr_in clientaddr;
	socklen_t len = sizeof(clientaddr);
	bzero(&clientaddr, len);
	
	clientaddr.sin_family=AF_INET;
	clientaddr.sin_addr.s_addr=inet_addr(socket_ip_addr);
    // clientaddr.sin_addr.s_addr=htonl(INADDR_BROADCAST);
	clientaddr.sin_port=htons(socket_port);

	std::string str;
    if(!abc_send.SerializePartialToString(&str)){
		LOG(ERROR) << "SerializePartialToString ERROR."; 
	}
   	int str_len = str.size();
    char strc[str_len];
    strcpy(strc, str.c_str());
	
	while(1)
	{
		int addrlen=0;
		addrlen=sizeof(clientaddr);
		ret=sendto(fd,strc,sizeof(strc),0,(struct sockaddr *)&clientaddr,addrlen);
		if(ret<0)
		{
			perror("sendto failed");
			LOG(ERROR) << "sendto failed."; 
			close(fd);
			return 0;
		}
		LOG(INFO) << "sendto success."; 
		sleep(3);
	}
	return 0;

}