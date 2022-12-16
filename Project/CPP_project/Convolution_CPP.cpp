// project 32 convolution
// Holopura Anna, комп'ютерна математика 1, 2 курс
/* На базі структури (класу) Tensor реалізувати методи конволюцій та
оберених конволюцій, що використовуються при машинному аналізі
зображень та розпізнаванні. При цьому ці конволюції влючають роботу з
щонайменше чотирма варіантами різних паддінгів. */
// всі функції та типи даних на CPP

#include "Convolution_CPP.h"

int** Tensor::create()
{
    matrix = new int*[row];
    for(int i = 0; i < row; ++i)
    {
        matrix[i] = new int[col];
        for(int j = 0; j < col; j++) matrix[i][j] = 0;
    }
    return matrix;
}

void Tensor::del()
{
    for (int i = 0; i < row; i++)
    {
        delete matrix[i];
    }
    delete matrix;
}

int** Tensor::inp()
{
    Tensor::inp_row();
    Tensor::inp_col();
    Tensor::create();

    for (int i = 0; i < row; i++)
    {
        cout << "Line " << i << ": ";
        for (int j = 0; j < col; j++)
        {
            scanf("%i", &matrix[i][j]);
        }
    }
    return matrix;
}

void Tensor::outp()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int Tensor::inp_row()
{
    cout << "Number of rows: ";
    cin >> row;
    return row;
}

int Tensor::inp_col()
{
    cout << "Number of columns: ";
    cin >> col;
    return col;
}

int** Tensor::read(string filename)
{
    row = Tensor::rows_in_file(filename);
    col = Tensor::columns_in_file(filename);
    matrix = Tensor::create();
    string line;
    string tmp = "";
    int j;
    fstream fl (filename);
    for (int i = 0; i < row; i++)
    {
        j = 0;
        getline(fl, line);
        for (char c : line)
        {
            if (c != ' ') tmp.push_back(c);
            else
            {
                matrix[i][j] = stoi(tmp);
                tmp = "";
                j++;
            }
        }
        if (tmp != "")
        {
            matrix[i][j] = stoi(tmp);
            tmp = "";
        }
    }
    fl.close();
    return matrix;
}

int Tensor::rows_in_file(string filename)
{
    int row = 0;
    string line;
    ifstream fl (filename);
	while (getline(fl, line))
    {
        if (line == "") return row;
        row++;
    }
    fl.close();
	return row;
}

int Tensor::columns_in_file(string filename)
{
    int col = 0;
    string line;
    ifstream fl (filename);
    getline(fl, line);

	for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ') col++;
    }
    col++;
    fl.close();
	return col;
}

void Tensor::write(string filename)
{
    fstream fl (filename);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            fl << matrix[i][j] << " ";
        }
        if (i != row-1) fl << "\n";
    }
}

Tensor Tensor::conv(const Tensor& m)
{
    Tensor matr;
    matr.row = row - m.row + 1;
    matr.col = col - m.col + 1;
    matr.create();

    for (int i = 0; i < matr.row; i++)
    {
        for (int g = 0; g < matr.col; g++)
        {
            for (int j = 0; j < m.row; j++)
            {
                for (int h = 0; h < m.col; h++)
                {
                    matr.matrix[i][g] += matrix[i+j][g+h] * m.matrix[j][h];
                }
            }
        }
    }
    return Tensor(matr);
}

Tensor Tensor::padding(const int p)
{
    Tensor pm;
    pm.row = row + p*2;
    pm.col = col + p*2;
    pm.create();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pm.matrix[i+p][j+p] = matrix[i][j];
        }
    }
    return Tensor(pm);
}

Tensor Tensor::conv_with_padding(const Tensor& m)
{
    cout << "Number of lines adding during the pddding: ";
    int p;
    cin >> p;
    Tensor mp;
    if (p > 0)
    {
        mp = padding(p);
    }
    else
    {
        mp.matrix = matrix;
        mp.row = row;
        mp.col = col;
    }

    Tensor matr;
    matr.row = mp.row - m.row + 1;
    matr.col = mp.col - m.col + 1;
    matr.create();

    for (int i = 0; i < matr.row; i++)
    {
        for (int g = 0; g < matr.col; g++)
        {
            for (int j = 0; j < m.row; j++)
            {
                for (int h = 0; h < m.col; h++)
                {
                    matr.matrix[i][g] += mp.matrix[i+j][g+h] * m.matrix[j][h];
                }
            }
        }
    }
    mp.del();
    return Tensor(matr);
}

Tensor Tensor::circle_conv(const Tensor& m)
{
    cout << "Number of lines adding during the pddding: ";
    int p;
    cin >> p;
    Tensor mp;
    if (p > 0)
    {
        mp = padding(p);
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < mp.col; j++)
            {
                mp.matrix[i][j] = matrix[(row+i-1) % row][(col+j-1) % col];
                mp.matrix[row+p+i][j] = matrix[i][(col+j-1) % col];
            }
        }
        for (int j = 0; j < p; j++)
        {
            for (int i = 1; i < mp.col-1; i++)
            {
                mp.matrix[i][j] = matrix[(row+i-1) % row][(col+j-1) % col];
                mp.matrix[i][col+p+j] = matrix[(row+i-1) % row][j];
            }
        }
    }
    else
    {
        mp.matrix = matrix;
        mp.row = row;
        mp.col = col;
    }

    Tensor matr;
    matr.row = mp.row - m.row + 1;
    matr.col = mp.col - m.col + 1;
    matr.create();

    for (int i = 0; i < matr.row; i++)
    {
        for (int g = 0; g < matr.col; g++)
        {
            for (int j = 0; j < m.row; j++)
            {
                for (int h = 0; h < m.col; h++)
                {
                    matr.matrix[i][g] += mp.matrix[i+j][g+h] * m.matrix[j][h];
                }
            }
        }
    }
    mp.del();
    return Tensor(matr);
}
