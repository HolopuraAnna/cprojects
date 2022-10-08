// 4.1
#include <stdio.h>
#include <math.h>

double fuct(double x, int n, double y)
{
    for(int i = 1; i < n; i++){
        y = sin(y);
    }
    return y;
}

int main()
{
    double x;
    int n;
    printf("Input n x: ");
    scanf("%u %lf", &n, &x);

    double y = sin(x);
    
    printf("y = %lf", fuct(x, n, y));
}