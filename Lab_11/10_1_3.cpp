// 10.1.в
#include <stdio.h>
#include <stdlib.h>

struct point
{
    double x;
    double y;
};

struct rectangle
{
    struct point vertex1;
    struct point vertex2;
};

struct point point_input()
{
    double x, y;
    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);
    scanf("%*c");
    return point{x, y};
}

struct rectangle rectangle_input()
{
    printf("Point1\n");
    struct point pnt1 = point_input();
    printf("Point2\n");
    struct point pnt2 = point_input();
    return rectangle{pnt1, pnt2};
}

void rectangle_print(struct rectangle a)
{
    printf("Point1: (%lf, %lf)\n", a.vertex1.x, a.vertex1.y);
    printf("Point2: (%lf, %lf)\n", a.vertex1.x, a.vertex2.y);
    printf("Point3: (%lf, %lf)\n", a.vertex2.x, a.vertex2.y);
    printf("Point4: (%lf, %lf)\n", a.vertex2.x, a.vertex1.y);
}

int main()
{
    struct rectangle rctngl1 = rectangle_input();
    printf("\n");
    rectangle_print(rctngl1);
    printf("\n");
}
