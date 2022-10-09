#ifndef SERVER_H_
#define SERVER_H_

#include "common/common.h"

class Server : public UdpBase
{
public: 
    Server() = delete;
    explicit Server(const std::string& ip, int port);
    ~Server() = default;
};

#endif // SERVER_H_