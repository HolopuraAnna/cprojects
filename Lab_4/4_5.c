// 4.5
#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%u", &n);

    int y = 1;
    if (n % 2 == 0)
    {
        for (int i=2; i<=n; i+=2)
        {
            y *= i;
        }
    }
    else
    {
        for (int i=1; i<=n; i+=2)
        {
            y *= i;
        }
    }

    printf("%u!! = %u", n, y);
}