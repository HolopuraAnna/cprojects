// 7.4
#include <stdio.h>
#define N 5

void inpt(int *p)
{
    for (int i = 0; i < N; i++)
    {
        printf("a[%i] = ", i);
        scanf("%i", (p + i));
    }
}

void mx(int *p)
{
    int ans = *p;
    for (int i = 0; i < N; i++)
    {
        if (ans < *(p+i))
        {
            ans = *(p+i);
        }
    }
    printf("Max = %i\n", ans);
}

void show(int *p)
{
    for (int i = 0; i < N; i++)
    {
        printf("%i ", *(p+i));
    }
}

int main()
{
    int a[N];
    int *b = &a[0];
    inpt(b);
    mx(b);
    show(b);
}