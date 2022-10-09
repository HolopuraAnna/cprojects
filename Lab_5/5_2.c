// 5.2
#include <stdio.h>

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int b(double a)
{
    int k = 0;
    while(fib(k) < a)
    {
        k++;
    }
    return k-1;
}

int c(double a)
{
    int k = 0;
    while(fib(k) <= a)
    {
        k++;
    }
    return k;
}

int d(int n)
{
    if(fib(n) > 1000)
    {
        return 0;
    }
    else
    {
        return fib(n) + d(n+1);
    }
}

int main()
{
    int n;
    printf("n = ");
    scanf("%u", &n);
    double a;
    printf("a = ");
    scanf("%lf", &a);

    printf("a) %u\n", fib(n));
    printf("b) %u\n", b(a));
    printf("c) %u\n", c(a));
    printf("d) %u\n", d(0));
}