#include <stdio.h>
// Problem : Determine the output of the following C code segment [22-23]
int main()
{
    int x = 20, y = 10, z = 0;
    int a = x && !y || z;
    int b = x++*-y+!z;
    printf("%d %d\n", a, b);
    return 0;
}