// 8.6
#include <stdio.h>

double sum(int n, int m, int k, double matrix[n][m])
{
    double s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i-j) == k)
            {
                s += matrix[i][j];
            }
        }
    }
    return s;
}

void inpt(int n, int m, double matrix[m][n])
{
    double t;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("M[%i][%i] = ", i, j);
            scanf("%lf", &t);
            matrix[i][j] = t;
        }
    }
}

void outpt(int n, int m, double matrix[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, m, k;
    printf("n m k =");
    scanf("%i %i %i", &n, &m, &k);
    double matrix[n][m];

    inpt(m, n, matrix);
    printf("Matrix:\n");
    outpt(m, n, matrix);
    printf("Sum = %lf\n", sum(m, n, k, matrix));
}