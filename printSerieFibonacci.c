#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n)
{
    if (n<2)
    {return n;}
    else
    {return fibonacci(n-1) + fibonacci(n-2);}
}

int main()
{
    int n;
    printf ("\nDame n\n");
    scanf ("%d",&n);
    printf ("EL valor %d de la serie de FIbonacci es : %d\n",n, fibonacci(n));
    exit (7);
}