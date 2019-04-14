//
//  main.cpp
//  linux_c++_test
//
//  Created by Freya's Mac on 2019/4/11.
//  Copyright © 2019 Freya's Mac. All rights reserved.
//

#include <iostream>
#include "unistd.h"
#include "pthread.h"
#include "sys/socket.h"
#include "client.h"
#include "thread_handling.h"

int main(int argc, const char * argv[])
{
  // insert code here...
  thread_handling thread_1;
  thread_1.createthread();

  sleep(1);
  return 0;
}
