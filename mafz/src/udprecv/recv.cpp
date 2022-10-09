#include"recv.h"

void udprecv(std::string *str)
{
	printf("udprecv");
	// 创建一个UDP套接字
	int fd = socket(AF_INET, SOCK_DGRAM, 0);

	struct sockaddr_in srvaddr;
	socklen_t len = sizeof(srvaddr);
	bzero(&srvaddr, len);

	srvaddr.sin_family = AF_INET;
	srvaddr.sin_port = htons(PORT);
	srvaddr.sin_addr.s_addr = htonl(INADDR_ANY);

	// 绑定本地IP和端口
	bind(fd, (struct sockaddr *)&srvaddr, len);

	char buf[1024];
	while(1)
	{
		bzero(buf, 1024);
		int ret = recvfrom(fd, buf, 1024, 0, NULL, NULL);
		if(ret < 0){
			LOG(ERROR) << "recv failed.";
		}
		*str = buf;
	}

}
