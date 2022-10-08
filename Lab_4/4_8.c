// 4.8
#include <stdio.h>

int main()
{
    int m;
    printf("m = ");
    scanf("%u", &m);

    int n = 1;
    int k = -1;
    int t = 0;
    while (n < m)
    {
        t = n;
        n *= 4;
        k += 1;
    }

    printf("k = %u\n4^k = %u", k, t);
}