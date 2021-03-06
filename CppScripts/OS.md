# OS
## 进程与线程
- 进程是资源分配的独立单位
- 线程是资源调度的独立单位
## 进程之间的通信方式以及优缺点
- 管道（PIPE）
- 信号量（Semaphore）：一个计数器，可以用来控制多个线程对共享资源的访问
- 信号（Signal）：一种比较复杂的通信方式，用于通知接收进程某个事件已经发生
- 消息队列（Message Queue）：是消息的链表，存放在内核中并由消息队列标识符标识
- 共享内存（Shared Memory）：映射一段能被其他进程所访问的内存，这段共享内存由一个进程创建，但多个进程都可以访问
- 套接字（Socket）：可用于不同及其间的进程通信
## 线程之间的通信方式
- 锁机制：包括互斥锁/量（mutex）、读写锁（reader-writer lock）、自旋锁（spin lock）、条件变量（condition）
- 互斥锁/量（mutex）：提供了以排他方式防止数据结构被并发修改的方法。
- 读写锁（reader-writer lock）：允许多个线程同时读共享数据，而对写操作是互斥的。
- 信号机制(Signal)：类似进程间的信号处理
- 屏障（barrier）：屏障允许每个线程等待，直到所有的合作线程都达到某一点，然后从该点继续执行。

**线程间的通信目的主要是用于线程同步，所以线程没有像进程通信中的用于数据交换的通信机制**

## 进程之间私有和共享的资源
- 私有：地址空间、堆、全局变量、栈、寄存器
- 共享：代码段，公共数据，进程目录，进程 ID
## 线程之间私有和共享的资源
- 私有：线程栈，寄存器，程序计数器
- 共享：堆，地址空间，全局变量，静态变量