// project 32 convolution
// Holopura Anna, комп'ютерна математика 1, 2 курс
/* На базі структури (класу) Tensor реалізувати методи конволюцій та
оберених конволюцій, що використовуються при машинному аналізі
зображень та розпізнаванні. При цьому ці конволюції влючають роботу з
щонайменше чотирма варіантами різних паддінгів. */
// всі функції та типи даних на C

#include "Convolution_C.h"

int** create(int n, int m)
{
    int **ptr;
    
    ptr = (int**)malloc(n * sizeof(int*)); // Виділення пам'яті під масив покажчиків на покажчики Дабл

    for (int i = 0; i < n; i++)
    {
        ptr[i] = (int*)malloc(m * sizeof(int)); // Виділення пам'яті під масив Даблов
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        ptr[i][j] = 0;
    }
    
    return ptr;
}

void del(Tensor_c* t)
{
    for (int i = 0; i < t->row; i++)
    {
        free(t->matrix[i]);
    }
    free(t->matrix);
}

void inp(Tensor_c* t)
{
    printf("Number of rows: ");
    scanf("%i", &t->row);
    printf("Number of columns: ");
    scanf("%i", &t->col);
    t->matrix = create(t->row, t->col);

    for (int i = 0; i < t->row; i++)
    {
        printf("Line %i: ", i);
        for (int j = 0; j < t->col; j++)
        {
            scanf("%i", &t->matrix[i][j]);
        }
    }
}

void outp(Tensor_c* t)
{
    for (int i = 0; i < t->row; i++)
    {
        for (int j = 0; j < t->col; j++)
        {
            printf("%i ", t->matrix[i][j]);
        }
        printf("\n");
    }
}

Tensor_c conv_with_padding(Tensor_c* t, Tensor_c* m)
{
    printf("Number of lines adding during the pddding: ");
    int p;
    scanf("%i", p);
    Tensor_c mp;
    if (p > 0)
    {
        mp.row = t->row + p*2;
        mp.col = t->col + p*2;
        mp.matrix = create(mp.row, mp.col);
        for (int i = 0; i < t->row; i++)
        {
            for (int j = 0; j < t->col; j++)
            {
                mp.matrix[i+p][j+p] = t->matrix[i][j];
            }
        }
    }
    else
    {
        mp.matrix = t->matrix;
        mp.row = t->row;
        mp.col = t->col;
    }

    Tensor_c matr;
    matr.row = mp.row - m->row + 1;
    matr.col = mp.col - m->col + 1;
    matr.matrix = create(matr.row, matr.col);

    for (int i = 0; i < matr.row; i++)
    {
        for (int g = 0; g < matr.col; g++)
        {
            for (int j = 0; j < m->row; j++)
            {
                for (int h = 0; h < m->col; h++)
                {
                    matr.matrix[i][g] += mp.matrix[i+j][g+h] * m->matrix[j][h];
                }
            }
        }
    }
    del(&mp);
    return matr;
}

Tensor_c conv(Tensor_c* t, Tensor_c* m)
{
    Tensor_c matr;
    matr.row = t->row - m->row + 1;
    matr.col = t->col - m->col + 1;
    matr.matrix = create(matr.row, matr.col);

    for (int i = 0; i < matr.row; i++)
    {
        for (int g = 0; g < matr.col; g++)
        {
            for (int j = 0; j < m->row; j++)
            {
                for (int h = 0; h < m->col; h++)
                {
                    matr.matrix[i][g] += t->matrix[i+j][g+h] * m->matrix[j][h];
                }
            }
        }
    }
    return matr;
}

Tensor_c circle_conv(Tensor_c* t, Tensor_c* m)
{
    printf("Number of lines adding during the pddding: ");
    int p;
    scanf("%i", p);
    Tensor_c mp;
    if (p > 0)
    {
        mp.row = t->row + p*2;
        mp.col = t->col + p*2;
        mp.matrix = create(mp.row, mp.col);
        for (int i = 0; i < t->row; i++)
        {
            for (int j = 0; j < t->col; j++)
            {
                mp.matrix[i+p][j+p] = t->matrix[i][j];
            }
        }

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < mp.col; j++)
            {
                mp.matrix[i][j] = t->matrix[(t->row+i-1) % t->row][(t->col+j-1) % t->col];
                mp.matrix[t->row+p+i][j] = t->matrix[i][(t->col+j-1) % t->col];
            }
        }
        for (int j = 0; j < p; j++)
        {
            for (int i = 1; i < mp.col-1; i++)
            {
                mp.matrix[i][j] = t->matrix[(t->row+i-1) % t->row][(t->col+j-1) % t->col];
                mp.matrix[i][t->col+p+j] = t->matrix[(t->row+i-1) % t->row][j];
            }
        }
    }
    else
    {
        mp.matrix = t->matrix;
        mp.row = t->row;
        mp.col = t->col;
    }

    Tensor_c matr;
    matr.row = mp.row - m->row + 1;
    matr.col = mp.col - m->col + 1;
    matr.matrix = create(matr.row, matr.col);

    for (int i = 0; i < matr.row; i++)
    {
        for (int g = 0; g < matr.col; g++)
        {
            for (int j = 0; j < m->row; j++)
            {
                for (int h = 0; h < m->col; h++)
                {
                    matr.matrix[i][g] += mp.matrix[i+j][g+h] * m->matrix[j][h];
                }
            }
        }
    }
    del(&mp);
    return matr;
}
