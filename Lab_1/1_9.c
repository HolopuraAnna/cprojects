// 1_9

#include <stdio.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    printf("arthimetical mean = %e = %f\n", (a+b)/2, (a+b)/2);
    printf("harmonic mean = %e = %f\n", 2/(1/a +1/b), 2/(1/a +1/b));
}