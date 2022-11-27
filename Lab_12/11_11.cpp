// 11.11.д
#include <fstream>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string line;
    fstream t;
    int N = 100;
    t.open("test.txt");
    string names[N];
    int n = 0;
    while (t)
    {
        getline(t, line);
        names[n] = line;
        n++;
    }
    n++;
    t.close();

    double m;
    cout << "m = ";
    cin >> m;

    double baggage[3];
    fstream f;
    f.open("file.txt");
    int h = 0;
    int q;
    string q1 = "";
    while (f)
    {
        getline(f, line);
        line.push_back(' ');
        int k = 0;
        int c = 0;
        string s;
        while (k < 3)
        {
            if (line[c] == ' ') k++;
            else
            {
                s = line[c];
                if ((line[c-1] == ' ') || (c == 0)) baggage[k] = stoi(s);
                else baggage[k] = baggage[k] * 10 + stoi(s);
            }
            c++;
        }
        h++;
        q = baggage[0] - 1;
        if ((baggage[1] == 1) && (baggage[2] >= m) && (names[q] != q1))
        {
            cout << names[q] << endl;
            q1 = names[q];
        }
    }

    f.close();
}