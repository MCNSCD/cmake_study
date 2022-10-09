#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <iostream>
#include <cstring>
#include <vector>
#include <unistd.h>
#include <typeinfo> 

using namespace std;
//创建新的套接字之前需要调用一个引入Ws2_32.dll库的函数,否则服务器和客户端连接不上
#pragma comment(lib,"ws2_32.lib")

struct TEST
{
	int test;
};
struct INFO
{
	int id;
	string name;
	string email;
	TEST test_struct;
};

int main(int argc, char* argv[])
{	
	struct sockaddr_in Server;				//创建服务端sockaddr_in结构体
	//建立一个数据报类型的UDP套接字  ******************//
	int serverSocket = socket(PF_INET, SOCK_DGRAM, 0); //配置模式，
	//设置服务器地址addrSrv和监听端口
	Server.sin_family = AF_INET;
	Server.sin_addr.s_addr = inet_addr("127.0.0.3"); //设置服务器主机ip地址（与接收方客户端的IP对应）
	Server.sin_port = htons(8001);					 //发送用的端口，可以根据需要更改
	//使用bind（）函数绑定监听端口，将socket文件描述符sockSrv与地址类型变量（struct sockaddr_in ）进行绑定
	//int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
	bind(serverSocket, (sockaddr *)&Server, sizeof(sockaddr));

	//*******************************************************************************************//
	struct sockaddr_in Client;				//创建客户端sockaddr_in结构体
	int clientSocket = socket(PF_INET, SOCK_DGRAM, 0); //配置模式，
	Client.sin_family = AF_INET;
	Client.sin_addr.s_addr = inet_addr("127.0.0.1");
	Client.sin_port = htons(8001);

//*******************************************************************************************************
	//创建发送和接受的结构体以及转化时用到的字符串，用作测试
	INFO sendinfo,recvinfo;
	char send_info_buf[100], recv_info_buf[100];
	//创建发送和接受的字符串，用作测试
	char sendbuf[100]= "Hello!", recvbuf[100];
	//对发送的结构体成员赋值
	sendinfo.year = 1999;
	sendinfo.month = 11;
	sendinfo.day = 20;
	sendinfo.test_struct.test = 10;
	sendinfo.temperature = 18.30;
	//将发送的结构体sendinfo转化为字符串send_info_buf
	memcpy(send_info_buf, &sendinfo, sizeof(sendinfo));
//********************************************************************************************************

	while (1)
	{	
		
		//发送
			/*  
				int sendto(int s, const void* buf, int len, unsigned int flags, const struct sockaddr* to, int tolen);
				s:     接收端的socket描述符
				buf：  UDP数据报缓存区（包含待发送数据）
				len：  UDP数据报长度
				flags：调用方式标志位（一般设置为0）
				to：   指向接收数据的主机地址信息的结构体，（sockaddr_in需类型转换）；
				tolen：同所指的结构体的长度
			*/	
			//字符串发送和打印所用语句
			//int t = sendto(clientSocket, sendbuf, sizeof(sendbuf), 0, (sockaddr*)&Client, sizeof(Client));	
			//cout << "sendto_len:  "<<t << endl;//若发送失败。则返回-1	
			//结构体发送和打印所用语句
			//int t = sendto(clientSocket, send_info_buf, sizeof(send_info_buf)+1  , 0, (sockaddr*)&Client, sizeof(Client));
			//cout << "sendto_len:  "<<t << endl<<endl;//若发送失败。则返回-1

		//接收
			/*  
				int recvfrom(int s, void *buf, int len, unsigned int flags,struct sockaddr *from, int *fromlen);
				s:       socket描述符
				buf：    UDP数据报缓存区（包含所要接受数据）
				len：    缓存区长度
				flags：  调用方式标志位（一般设置为0）
				from：   指向发送数据的客户端地址信息的结构体，（sockaddr_in需类型转换）；
				fromlen：指针，指向from中结构体的长度
			*/
			socklen_t len = sizeof(sockaddr);
			//字符串接收和打印所用语句
			//recvfrom(serverSocket, recvbuf, sizeof(recvbuf), 0, (sockaddr*)&Server, &len);
			//printf("%s\n\n", recvbuf);

			//结构体接收和打印所用语句
			recvfrom(serverSocket, recv_info_buf, sizeof(recv_info_buf), 0, (sockaddr *)&Server, &len);
			memcpy(&recvinfo, recv_info_buf, sizeof(recv_info_buf));
			cout << "The id  is  " << recvinfo.id  << endl;
			cout << "The name is " << recvinfo.name << endl;
			cout << "The email is " << recvinfo.email << endl;
			cout << "The struct-test number is " << recvinfo.test_struct.test << endl<<endl;
	}
	close(clientSocket);
	//close(serverSocket);
	return 0;
}
