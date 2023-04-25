#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
int main()
{
    printf ("\nSesion = %5d\n", getsid(0));
    //exit(5);
}
