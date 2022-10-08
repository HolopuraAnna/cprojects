// 4.13.г
#include <stdio.h>

int main()
{
    int n;
    double x;
    printf("n = ");
    scanf("%u", &n);
    printf("x = ");
    scanf("%lf", &x);

    double y = 0;
    double k = 1;
    for (int i=1; i<=n; i++)
    {
        y += i * k;
        k *= x;
    }
    printf("y = %lf", y);
}