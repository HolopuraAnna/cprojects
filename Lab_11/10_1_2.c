// 10.1.b
#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    char col;
    int row;
} Field;

bool correctness(Field x)
{
    if (x.col < 'a' || x.col > 'h')
        return false;

    if (x.row < 1 || x.row > 8)
        return false;

    return true;
}

Field field_input()
{
    Field t;
    printf("ColRow: ");
    scanf("%c%i", &t.col, &t.row);
    scanf("%*c");
    return t;
}

void output(const Field x)
{
    printf("%c%u", x.col, x.row);
}

int main()
{
    Field pstn;
    do
    {
        printf("Field\n");
        pstn = field_input();
    } while (!correctness(pstn));
    output(pstn);
}