// 2.6
#include <stdio.h>
#include <math.h>

float square (float a, float b, float c)
{
    float p = (a + b + c) / 2;
    return sqrt(p * (p-a) * (p-b) * (p-c));
}

int main()
{
    float a, b, c, r;
    printf("Input a, b, r\n");
    scanf("%f %f %f", &a, &b, &r);
    c = M_PI * 2 - a - b;
    float c1 = 4 * r * r * (sin(a)/sin(c) + sin(b)/sin(c) + 1);
    float c2 = (sin(b)/sin(c) + 1) * (sin(a)/sin(c) + 1) * (sin(a)/sin(c) + sin(b)/sin(c));
    float C = sqrt(c1 / c2);
    float A = C * sin(a) / sin(c);
    float B = C * sin(b) / sin(c);
    printf("S = %f", square(A, B, C));
}