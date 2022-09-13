// 1_7

#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    printf("Input x\n");
    scanf("%f", &x);

    int a1 = (int) x;
    float a2 = x - a1;
    int a3;
    if (a2 < 0.5)
    {
        a3 = a1;
    }
    else
    {
        a3 = a1 + 1;
    }

    int b1 = floor(x);
    float b2 = ceil(x);
    int b3 = round(x);

    printf("whole part = %i = %i\n", a1, b1);
    printf("fractional part = %f = %f\n", a2, x - b1);
    printf("min whole number bigger than x = %i = %f\n", a1 + 1, b2);
    printf("max whole number lower than x = %i = %i\n", a1, b1);
    printf("rounded x = %i = %i\n", a3, b3);
}