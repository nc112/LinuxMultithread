//
//  client.h
//  linux_c++_test
//
//  Created by Freya's Mac on 2019/4/14.
//  Copyright © 2019 Freya's Mac. All rights reserved.
//

#ifndef client_h
#define client_h

#include "sys/socket.h"
class client_handler
{
public:
    client_handler();
    ~client_handler();
    int initSocket(int sockType, const sockaddr *socklen, socklen_t len, int q_len);
private:
    int fdsock;
};

#endif /* client_h */
