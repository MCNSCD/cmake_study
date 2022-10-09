/*********************************************************************************
 * File    :config_flags.h
 * Author  :hanhy
 * Email   :hanhy20@mails.jlu.edu.cn
 * Desc    :
 **********************************************************************************/

#ifndef CONFIG_FLAGS_H
#define CONFIG_FLAGS_H

#include "gflags/gflags.h"


DECLARE_string(client_ip);
DECLARE_int32(client_port);

DECLARE_string(server_ip);
DECLARE_int32(server_port);
#endif // CONFIG_FLAGS_H
