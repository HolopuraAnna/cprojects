// 8.2
#include <stdio.h>

void outpt(double m[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%lf ", m[i][j]);
        }
        printf("\n");
    }
}

void replace(double m[3][3], unsigned i, unsigned j, double a)
{
    if ((i >= 3)||(j >= 3)||(i < 0)||(j < 0))
    {
        printf("wrond indeces\n");
    }
    else
    {
        m[i][j] = a;
        outpt(m);
    }
}

int main()
{
    double matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int i, j;
    double a;
    printf("i j a = ");
    scanf("%i %i %lf", &i, &j, &a);

    replace(matrix, i, j, a);
}