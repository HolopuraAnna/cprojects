// 10.1.г
#include <stdio.h>
#include <stdlib.h>

struct polynom
{
    unsigned a;
    double* b;
};

struct polynom polynom_input()
{
    unsigned a;
    printf("Order:");
    scanf("%u", &a);
    double *b;
    if ((b = (double*)malloc((a + 1) * sizeof(b))))
    {
        for (int i = 0; i <= a; i++)
        {
            printf("a%i = ", i);
            scanf("%lf", (b + i));
        }
        scanf("%*c");
        return polynom{a, b};
    }
    else printf("Error: can`t allocate memmory\n");
    return {a, b};
}

void polynom_print(struct polynom a)
{
    for (int i = a.a; i >= 0; i--)
    {
        if (i == 0)
        {
            printf("%lf", a.b[0]);
        }
        else
        {
            printf("%lf*x^%i + ", a.b[i], i);
        }
    }
    printf("\n");
}

void polynom_del(struct polynom a)
{
    free(a.b);
}

int main()
{
    struct polynom plnm1 = polynom_input();
    printf("\n");
    polynom_print(plnm1);
    polynom_del(plnm1);
}
