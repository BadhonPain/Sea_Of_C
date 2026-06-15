#include <stdio.h>
// Guess the ouput
int main()
{
    int a, b, c;
    b = 5;
    c = 10;
    a = b+++--c; // lexical analysis
    printf("%d %d %d", a, b, c);
    return 0;
}