Linux/unix thread handling#  <#Title#>
1. Main API
    int pthread_create(pthread_h *);
    pthread_t pthread_self(void);
    
2. Dead lock
dead lock 产生的条件
1） 同一线程对同一互斥量加锁两次
2） 线程a锁住 mutexB，由于某种原因停在了mutexA之前， 线程b锁住mutexA，由于mutexB被线程a锁住而卡死在等待阶段。

3. Thread sync
线程同步的几种方式：
pthread_mutex_init()
pthread_mutex_destroy()

pthread_mutex_lock()
pthread_mutex_trylock()  // recommend always use this one.
pthread_mutex_unlock()
