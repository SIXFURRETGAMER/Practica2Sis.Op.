#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>

int main()
{
    int pid;
    int status;
    pid=fork();
    if (pid!=0)
    {
        printf("\nYo = %5d\n", getpgid(pid));
        printf("\nID = %5d\n", pid);
    }
    //pid = wait(&status);
    exit(4);
}