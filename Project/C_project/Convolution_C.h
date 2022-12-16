// project 32 convolution
// Holopura Anna, комп'ютерна математика 1, 2 курс
// На базі структури (класу) Tensor реалізувати методи конволюцій та
//оберених конволюцій, що використовуються при машинному аналізі
//зображень та розпізнаванні. При цьому ці конволюції влючають роботу з
//щонайменше чотирма варіантами різних паддінгів.
// заголовочний файл для Convolution.c

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int** matrix;
    int row;
    int col;
} Tensor_c;

int** create(int n, int m); // create matrix row*col
void del(Tensor_c* t); // delete matrix
void inp(Tensor_c* t); // input matrix
void outp(Tensor_c* t); // output matrix

Tensor_c conv(Tensor_c* t, Tensor_c* m); // convolution
Tensor_c conv_with_padding(Tensor_c* t, Tensor_c* m); // convolution with padding
Tensor_c circle_conv(Tensor_c* t, Tensor_c* m); // circle convolution