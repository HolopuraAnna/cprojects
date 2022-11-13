// 5.19
#include <stdio.h>
#include <math.h>

double func(double x)
{
    return (tan(x) - x);
}

int sign(double x)
{
    if (x>0)  return 1;
    if (x<0)  return -1;
    return 0;
}

double solver(double e, double a, double b, double (*f)(double))
{
    double c, fa=f(a),fb=f(b),fc; int number = 0;
    if(fabs(fa) < e)
    {
        return a;
    }
    if(fabs(fb) < e) 
    {
        return b;
    }
    if(sign(fa) == sign(fb)) 
    {
        printf("Method does not work\n");
        return 0;
    }
    for(; fabs(b - a) >= e; number++)
    {
        c = (a + b) / 2;
        fc = f(c);
        if (fc == 0)
        {
            return c;
        }

        if (sign(fc) == sign(fa))
        { 
            a = c; 
        } 
        else 
        { 
            b = c;
        }
    }
    return c;
}


int main()
{
    double e;  
    printf("e = ");
    scanf("%lf", &e);    
    printf("x = %lf\n", solver(e, 0.001, 1.5, func));
}