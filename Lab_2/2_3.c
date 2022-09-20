// 2.3
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Input a b c\n");
    scanf("%f %f %f", &a, &b, &c);

    float p = (a + b + c) / 2;
    float S = sqrt(p * (p-a) * (p-b) * (p-c));
    printf("S = %f", S);
}