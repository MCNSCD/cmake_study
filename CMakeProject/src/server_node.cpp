#include "server/server.h"

int main(int argc, char **argv)
{
        // 初始化gflag
    gflags::ParseCommandLineFlags(&argc, &argv, true);

    // 初始化glog
    google::InitGoogleLogging(argv[0]);
    try
    {
        Server server(FLAGS_server_ip, FLAGS_server_port);

        char data[1024];

        sockaddr_in addr;
        socklen_t addrlen;
        
        // 接受数据 
        while(1)
        {
            memset(data, 0, sizeof(data));
            int ret = server.RecvFrom(data, 1024, (sockaddr*)&addr, &addrlen);

            if(ret <= 0)
            {
                continue;
            }

            std::cout << ret << std::endl;
            Message message;
            message.ParseFromArray(data, ret);

            LOG(INFO) << "Recv " << message.DebugString();

        }
    }
    catch(const std::exception& e)
    {
        LOG(ERROR) << e.what() << '\n';
    }
    


    return 0;
}