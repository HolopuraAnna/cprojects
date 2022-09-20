// 1_5

#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);

    // x^4 in 2 operations
    float x1 = x * x; // x^2
    float x2 = x1 * x1; // x^4
    printf("x^4 = %f\n", x2);

    // x^6 in 3 operations
    x1 = x * x; // x^2
    x2 = x1 * x1; // x^4
    float x3 = x2 * x1; // x^6
    printf("x^6 = %f\n", x3);

    // x^9 in 4 operations
    x1 = x * x; // x^2
    x2 = x1 * x; // x^3
    x3 = x2 * x2; // x^6
    float x4 = x3 * x2; // x^9
    printf("x^9 = %f\n", x4);

    // x^15 in 5 operations
    x1 = x * x; // x^2
    x2 = x1 * x; // x^3
    x3 = x2 * x2; // x^6
    x4 = x3 * x3; // x^12
    float x5 = x4 * x2; // x^15
    printf("x^15 = %f\n", x5);

    // x^28 in 6 operations
    x1 = x * x; // x^2
    x2 = x1 * x1; // x^4
    x3 = x2 * x2; // x^8
    x4 = x3 * x3; // x^16
    x5 = x4 * x3; // x^24
    float x6 = x5 * x2; // x^28
    printf("x^28 = %f\n", x6);

    // x^64 in 6 operations
    x1 = x * x; // x^2
    x2 = x1 * x1; // x^4
    x3 = x2 * x2; // x^8
    x4 = x3 * x3; // x^16
    x5 = x4 * x4; // x^32
    x6 = x5 * x5; // x^64
    printf("x^64 = %f\n", x6);
}