// 5.7
#include <stdio.h>
#include <math.h>

double b(int k);

double a(int k)
{
    if(k == 1)
    {
        return 0;
    }
    if(k == 2)
    {
        return 1;
    }
    return (double) a(k-1) / k + a(k-2) * b(k);
}

double b(int k)
{
    if(k == 1)
    {
        return 1;
    }
    if(k == 2)
    {
        return 0;
    }
    return (double) b(k-1) + a(k-1);
}

int main()
{
    int n;
    printf("n = ");
    scanf("%u", &n);

    double s = 0;
    double t = 1;
    for (int i = 1; i <= n; i++)
    {
        t *= 2;
        s += t/(a(i) + b(i));
    }
    printf("Sn = %lf", s);
}