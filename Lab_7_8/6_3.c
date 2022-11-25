// 6.3
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t m;
    uint8_t j;

    printf("m = ");
    scanf("%llu", &m);
    
    printf("j = ");
    scanf("%hhu", &j);

    m = m & ~(1<<(j-1));
    
    printf("m = %llu", m);
}