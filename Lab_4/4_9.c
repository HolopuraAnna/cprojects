// 4.9
#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%u", &n);

    int r = 0;
    int k = 1;
    while (k <= n)
    {
        r += 1;
        k *= 2;
    }

    printf("r = %u\n2^r = %u", r, k);
}