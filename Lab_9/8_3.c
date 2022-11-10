// 8.3
#include <stdio.h>

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
    int m, n;
    printf("m n =");
    scanf("%i %i", &m, &n);
    double matrix[m][n];
    if ((m > 20)||(n > 20)) printf("Incorect indeces");
    else
    {
        inpt(n, m, matrix);
        outpt(n, m, matrix);
    }
}

