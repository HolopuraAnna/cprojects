// 4.4
#include <stdio.h>

double func(int n, double x)
{
    double y = 0;
    double k = 1;
    for (int i=1; i<=n; i++)
    {
        k *= x;
        y += i * k;
    }
    return y;
}

int main()
{
    int n;
    double x;
    printf("Input n x: ");
    scanf("%u %lf", &n, &x);

    printf("y = %lf", func(n, x));
}