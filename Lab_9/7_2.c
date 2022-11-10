// 7.2
#include <stdio.h>

int main()
{
    int mas[4] = {5, 112, 4, 3};
    for (int i = sizeof(mas)/sizeof(mas[0]); i > 0; i--)
    {
        printf("%i ", mas[i-1]);
    }
}