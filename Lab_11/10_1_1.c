// 10.1.a
#include <stdio.h>
#include <stdbool.h>

typedef struct 
{
    int day;
    int month;
    int year;
} Date;

int Month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int checkDate(const Date* x)
{
    if (x->year<1980 || (*x).year>2200) return -1;
    if ((*x).month<1 || x->month>12) return -2;
    if (x->day <= 0 || (*x).day>Month[x->month-1]) return -3;

    return 0;
}

int input(Date* x)
{
    printf("day: ");
    scanf("%d", &x->day);
    printf("month: ");
    scanf("%d", &x->month);
    printf("year: ");
    scanf("%d", &x->year);
    return 0;
}

void output(const Date x)
{
    printf("\nDate = %2d.%2d.%4d", x.day, x.month, x.year);
}

int main()
{
    Date dat;
    do{
        printf("input date:\n");
        input(&dat);
        if(checkDate(&dat)==0) break;
    }while(1);
    output(dat);
}