// 3.6
#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;

    printf("a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double maxAbs = fabs(a);
    double minAbs = fabs(a);

    if(fabs(b) > maxAbs){
        maxAbs = fabs(b);
    }
    if(fabs(c) > maxAbs){
        maxAbs = fabs(c);
    }
    if(fabs(b) < minAbs){
        minAbs = fabs(b);
    }
    if(fabs(c) < minAbs){
        minAbs = fabs(c);
    }

    printf("MaxAbs : %lf\n", maxAbs);
    printf("MinAbs : %lf\n", minAbs);
}