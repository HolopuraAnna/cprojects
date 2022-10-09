// 5.3
#include <stdio.h>

int f(int n)
{
    int a = n;
    int i = 0;
    while(a != 1)
    {
        if(a % 2 == 0)
        {
            a = a / 2;
        }
        else
        {
            a = 3 * a + 1;
        }
        i++;
    }
    return i;
}

int main()
{
    int n;
    printf("n = ");
    scanf("%u", &n);

    printf("a%u = 1\n", f(n));

    int k = 0;
    int m;
    for(int j=1; j<1001; j++)
    {
        if (k < f(j))
        {
            k = f(j);
            m = j;
        }
    }
    printf("%u takes %u steps", m, k);
}