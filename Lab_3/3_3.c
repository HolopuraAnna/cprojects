// 3.3
#include <stdio.h>

int main(){
    int a, b, c;
    unsigned long long res;
    printf("Input a,b,c\n");
    scanf("%d,%d,%d", &a, &b, &c);

    res = (unsigned long long)a * b * c;

    printf("%llu\n", res);

    return 0;
}