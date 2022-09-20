// 1_4

#include <stdio.h>

int main()
{
    float y = 6.673 * 1e-11;
    float m1, m2, r, F;
    printf("Input m1 m2 r\n");
    scanf("%f, %f, %f", &m1, &m2, &r);

    F = y * m1 * m2 / (r*r);

    printf("F=%e", F);
}