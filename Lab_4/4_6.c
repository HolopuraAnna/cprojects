// 4.6
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%u", &n);

    double a, b = 0;
    for (int i=0; i<n; i++)
    {
        a = sqrt(2 + a);
    }

    for (int i=n; i>0; i--)
    {
        b = sqrt(3 * i + b);
    }

    printf("a) %lf\n", a);
    printf("b) %lf\n", b);
}