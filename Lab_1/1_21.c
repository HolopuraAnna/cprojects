// 1_21

#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);
    printf("-|-|%g|-|-\n", a);
    printf("-|%g|%g|%g|-\n", a, a, a);
    printf("%g|%g|%g|%g|%g\n", a, a, a, a, a);
}