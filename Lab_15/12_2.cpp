// 12.2
#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    char buf[11];
    long long unsigned sums = 0UL, x;

    string s;
    cin >> s;
    buf[10] = '\0';
    int k = 0;
    int i = 0;

    while (i < s.size())
    {
        buf[k++] = s[i++];

        char* err[100];

        if (k >= 10)
        {
            cout << buf << "\n";
            k -= 10;
            x = strtoull(buf, err, 10);
            sums += x;
        }
    }

    cout << "sum = " << sums << "\n";
}