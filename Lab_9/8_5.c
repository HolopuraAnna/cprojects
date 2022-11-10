// 8.5
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

void transposicion(int n, double matrix[n][n])
{
    double t;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            t  = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = t;
        }
    }
}

int main()
{
    int n;
    printf("n =");
    scanf("%i", &n);
    double matrix[n][n];

    inpt(n, matrix);
    printf("Matrix:\n");
    outpt(n, matrix);
    printf("Transposicion:\n");
    transposicion(n, matrix);
    outpt(n, matrix);
}