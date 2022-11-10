// 7.8.є
#include <stdio.h>
void inpt(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%i] = ", i);
        scanf("%i", (p + i));
    }
}

int max(int *p, int n)
{
    int m = *p;
    for (int i = 0; i < n; i++)
    {
        if (m < *(p + i))
        {
            m = *(p + i);
        }
    }
    return m;
}

int fib(int *p, int n, int a)
{
    int f1 = 1;
    int f2 = 1;
    int f;
    int k = 0;
    while (f2 <= a)
    {
        for (int i = 0; i < n; i++)
        {
            if (f2 == *(p + i)) k++;
        }
        f = f2;
        f2 += f1;
        f1 = f;
    }
    return k;
}

int main()
{
    int N;
    printf("N = ");
    scanf("%i", &N);
    
    int a[N];
    int *p = &a[0];
    inpt(p, N);
    printf("%i", fib(p, N, max(p, N)));
}