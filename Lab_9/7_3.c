// 7.3
#include <stdio.h>
#define N 10
#define _USE_MATH_DEFINES
#include <math.h>

double sum(double arr[N])
{
    double s = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > M_E)
        {
             s += arr[i];
        }
    }
    return s;
}

int main()
{
    double arr[N];
    for (int i = 0; i < N; i++)
    {
        printf("arr[%i] = ", i);
        scanf("%lf", &arr[i]);
    }
    double s = sum(arr);
    printf("sum = %lf", s);
}