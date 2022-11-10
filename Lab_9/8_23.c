// 8.23
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

void turn(int n, double matrix[2*n][2*n])
{
    double t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            t = matrix[i][j];
            matrix[i][j] = matrix[2*n - i - 1][j];
            matrix[2*n - i - 1][j] = t;
        }
    }
}

int main()
{
    int n;
    printf("n =");
    scanf("%i", &n);
    double matrix[2*n][2*n];

    inpt(2*n, matrix);
    printf("Matrix:\n");
    outpt(2*n, matrix);
    printf("Turned matrix:\n");
    transposicion(2*n, matrix);
    turn(n, matrix);
    outpt(2*n, matrix);
}
