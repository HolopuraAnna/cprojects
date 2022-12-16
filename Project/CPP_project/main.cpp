// project 32 convolution
// Holopura Anna, комп'ютерна математика 1, 2 курс
/* На базі структури (класу) Tensor реалізувати методи конволюцій та
оберених конволюцій, що використовуються при машинному аналізі
зображень та розпізнаванні. При цьому ці конволюції влючають роботу з
щонайменше чотирма варіантами різних паддінгів. */
// виклик функцій з Convolution_CPP.cpp та перевірка їх роботи

#include "Convolution_CPP.cpp"

int main()
{
    Tensor m1;
    Tensor m2;
    Tensor c1;
    Tensor c2;
    Tensor c3;

    char s;
    string file;
    cout << "Write 'w' to input the 1 matrix\n";
    cout << "Write 'f' to read the 1 matrix from file\n";
    cin >> s;
    while ((s != 'w') && (s != 'f'))
    {
        cout << "You have to input 'w' or 'f'";
        cin >> s;
    }
    if (s == 'w') m1.inp();
    if (s == 'f')
    {
        cout << "Write name of the file\n";
        cin >> file;
        m1.read(file);
    }

    cout << "Write 'w' to input the 2 matrix\n";
    cout << "Write 'f' to read the 2 matrix from file\n";
    cin >> s;
    while ((s != 'w') && (s != 'f'))
    {
        cout << "You have to input 'w' or 'f'";
        cin >> s;
    }
    if (s == 'w') m2.inp();
    if (s == 'f')
    {
        cout << "Write name of the file\n";
        cin >> file;
        m2.read(file);
    }


    cout << "Convolution\n";
    c1 = m1.conv(m2);
    c1.outp();

    cout << "Write name of the file to save convolution\n";
    cin >> file;
    c1.write(file);

    c1.del();


    cout << "Convolution with padding\n";
    c2 = m1.conv_with_padding(m2);
    c2.outp();

    cout << "Write name of the file to save convolution\n";
    cin >> file;
    c2.write(file);

    c2.del();

    cout << "Circle convolution\n";
    c3 = m1.circle_conv(m2);
    c3.outp();

    cout << "Write name of the file to save convolution\n";
    cin >> file;
    c3.write(file);

    m1.del();
    m2.del();
    c3.del();
}