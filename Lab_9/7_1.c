// 7.1
#include <stdio.h>

int main()
{
    int mas[5] = {7, -5, 3, 0, 145};

    int a;
    printf("a = ");
    scanf("%i", &a);

    int k = 0;
    for (int i = 0; i < 5; i++)
    {
        if (mas[i] < a)
        {
            k++;
        }
    }

    printf("there are %i elements smaller then %i", k, a);
}