// 3.12
#include <stdio.h>

void triangle(double a, double b, double c){
    if ((a + b > c) && (a + c > b) && (b + c > a)){
        if ((a / b == 1) || (a / c == 1) || (b / c == 1)){
            printf("triangle is right");
        }
        else if ((a*a + b*b > c*c) && (a*a + c*c > b*b) && (c*c + b*b > a*a)){
            printf("triangle is acute");
        }
        else {
            printf("triangle is obtuse");
        }
    }
    else {
        printf("triangle does not exist");
    }
}

int main(){
    double a, b, c;
    printf("input a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    triangle(a, b, c);
}