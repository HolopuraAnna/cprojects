// 2.4.б

#include <stdio.h>
#include <math.h>

double func(double x){
    double s1 = 1;
    double s2 = s1 * x;
    double s3 = s2 * x;
    double s4 = s3 * x;
    double s5 = s4 * x;
    return s1 + s2 + s3 + s4 + s5;
}

int main()
{
    double x;
    scanf("%lf", &x);
    
    double s = func(x);
    printf("S = %lf\n", s);
}