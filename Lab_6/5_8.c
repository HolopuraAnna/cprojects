// 5.8
#include <stdio.h>
#include <math.h>

double a(double e, double x)
{
    double res = 0;
    double x0 = 1;
    int k = 1;
    while (abs(x0) > e)
    {
        res += x0;
        x0 *= x; 
        x0 /= k;
        k++;
    }
    return res;
}

double b(double e, double x)
{
    double k = 3;
    double res = x;
    double x0 = (-1) *x * x * x / 3;
    while (abs(x0) > e)
    {
        res += x0;
        x0 *= (-1) * x * x / (k-1) / (k+2);
        k += 2;
    }     
    return res;
}

int main()
{
    double e, x;
    printf("e = ");
    scanf("%lf", &e);
    printf("x = ");
    scanf("%lf", &x);
    printf("a) %lf\n", a(e, x));
    printf("b) %lf", b(e, x));
}