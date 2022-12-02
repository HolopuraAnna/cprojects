// 12.14
#include <iostream>

using namespace std;

long long unsigned f(long long unsigned n)
{
    long long unsigned a = n;
    long long unsigned i = 0;
    while(a != 1)
    {
        if(a % 2 == 0)
        {
            a = a / 2;
        }
        else
        {
            a = 3 * a + 1;
        }
        i++;
    }
    return i;
}

int main()
{
    long long unsigned n;
    cout << "n = ";
    cin >> n;

    cout << n << "\n";
    cout << f(n);
}