// 5.5
#include <stdio.h>

int main()
{
    int x1=-99, x2=-99, x3=-99, x4=-98;
    int i = 3;
    while(x4 < 1)
    {
        x4 = x1 + x3 +100;
        x1 = x2;
        x2 = x3;
        x3 = x4;
        i++;
    }
    printf("n = %u", i);
}