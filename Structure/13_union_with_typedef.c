#include <stdio.h>

typedef union
{
    int i;
    float f;
    char ch;
} Data;

int main()
{
    Data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);
    
    d.f = 5.5;
    printf("Float: %.2f\n", d.f);
    
    d.ch = 'A';
    printf("Character: %c\n", d.ch);
// why here all the info's are printing? think...
    return 0;
}
