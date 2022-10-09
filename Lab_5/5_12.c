// 5.12.a
#include <stdio.h>
double b(int k);

double a(int k)
{
    if(k == 1)
    {
        return 2;
    }
    if(k == 2)
    {
        return 1;
    }
    return (double) a(k-1) / (k+1) + a(k-2) * b(k);
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
    return (double) 2 * b(k-1) + a(k-1);
}

int main()
{
    int n;
    printf("n = ");
    scanf("%u", &n);

    double s = 0;
    double t = 3;
    for (int i = 1; i <= n; i++)
    {
        t = t*t*3;
        s += a(i) + b(i) +1;
    }
    printf("Sn = %lf", s);
}