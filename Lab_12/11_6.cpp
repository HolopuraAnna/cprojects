// 11.6.д
#include <fstream>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

int d(int* a, int n)
{
    int k = 1;
    int c = 1;
    for (int i = 1; i < n; i++)
    {
        if (*(a+i) > *(a+i-1)) c++;
        else
        {
            if (c > k) k = c;
            c = 1;
        }
    }
    if (c > k) c++;
    return k;
}

int main()
{
    fstream f;
    string line;
    f.open("file.txt");
    getline(f, line);
    int n = line.length();
    int numbers[n];
    string s;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (line[i] == ' ') k++;
        else
        {
            s = line[i];
            if ((line[i-1] == ' ') || (i == 0)) numbers[k] = stoi(s);
            else numbers[k] = numbers[k] * 10 + stoi(s);
        }
    }
    k++;

    f.close();
    int *a = &numbers[0];
    cout << "\n" << "d) " << d(a, k);
}