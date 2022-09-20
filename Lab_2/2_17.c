// 2.17.в
#include <stdio.h>
#include <math.h>

float softSign(float x)
{
    if (x > 0)
    {
        return x / (1 + x);
    }
    else
    {
        return x / (1 - x);
    }  
}

float softSign_derivative(float x)
{
    if (x > 0)
    {
        return -(1 / (1 + x) / (1 + x));
    }
    else
    {
        return (1 / (1 - x) / (1 - x));
    }  
}

int main()
{
    float x;
    scanf("%f", &x);
    printf("%f\n", softSign(x));
    printf("%f\n", softSign_derivative(x));
}