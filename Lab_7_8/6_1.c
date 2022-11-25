// 6.1
#include <stdio.h>
#include <inttypes.h>

int main()
{
    unsigned char n;
    printf("n = ");
    scanf("%hhu", &n);
    long long unsigned m = 1UL << n;
    printf("m = %"PRIu64" %"PRIX64, m, m);
}