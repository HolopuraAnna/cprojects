// 16.6
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
using namespace std;

class Figure
{
    protected:
    double a;

    public:
    double x;
    double y;

    int input()
    {
        cout << "Input (x, y) as x y: ";
        cin >> x >> y;
        cout << "Input a: ";
        cin >> a;
        return 0;
    }

    void show()
    {
        cout << "(x, y): (" << x << ", " << y << ")\n";
        cout << "a: " << a << "\n";
    }
};

class Rectangle : public Figure
{
    protected:
    double b;
    double point[4][2];

    public:
    int input()
    {
        Figure::input();
        cout << "Input b: ";
        cin >> b;
        return 0;
    }

    void points()
    {
        point[0][0] = x;
        point[0][1] = x + a;
        point[0][2] = x;
        point[0][3] = x + a;
        point[1][0] = y;
        point[1][1] = y;
        point[1][2] = y + b;
        point[1][3] = y + b;
    }

    double square()
    {
        return a * b;
    }

    double perimeter()
    {
        return a + a + b + b;
    }

    double x_center_mas()
    {
        return (x + x + a) / 2;
    }

    double y_center_mas()
    {
        return (y + y + b) / 2;
    }

    void show()
    {
        cout << "\nRectangle\n";
        Figure::show();
        cout << "b: " << b << "\n";
        cout << "square = " << square() << "\n";
        cout << "perimeter = " << perimeter() << "\n";
        cout << "center_mas = (" << x_center_mas() << ", " << y_center_mas() << ")\n";
    }
};

class Triangle : Figure
{
    protected:
    double u;
    double v;
    double b;
    double c;
    double point[3][2];

    public:
    int input()
    {
        Figure::input();
        cout << "Input first angle (0-180): ";
        cin >> u;
        cout << "Input second angle (0-180): ";
        cin >> v;
        return 0;
    }

    void sides()
    {
        b = a * sin(v * M_PI /180) / sin((180 - u - v) * M_PI / 180);
        c = a * sin(u * M_PI /180) / sin((180 - u - v) * M_PI / 180);
    }

    double perimeter()
        {
            return a + b + c;
        }

    double square()
        {
            double p = perimeter() / 2;
            return sqrt(p * (a-p) * (b-p) * (c-p));
        }

    void points()
    {
        point[0][0] = x;
        point[1][0] = y;
        point[0][1] = x + a;
        point[1][1] = y;
        point[0][2] = b * sin((90-u) * M_PI / 180) + x;
        point[1][2] = y + (2 * square() / a);
    }

    double x_center_mas()
        {
            return (point[1][0] + point[1][1] + point[1][2]) / 3;
        }
    
    double y_center_mas()
        {
            return (point[0][0] + point[0][1] + point[0][2]) / 3;
        }

    void show()
    {
        cout << "\nTriangle\n";
        Figure::show();
        cout << "first angle: " << u <<"\n";
        cout << "second angle: " << v <<"\n";
        cout << "square = " << square() << "\n";
        cout << "perimeter = " << perimeter() << "\n";
        cout << "center_mas = (" << x_center_mas() << ", " << y_center_mas() << ")\n";
    }
};

class Ellipse : Figure
{
    protected:
    double b;

    public:
    int input()
    {
        Figure::input();
        cout << "Input b: ";
        cin >> b;
        return 0;
    }

    double square()
    {
        return M_PI * a * b;
    }

    void show()
    {
        cout << "\nEllipse\n";
        Figure::show();
        cout << "b: " << b << "\n";
        cout << "square: " << square() << "\n";
    }
};

int main()
{
    Figure f;
    Rectangle r;
    Triangle t;
    Ellipse e;
    double xcm;
    double ycm;
    int nr, nt, ne;

    cout << "Input number of rectangles: ";
    cin >> nr;
    for (int i = 0; i < nr; i++)
    {
        r.input();
        r.show();
        xcm += r.x_center_mas();
        ycm += r.y_center_mas();
        cout << "\n";
    }
    cout << "Input number of triangles: ";
    cin >> nt;
    for (int i = 0; i < nt; i++)
    {
        t.input();
        t.show();
        xcm += t.x_center_mas();
        ycm += t.y_center_mas();
        cout << "\n";
    }
    cout << "Input number of ellipses: ";
    cin >> ne;
    for (int i = 0; i < ne; i++)
    {
        e.input();
        e.show();
        xcm += f.x;
        ycm += f.y;
        cout << "\n";
    }

    cout << "Center mas of all figures = (" << xcm / (nr + nt + ne) << ", " << ycm / (nr + nt + ne) << ")\n";
}