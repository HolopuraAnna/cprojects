// 9.4
#include <stdio.h>
#include <stdlib.h>

double* create_array(int n)
{
    double *ptr;
    if (!(ptr = (double*)malloc(n * sizeof(ptr))))
    {
        printf("Error: can`t allocate memmory\n");
        return NULL;
    }
    return ptr;
}

void delete_array(double* ptr)
{
    free(ptr);
}

void input_array(double* ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("array[%i] = ", i);
        scanf("%lf", (ptr + i));
    }
}

int main()
{   
    int n, m;
    double *ptr_n, *ptr_m;
    printf("Number of elements in first array: ");
    scanf("%i", &n);
    printf("Input first array\n");
    ptr_n = create_array(n);
    input_array(ptr_n, n);
    printf("Number of elements in second array: ");
    scanf("%i", &m);
    printf("Input second array\n");
    ptr_m = create_array(m);
    input_array(ptr_m, m);
    if (m==n)
    {
        double *ptr_k;
        ptr_k = create_array(m);
        printf("First array - second array\n");
        for (int i = 0; i < m; i++)
        {
            *(ptr_k + i) = *(ptr_n + i) - *(ptr_m + i);
            printf(" %lf\n", *(ptr_k + i));
        }
        delete_array(ptr_k);
    }
    else
    {
        printf("Different sizes!");
    }
    delete_array(ptr_m);
    delete_array(ptr_n);
}