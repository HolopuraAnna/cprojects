// 5.16.б
#include <stdio.h>

int main()
{
    double x, e;
    printf("x = ");
    scanf("%lf", &x);
    printf("e = ");
    scanf("%lf", &e);

    double k = 1;
    int i = 1;
    int j = 1;
    int m = 1;
    double l = 1;
    double y = 0;
    while(l >= e)
    {
        y += j * l;
        k = k * x * x;
        m = m * i * (i+1);
        i += 2;
        j *= -1;
        l = k / m;
        printf("%lf    %lf\n", y, l);
    }

    printf("y = cos(%lf) = %lf", x, y);
}