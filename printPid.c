#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
int main()
{
    printf("\nYo = %5d\n",getpid());
    exit(3);
}