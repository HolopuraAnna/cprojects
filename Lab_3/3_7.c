// 3.7
#include <stdio.h>
#include <math.h>
#include <float.h>

int equation_a(double a, double b, double c){
    double D = b*b - 4*a*c;
    if (D < 0){
        printf("Equation a have no roots\n");
    }
    else if (D == 0){
        double x1 = -b / (2 * a);
        printf("Equation a have one root: %lf\n", x1);
    }
    else if (D > 0){
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        printf("Equation a have two roots: %lf, %lf\n", x1, x2);
    }
}

int equation_b(double a, double b, double c){
    double D = b*b - 4*a*c;
    if (D < 0){
        printf("Equation b have no roots\n");
    }
    else if (D == 0){
        double x1 = -b / (2 * a);
        if (x1 >= 0){
            printf("Equation b have two roots: %lf, %lf\n", sqrt(x1), -sqrt(x1));
        }
        else {
            printf("Equation b have no roots\n");
        }
    }
    else if (D > 0){
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        if ((x1 >= 0) && (x2 >= 0)){
            printf("Equation b have four roots: %lf, %lf, %lf, %lf\n", sqrt(x1), -sqrt(x1), sqrt(x2), -sqrt(x2));
        }
        else if ((x1 >= 0) && (x2 < 0)){
            printf("Equation b have two roots: %lf, %lf\n", sqrt(x1), -sqrt(x1));
        }
        else if ((x1 < 0) && (x2 >= 0)){
            printf("Equation b have two roots: %lf, %lf\n", sqrt(x2), -sqrt(x2));
        }
        else {
            printf("Equation b have no roots\n");
        }
    }
}

int main(){
    double a, b, c;
    printf("input a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    equation_a(a, b, c);
    equation_b(a, b, c);
}