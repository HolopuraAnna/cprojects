// 8.1
#include <stdio.h>

void outpt(int a[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }
}

void replace(int a[3][3], int n, int m)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (a[i][j] == m)
            {
                a[i][j] = n;
                break;
            }
        }
    }
}

int main()
{
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int n,m;

    printf("N = ");
    scanf("%i", &n);
    printf("M = ");
    scanf("%i", &m);

    replace(matrix, n,m);
    outpt(matrix);
}

