// 8.7
#include <stdio.h>

void inpt(int n, double matrix[n][n])
{
    double t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("M[%i][%i] = ", i, j);
            scanf("%lf", &t);
            matrix[i][j] = t;
        }
    }
}

void outpt(int n, double matrix[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

double det(int n, double m[n][n])
{
    if (n == 2)
    {
        return m[0][0] * m[1][1] - m[0][1] * m[1][0];

    }
    int s = 1;
    double rez = 0;
    double a[n-1][n-1];
    for (int g = 0; g < n; g++)
    {
    for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j < g) a[i-1][j] = m[i][j];
                if (j > g) a[i-1][j-1] = m[i][j];
            }
        }
        rez += s * m[0][g] * det(n-1, a);
        s *= -1;
    }
    return rez;
}

int main()
{
    int n;
    printf("n = ");
    scanf("%i", &n);
    double matrix[n][n];

    inpt(n, matrix);
    printf("Matrix:\n");
    outpt(n, matrix);
    printf("Det = %lf\n", det(n, matrix));
}