#include<stdio.h>
#include<stdlib.h>
#include<pwd.h>
#include <unistd.h>

int main()
{
    struct passwd *pwd;
    pwd=getpwuid(getuid());
    printf ("\nNonbre de usuario = %s \n",pwd->pw_name);
    exit (6);
}