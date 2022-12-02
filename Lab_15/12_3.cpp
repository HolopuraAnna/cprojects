// 12.3
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    
    double x;
    cout.precision(3);
    cout.fill(' ');

    for (x = 1.0; x <= n; x++)
    {
        cout << "++++++";
    }
    cout << std::endl;

    cout.width(3);
    cout << 1 << " ";

    for (x = 2.0; x <= n; x++)
    {
        cout.width(5);
        cout << x << " ";
    }
    cout << endl;
    
    for (x = 1.0; x <= n; x++)
    {
        cout << "++++++";
    }
    cout << std::endl;

    cout.width(3);
    cout << 1 << " ";

    for (x = 2.0; x <= n; x++)
    {
        cout.width(5);
        cout << sqrt(x) << " ";
    }
    cout << endl;

    for (x = 1.0; x <= n; x++)
    {
        cout << "++++++";
    }
    cout << endl;
}