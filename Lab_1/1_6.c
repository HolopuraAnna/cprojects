// 1_6

#include <stdio.h>

int main()
{
    float C;
    printf("Input degree Celsius\n");
    scanf("%f", &C);
    float F = 9 * C / 5 + 32;
    printf("F=%g", F);
}