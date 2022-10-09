#include "server/server.h"

Server::Server(const std::string& ip_, int port_)
{
    this->fd = socket(AF_INET, SOCK_DGRAM, 0);
    if(-1 == this->fd){
        throw std::runtime_error("Failed to open socket");
    }

    // 设置地址与端口
    socklen_t          addr_len=sizeof(addr);

    memset(&this->addr, 0, sizeof(this->addr));
    this->addr.sin_family = AF_INET;       // Use IPV4
    this->addr.sin_port   = htons(port_);    //
    this->addr.sin_addr.s_addr = inet_addr(ip_.c_str());

    int reuse = 1;
    setsockopt(this->fd, SOL_SOCKET, SO_REUSEADDR, &reuse, sizeof(reuse));

    // 绑定获取数据的端口，作为发送方，不绑定也行
    if (bind(this->fd, (struct sockaddr*)&addr, addr_len) == -1){
        close(this->fd);
        throw std::runtime_error("Failed to bind socket");
    }

}