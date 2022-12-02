// 12.5
#include <iostream>
#include <cstdint>
#include <fstream>
#include <cmath>

using namespace std;

void task()
{
    char fname[255];

    cout << "file name:";
    cin >> fname;

    fstream f;
    f.open(fname, ios_base::in);

    if (!f)
    {
        return;
    }

    long long unsigned mas[2000];
    int i = 0;
    long long unsigned x;
    while (f >> x)
    {
        mas[i] = x;
        i++;
    }

    f.close();

    for (int j = i-1; j >= 0; j--)
    {
        long double tmp = sqrt(mas[j]);
        cout.precision();
        cout << fixed << tmp << "\n";
    }
}

int main()
{
    task();
}