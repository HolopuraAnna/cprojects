// 4.2
#include <stdio.h>

int main()
{
    int n;
    printf("input n: ");
    scanf("%u", &n);

    int i;
    printf("%u! = 1", n);
    for(i=2; i<=n; i++)
    {
        printf("*%u", i);
    }

    printf("\n%u! = 1", n);
    for(i=n; i>1; i--)
    {
        printf("*%u", n-i+2);
    }
}