// 5.6
#include <stdio.h>

double f_a(int n, double b)
{
    if(n == 0)
    {
        return b;
    }
    else
    {
        return b + 1 / f_a(n-1, b);
    }
}

double f_b(int n, int k)
{
    if(k == 0)
    {
        return 4 * n + 2;
    }
    else
    {
        return 4 * (n-k) + 2 + 1 / f_b(n, k-1);
    }
}

double f_c(int n)
{
    if(n == 0)
    {
        return 1 + 1 / 2;
    }
    else
    {
        return 1 + 1 / (2 + 1 / f_c(n-1));
    }
}

int main()
{
    int n;
    double b;
    printf("n = ");
    scanf("%u", &n);
    printf("b = ");
    scanf("%lf", &b);

    printf("a) %lf\n", f_a(n, b));
    printf("b) %lf\n", f_b(n, n));
    printf("c) %lf\n", f_c(n));
}