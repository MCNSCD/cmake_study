#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<string.h>
#include<unistd.h>
#include<netinet/in.h>
#include <arpa/inet.h>
#include<iostream>
#include "glog/logging.h"

#define PORT 8888
void udprecv(std::string *str);