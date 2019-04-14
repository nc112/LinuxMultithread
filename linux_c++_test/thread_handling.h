//
//  thread_handling.hpp
//  linux_c++_test
//
//  Created by Freya's Mac on 2019/4/14.
//  Copyright © 2019 Freya's Mac. All rights reserved.
//

#ifndef thread_handling_h
#define thread_handling_h

#include <stdio.h>
#include <pthread.h>

class thread_handling
{
public:
  thread_handling(){};
  ~thread_handling(){};
  
public:
  static void *thread_func(void *arg);
  static void printpid(const char* threadname);
  int createthread(void);
};

#endif /* thread_handling_hpp */
