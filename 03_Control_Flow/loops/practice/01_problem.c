#include <stdio.h>
// Multiplication table of a number
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
     printf("Multiplication table for %d:\n", n);
    for (int i = 1; i <= 10; i++)
    {
        int result = n * i;
        printf("%d x %d = %d\n", n, i, result);
    }

    return 0;
}