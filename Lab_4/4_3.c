// 4.3
#include <stdio.h>
#include <math.h>

int a(int n, int x)
{
    int y = 1;
    int k = 1;
    for (int i=0; i<n; i++)
    {
        k *= x;
        y += k;
    }
    return y;
}

int b(int n, int x, int y)
{
    int f = 1;
    int k = 1;
    int m = 1;
    for (int i=0; i<n; i++)
    {
        k *= y;
        m *= 2;
        f += k * pow(x, m);
    }
    return f;
}

int main()
{
    printf("ya = %u\n", a(3, 2));
    printf("yb = %u\n", b(4, 1, 2));
}