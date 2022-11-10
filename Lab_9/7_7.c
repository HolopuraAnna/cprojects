// 7.7
#include <stdio.h>
#include <math.h>
#define N 20

void inpt(int *p)
{
    double g = 1;
    double h = 0;
    int i = 0;
    for (; i < N; i++)
    {
        printf("a[%i]=", i);
        scanf("%u", (p + i));
        if (*(p + i) == 0)
        {
            break;
        }
        g *= *(p + i);
        h += (double) 1 / (*(p + i));
    }
    printf("geometric mean = %lf\n", pow(g, (double) 1 / i));
    printf("harmonic mean = %lf\n", i / h);
}

int main()
{
    int a[N];
    int *p = &a[0];
    inpt(p);
}