// 9.9.ж
#include <stdio.h>
#include <stdlib.h>

double** matrix(int n, int m)
{
    double **ptr;
    
    ptr = (double**)malloc(n * sizeof(double*));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = (double*)malloc(m * sizeof(double));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        ptr[i][j] = 0;
    }
    
    return ptr;
}

void free_matrix(double **ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(ptr[i]);
    }
    free(ptr);
}

void create_matrix(double** a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = (double)rand() * ( 100 - (-100) ) / (double)RAND_MAX + (-100);
        }
    }    
}

void showmatrix(double** a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%lf ", a[i][j]);
        }
        printf("\n");
    }
}

void add_columns(double** a, int n, int m, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            a[i][m+j] = 0;
        }
    }
}

int main()
{
    int n = 4;
    int m = 3;
    int k = 2;
    double **ptr = matrix(n, m);

    create_matrix(ptr, n, m);
    printf("matrix:\n");
    showmatrix(ptr, n, m);
    add_columns(ptr, n, m, k);
    printf("matrix with new columns:\n");
    showmatrix(ptr, n, m+k);
    free_matrix(ptr, n);
}