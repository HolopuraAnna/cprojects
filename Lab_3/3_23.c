// 3.23.в
#include <stdio.h>

double leakyReLu(double x, double a)
{
    if (x < 0.){
        return a * x;
    }
    else {
        return 0;
    }
}

double leakyReLu__derivative(double x, double a)
{
    if (x < 0.){
        return a;
    }
    else {
        return 0;
    }
}

int main()
{
    double x, a;
    printf("input x a: ");
    scanf("%lf %lf", &x, &a);

    printf("leakyReLu(x,a) = %lf\n", leakyReLu(x, a));
    printf("leakyReLu'(x,a) = %lf\n", leakyReLu__derivative(x, a));
}