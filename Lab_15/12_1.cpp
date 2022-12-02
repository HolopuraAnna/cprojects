// 12.1
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    double z = pow(x, y);

    cout << "x ^ y = " << z << " = " << scientific << z;
}