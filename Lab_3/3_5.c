// 3.5
#include <stdio.h>

int main(){
    double a, b, c;

    printf("a b : ");
    scanf("%lf %lf", &a, &b);

    double max = a;

    if(b > max){
        max = b;
    }

    printf("Max : %lf", max);
}