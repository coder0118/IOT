// 编写一个程序，创建一个子进程，并在子进程中发送SIGALRM信号给父进程。
// 父进程设置SIGALRM信号的处理函数，并在接收到SIGALRM信号时打印一条消息。
// 同时，父进程使用alarm函数设置一个定时器，当定时器超时时发送SIGALRM信号给自己。
// 【提示】子进程使用kill() 函数向父进程发送信号