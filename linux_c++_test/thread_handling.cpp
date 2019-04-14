//
//  thread_handling.cpp
//  linux_c++_test
//
//  Created by Freya's Mac on 2019/4/14.
//  Copyright © 2019 Freya's Mac. All rights reserved.
//

#include "thread_handling.h"
#include "pthread.h"
#include <unistd.h>

pthread_t ntid = NULL;

void thread_handling::printpid(const char* threadname)
{
  pid_t pid       = 0;
  pthread_t tid   = NULL;
  
  pid = getpid();
  tid = pthread_self();
  
  printf("%s pid %u tid %u (0x%x)\n",
         threadname,
         (unsigned int)pid,
         (unsigned int)tid->__sig,
         (unsigned int)tid->__sig);
}

void* thread_handling::thread_func(void *arg)
{
  thread_handling::printpid("new thread:");
  return NULL;
}

int thread_handling::createthread(void)
{
  pthread_t pid = 0;
  int ret = pthread_create(&pid, NULL, thread_func, NULL);
  if(0 != ret)
  {
    printf("error info: %d", ret);
    return -1;
  }
  return 0;
}
