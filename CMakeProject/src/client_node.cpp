#include "client/client.h"

int main(int argc, char **argv)
{
        // 初始化gflag
    gflags::ParseCommandLineFlags(&argc, &argv, true);

    // 初始化glog
    google::InitGoogleLogging(argv[0]);
    try
    {
        Client client(FLAGS_client_ip, FLAGS_client_port);
        char data[1024];
        sockaddr_in addr;
        memset(data, 0, 1024);

        memset(&addr, 0, sizeof(addr));
        addr.sin_family = AF_INET;       // Use IPV4
        addr.sin_port   = htons(FLAGS_server_port);    //
        addr.sin_addr.s_addr = inet_addr(FLAGS_server_ip.c_str());

        while(1)
        {
            Message message;
            message.set_message("123123123123123123");
            message.SerializeToArray(data, 1024);
            int ret = client.SendTo(data, message.ByteSizeLong(), (sockaddr*)&addr);
            std::cout << ret << std::endl;
            LOG(INFO) << "Sent to " << message.DebugString();
            memset(data, 0, 1024);
            std::this_thread::sleep_for(std::chrono::milliseconds(100));

        }
    }
    catch(const std::exception& e)
    {
        LOG(ERROR) << e.what();
    }
    


    return 0;
}