// Online C compiler to run C program online
// program to implement call system in unix 
//Program 1 :-
#include <stdio.h>
#include <sys/wait.h> 
#include <unistd.h> // for standard functions eg : fork()
#include<sys/types.h> // for types of file 

int main() {
    
    pid_t c1,c2;
    
    c1 = fork();
    
    if(c1 == 0)
    {
        printf("PID of child process : %d\n",getpid());
        printf("PID of Parent of child process : %d\n",getppid());
    }
    else
    {
        wait(NULL);
        c2 = fork();
    if(c2 == 0)
    {
        printf("PID of child process : %d\n",getpid());
        printf("PID of Parent of child process : %d\n",getppid());
    }
    else
    {
        wait(NULL);
        printf("PID of parent process : %d\n",getpid());
    }
    }
// printf("Hello "); 
    return 0;
}