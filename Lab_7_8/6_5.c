// 6.5
#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%i", &n);
    int max = 1, m = 1;
    for(int i = 0; i < 15; i++)
    {
        int bit = (n >> i) & 1;
        int next_bit = (n >> i + 1) & 1;
        if ((bit == next_bit) && (bit == 1))
        {
            m += 1;
            if (m > max)
            {
                max = m;
            }
        }
        else
        {
            m = 1;
        }
    }
    printf("%d", max);
}