// 14.13
#include <iostream>
#include <fstream>
using namespace std;

char replace(char a, int n)
{
    string alphabet= "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < alphabet.length(); i++)
    {
        if (a == alphabet[i])
        {
            if (i + n < alphabet.length()) a = alphabet[i+n];
            else a = alphabet[i+n-alphabet.length()];
            return a;
        }
    }
    return a;
}

int main()
{
    int n = 5;
    fstream f;
    f.open("file.txt", ios::in);
    string line;
    string text[100];
    int h = 0;
    while (f)
    {
        getline(f, line);
        for (int i = 0; i < line.length(); i++)
        {
            line[i] = replace(line[i], n);
        }
        text[h] = line;
        h++;
    }
    f.close();

    fstream fl;
    fl.open("file.txt", ios::out | ios::trunc);
    for (int i = 0; i <= h-1; i++)
        {
            fl << text[i] << "\n";
        }

    fl.close();
}