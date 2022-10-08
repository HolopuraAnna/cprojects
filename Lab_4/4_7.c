// 4.7
#include <stdio.h>

int main()
{
    double x;
    int n;
    printf("n = ");
    scanf("%u", &n);
    printf("x = ");
    scanf("%lf", &x);

    double y = 1;
    int k = 1;
    double m = 1;
    for (int i=1; i<=n; i++)
    {
        k *= i;
        m *= x;
        y += m / k;
    }

    printf("y = %lf", y);
}