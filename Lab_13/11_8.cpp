// 11.8
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int max[n];

    fstream f;
    string line;
    f.open("test.txt");
    getline(f, line);
    int l = line.length();
    int numbers[l];

    string s;
    int k = 0;
    for (int i = 0; i < l; i++)
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

    for (int i = 0; i < k; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    f.close();


    fstream t;
    t.open("file.txt");

    int c;
    int u = 0;
    for (int i = 0; i < k; i++)
    {
        if(u == 4)
        {
            max[4] = numbers[i];
            c = max[0];
            for (int j = 1; j < 5; j++)
            {
                if (max[j] > c) c = max[j];
            }
            u = 0;
            cout << "numbers[" << i << "] = " << numbers[i] << " ";
            t << c << " ";
            cout << "max = " << c << "\n";
        }
        if(u == 3)
        {
            max[3] = numbers[i];
            u = 4;
            cout << "numbers[" << i << "] = " << numbers[i] << " ";
        }
        if(u == 2)
        {
            max[2] = numbers[i];
            u = 3;
            cout << "numbers[" << i << "] = " << numbers[i] << " ";
        }
        if(u == 1)
        {
            max[1] = numbers[i];
            u = 2;
            cout << "numbers[" << i << "] = " << numbers[i] << " ";
        }
        if(u == 0)
        {
            max[0] = numbers[i];
            u = 1;
            cout << "numbers[" << i << "] = " << numbers[i] << " ";
        }
    }

    if (u != 5)
    {
        c = max[0];
        for (int i = 1; i < u; i++)
        {
            if (max[i] > c) c = max[i];
        }
        t << c << " ";
        cout << "max = " << c << "\n";
    }

    t.close();
}