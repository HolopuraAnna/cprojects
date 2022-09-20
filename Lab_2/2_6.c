// 2.6
#include <stdio.h>
#include <math.h>

float length(float a1, float a2, float b1, float b2)
{
    return sqrt((a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2));
}

float square (float a, float b, float c)
{
    float p = (a + b + c) / 2;
    return sqrt(p * (p-a) * (p-b) * (p-c));
}

int main()
{
    float a1, a2, b1, b2, c1, c2;
    scanf("%f %f", &a1, &a2);
    scanf("%f %f", &b1, &b2);
    scanf("%f %f", &c1, &c2);
    float a = length(a1, a2, b1, b2);
    float b = length(b1, b2, c1, c2);
    float c = length(c1, c2, a1, a2);
    printf("S = %f", square(a, b, c));
}