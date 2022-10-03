// 3.2
#include <stdio.h>

int main(){
    int n;
    printf("write a 3-digit number:   ");
    scanf("%u", &n);
    if ((n>=1000) || (n<100)){
        printf("%u isn't a 3-digit number\n", n);
        return 0;
    }

    int c = n % 10;
    int b = (n/10) % 10;
    int a = n / 100;

    if ((a != b) && (b != c) && (a != c)){
        printf("%u%u%u\n", a, b, c);
        printf("%u%u%u\n", a, c, b);
        printf("%u%u%u\n", c, a, b);
        printf("%u%u%u\n", c, b, a);
        printf("%u%u%u\n", b, c, a);
        printf("%u%u%u\n", b, a, c);
    }

    return 0;
}