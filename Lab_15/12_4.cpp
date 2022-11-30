// 12.4
#include <iostream>
#include <cstdint>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    
    int* m = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }

    const char fname* = "file.txt";
    fstream f(fname);

    if (f.bad())
    {
        cout << " file " << fname << " could not be opened!\n";
        delete[] m;
        return;
    }

    double tmp;
    int* x = new int [n];
    int i = 0;
    while(f >> tmp)
    {
        x[i++] = tmp;
        if(i > n) break;
    }

    if(i != n)
    {
        cout << " file " << fname << " has " << i << " data";
        f.close();
        delete[] x;
        delete[] m;
        return;
    }

    f.close();

    fstream g("file2.txt");

    for (int i = 0; i < n; i++)
    {
        g << pow(x[i], m[i]) << " ";
    }
    g.close();

    delete[] x;
    delete[] m;
}