// project 32 convolution
// Holopura Anna, комп'ютерна математика 1, 2 курс
/* На базі структури (класу) Tensor реалізувати методи конволюцій та
оберених конволюцій, що використовуються при машинному аналізі
зображень та розпізнаванні. При цьому ці конволюції влючають роботу з
щонайменше чотирма варіантами різних паддінгів. */
// заголовочний файл для Convolution.c

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Tensor
{
    private:
    int** matrix;
    int row, col;

    public:
    Tensor(){}
    Tensor(int** my_matrix, int n, int m)
    {
        matrix = my_matrix;
        row = n;
        col = m;
    }

    int** create(); // create matrix row*col
    void del(); // delete matrix

    int** inp(); // input matrix
    void outp(); // output matrix
    int inp_row(); // input number of rows in matrix
    int inp_col(); // input number of columns in matrix

    int** read(string filename); // read matrix from the file
    void write(string filename); // write matrix in file
    int rows_in_file(string filename); // calculation number of rows in matrix at the file
    int columns_in_file(string filename); // calculation number of columns in matrix at the file
    
    Tensor conv(const Tensor& m); // convolution
    Tensor circle_conv(const Tensor& m); // circle convolution
    Tensor padding(const int p); // padding with inputing number of adding lines
    Tensor conv_with_padding(const Tensor& m); // convolution with padding
};