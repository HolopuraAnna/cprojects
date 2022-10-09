// 5.4
#include <stdio.h>
void a(int n)
{
    double p = 1;
    int k = 1;
    for(int i=1; i<=n; i++)
    {
        k *= i;
        p *= 1 + (double)1/k;
    }
    printf("a) p = %lf\n", p);
}

void b(int n)
{
    double p = 1;
    int k = -1;
    double m = 1;
    for(int i=1; i<=n; i++)
    {
        k *= -1;
        m *= 2;
        p *= 1 + k * i * i / m;
    }
    printf("b) p = %lf\n", p);
}

int main()
{
    int n;
    printf("n = ");
    scanf("%u", &n);

    a(n);
    b(n);
}