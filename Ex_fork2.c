// Online C compiler to run C program online
// Online C compiler to run C program online
// program to implement system call in unix 
//Program 2:-
#include <stdio.h>
#include <sys/wait.h> 
#include <unistd.h> // for standard functions eg : fork()
#include<sys/types.h> // for types of file 

int main() {
    
    pid_t c1,c2;
    
    c1 = fork();
    
    if(c1 == 0)
    {
        printf("PID of child process c1 : %d\n",getpid());
        printf("PID of Parent(main) of child process c1 : %d\n\n",getppid());
        
        c2 = fork();
        if(c2 == 0)
        {
            printf("PID of child process c2 : %d\n",getpid());
            printf("PID of Parent(c1) of child process c2 : %d\n\n",getppid());
        }
        else
        {
            wait(NULL);
            printf("PID of parent process c1 : %d\n\n",getpid());
        }
    }
   
    else
    {
        wait(NULL);
        printf("PID of parent(main) process : %d\n",getpid());
    }
    return 0;
}
