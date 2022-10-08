// 4.22
#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%u", &n);

    int k = 0;
    double a, b, c;
    for (int i=0; i<n; i++)
    {
        if (i > 1)
        {
            a = b;
            if (i > 0)
            {
                b = c;
            }
        }
        printf("Imput %u number: ", i+1);
        scanf("%lf", &c);

        if (i > 1)
        {
            if ((b > a) && (b > c))
            {
                k ++;
            }
        }
    }

    printf("%u numbers", k);
}