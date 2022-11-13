// 5.20
#include <stdio.h>
#include <math.h>
 
double y(double x)
{
    return pow(x, 3) + 4 * pow(x, 2) + x - 6;
}
 
double func(double a, double b, double e)
{
    while (fabs(b - a) > e)
    {
        a = b - (b - a) * y(b) / (y(b) - y(a));
        b = a - (a - b) * y(a) / (y(a) - y(b));
    }
    return b;
}
 
int main()
{
    double a = 0, b = 2, e;
    printf("e = ");
    scanf("%lf", &e);
    printf("%lf", func(a, b, e));
}