// 4.10
#include <stdio.h>

int main()
{
    double x = 1;
	while ((1 + x) != 1) {
		x = x / 2;
	}
	printf("%.20lf\n", x);

	 if ((1. + x) == 1.)
    {
        printf("True");
    }
}