//
//  client.cpp
//  linux_c++_test
//
//  Created by Freya's Mac on 2019/4/14.
//  Copyright © 2019 Freya's Mac. All rights reserved.
//

//TODO: add receive/send function

#include <stdio.h>
#include <errno.h>
#include "client.h"
#include <sys/socket.h>


client_handler::client_handler()
: fdsock(0)
{
}

client_handler::~client_handler()
{
}

int client_handler::initSocket(int sockType, const sockaddr *addr, socklen_t socklen, int q_len)
{
  int ret = -1;
  if(0 == fdsock)
  {
    if((fdsock = socket(addr->sa_family, sockType, 0))
       < 0)
    {
      ret = -1;
      return ret;
    }
    if(bind(fdsock, addr, socklen) < 0)
    {
      ret = errno;
      return ret;
    }
    
    //handling for TCP
    if(SOCK_STREAM == sockType &&
       SOCK_SEQPACKET == sockType)
    {
      if(listen(fdsock, q_len) < 0)
      {
        ret = errno;
        return ret;
      }
    }
    ret = 0;
  }
  return ret;
}
