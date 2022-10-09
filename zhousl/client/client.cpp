#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int main() {
	
	// create socket
	int clientfd = socket(AF_INET, SOCK_STREAM, 0);
	if(-1 == clientfd) {
		printf("create socket error");
		return -1;
	}
	
	// connect server 
	struct sockaddr_in serveraddr;
	serveraddr.sin_family = AF_INET;
	serveraddr.sin_addr.s_addr = inet_addr("127.0.0.1");;
        serveraddr.sin_port = htons(3000);
	
	if(-1 == connect(clientfd, (struct sockaddr *)&serveraddr, sizeof(serveraddr))) {
		printf("connect error");
		return -1;
	}
	
	// send data
	int ret = send(clientfd, "aaaa", strlen("aaaa"), 0);
	if (ret != strlen("aaaa")){
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

    return 0;
}
