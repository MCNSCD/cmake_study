#ifndef CLIENT_H_
#define CLIENT_H_

#include "common/common.h"


class Client : public UdpBase
{

public: 
    Client() = delete;
    explicit Client(const std::string& ip, int port);
    ~Client() = default;

};






#endif // CLIENT_H_