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
#include "../abc/abc.pb.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include "google/protobuf/text_format.h"


void ip_init(int port, const char *ip_addr);
void msg_init(pt::abc abc_init);
void *udpsend(void *arg);