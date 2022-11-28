// 11.6
#include <fstream>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

int p(int n)
{
	for (int i = 2; i <= sqrt(n); i++) 
	{
		if (n % i == 0) 
		{
			return 0;
		}
	}
	return 1;

}

int parn(double n)
{
	for (int i = 1; i < n+2; i += 2)
	{
		if (n == i) return 0;
	}
	return 1;
}

int a(int* a, int n)
{
	int rez = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(a+i) % 2 == 0) rez += 1;
	}
	return rez;
}

int b(int* a, int n)
{
	int rez = 0;
	for (int i = 0; i < n; i++)
	{
		if (parn(sqrt(*(a+i))) == 0)
		{
			rez += 1;
		}
	}
	return rez;
}

int v(int* a, int n)
{
	int x = 0, y = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(a+i) % 2 == 0)
		{
			if (*(a+i) < x) x = *(a+i);
		}
		else{
			if (*(a+i) > y) y = *(a+i);
		}
	}
	return fabs(x - y);
}

int g(int* a, int n)
{
	int rez = 0;
	for (int i = 0; i < n; i++)
	{
		if (p(*(a+i)) == 1) rez += 1;
	}
	return rez;
}

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
    f.open("test.txt");
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

    int *m = &numbers[0];
    cout << "\n";
	cout << "a) " << a(m, k) << endl;
	cout << "b) " << b(m, k) << endl;
	cout << "v) " << v(m, k) << endl;
	cout << "g) " << g(m, k) << endl;
	cout << "d) " << d(m, k) << endl;
}