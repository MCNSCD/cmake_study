/*********************************************************************************
 * File    :config_flags.cpp
 * Author  :hanhy
 * Email   :hanhy20@mails.jlu.edu.cn
 * Desc    :
 **********************************************************************************/
#include "config_flags.h"


DEFINE_string(client_ip, "127.0.0.1", "Client IP address");
DEFINE_int32(client_port, 33333, "Client port number");

DEFINE_string(server_ip, "127.0.0.1", "Server IP address");
DEFINE_int32(server_port, 44444, "Server port number");