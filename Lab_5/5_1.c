// 5.1
#include <stdio.h>

int main()
{
    double a;
    printf("a = ");
    scanf("%lf", &a);

    double b = 1;
    int k = 1;
    while(b <= a)
    {
        k += 1;
        b += (double) 1 / k;
    }
    printf("a) %lf\n", b);
    printf("b) %u\n", k);
}