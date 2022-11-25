// 9.9.ш
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

int min_line(double** a, int n, int m)
{
    double sum;
    double min = 10000 * n;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j] * a[i][j];
        }
        if(sum <= min)
        {
            min = sum;
            l = i;
        }
    }
    return l;
}

void add_line(double** a, int n, int m, int k)
{
    a[n] = (double*)malloc(m * sizeof(double));
    double *b = a[n];
    for(int i = n; i > k; i--)
    {
        a[i] = a[i-1];
    }
    a[k] = b;
}

int main()
{
    int n = 4;
    int m = 3;
    double **ptr = matrix(n, m);

    create_matrix(ptr, n, m);
    printf("matrix:\n");
    showmatrix(ptr, n, m);
    printf("line with min norma:\n");
    printf("%u\n", min_line(ptr, n, m));
    printf("matrix with new line:\n");
    add_line(ptr, n, m, min_line(ptr, n, m));
    showmatrix(ptr, n+1, m);
    free_matrix(ptr, n);
}