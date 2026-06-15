#include <stdio.h>

int main()
{
    int n = 10;
    printf("Multiplication table for %d:( in reverse order )\n", n);
    for (int i = 10; i > 0; i--)
    {
        int result = n * i;
        printf("%d x %d = %d\n", n, i, result);
    }

    return 0;
}