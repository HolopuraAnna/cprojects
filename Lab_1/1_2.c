// 1_2

#include <stdio.h>
#include <math.h>
#define printf __mingw_printf

int main()
{
    float a = 1e-4;
    double b = 1e-4;
    long double c = 1e-4;
    printf("%.2f, %.2f, %.2Lf\n", a, b, c);

    a = 24.33E5;
    b = 24.33E5;
    c = 24.33E5;
    printf("%.2f, %.2f, %.2Lf\n", a, b, c);

    a = M_PI;
    b = M_PI;
    c = M_PI;
    printf("%.2f, %.2f, %.2Lf\n", a, b, c);

    a = M_E;
    b = M_E;
    c = M_E;
    printf("%.2f, %.2f, %.2Lf\n", a, b, c);

    a = sqrt(5);
    b = sqrt(5);
    c = sqrt(5);
    printf("%.2f, %.2f, %.2Lf\n", a, b, c);

    a = log(100);
    b = log(100);
    c = log(100);
    printf("%.2f, %.2f, %.2Lf\n", a, b, c);
}