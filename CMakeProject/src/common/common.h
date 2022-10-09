#ifndef COMMON_H_
#define COMMON_H_


#include <sys/select.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <cstring>

#include <iostream>
#include <exception>
#include <thread>

#include "config/config_flags.h"
#include "proto/message.pb.h"
#include "glog/logging.h"

class UdpBase
{
public:

    UdpBase() = default;
    ~UdpBase()
    {
        if(this->fd > 2)
        close(this->fd);
    }

    int SendTo(const char* buf_, const size_t& size_, const struct sockaddr* addr_)
    {
        return sendto(this->fd, buf_, size_, 0, addr_, sizeof(*addr_));
    }
    int RecvFrom(char* buf_, const size_t& size_, struct sockaddr* addr_, socklen_t* addr_len_)
    {
        return recvfrom(this->fd, buf_, size_, 0, addr_, addr_len_);
    }

protected:
    int fd;
    struct sockaddr_in addr;
};

#endif // COMMON_H_
