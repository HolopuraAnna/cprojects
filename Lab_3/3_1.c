// 3.1
#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    printf("write a 3-digit number\n");
    scanf("%u", &n);
    if ((n>=1000) || (n<100)){
        printf("%u isn't a 3-digit number\n", n);
        return 0;
    }

    int c = n % 10;
    int b = (n/10) % 10;
    int a = n / 100;

    printf("%u, %u, %u\n", a, b, c);
    printf("sum = %u\n", a+b+c);
    printf("reversed = %u%u%u\n", c, b, a);

    return 0;
}