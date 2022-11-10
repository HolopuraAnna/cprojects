// 7.6
#include <stdio.h>
#include <math.h>

void inpt(double *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%i] = ", i);
        scanf("%lf", (p + i));
    }
}

void show(double *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%lf ", *(p + i));
    }
    printf("\n");
}

void sum(double *s, double *p1, double *p2, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(s + i) = *(p1 + i) + *(p2 + i);
    }
}

double multiplication(double *p1, double *p2, int n)
{
    double rez = 0;
    for(int i = 0; i < n; i++)
    {
        rez += (*(p1 + i)) * (*(p2 + i));
    }
    return rez;
}

int main()
{
    int n;
    printf("n = ");
    scanf("%i", &n);

    double v1[n];
    double v2[n];
    double vs[n];

    printf("1 vector :\n");
    inpt(v1, n);
    printf("2 vector :\n");
    inpt(v2, n);

    sum(vs, v1, v2, n);
    printf("Sum : ");
    show(vs, n);
    printf("Scalar product = %lf", multiplication(v1, v2, n));
}