// 6.2
#include <stdio.h>

int main()
{
    int n;
    unsigned m;
    printf("n = ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%u", &m);
    int res = n | (1 << m);
    printf("r = %d", res);
}