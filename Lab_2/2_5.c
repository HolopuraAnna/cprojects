// 2.5
#include <stdio.h>
#include <math.h>

float Rosenbrock2d(float x, float y)
{
    return 100 * (x*x - y) * (x*x - y) + (x - 1) * (x - 1);
}

int main()
{
    printf("Rosenbrock2d(1, 0) = %g\n", Rosenbrock2d(1, 0));
    printf("Rosenbrock2d(3.4, 7) = %g\n", Rosenbrock2d(3, 7));
    printf("Rosenbrock2d(9.1, 2.8) = %g\n", Rosenbrock2d(9, 2));
}