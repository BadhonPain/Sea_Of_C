#include <stdio.h>
// factorial of a number using do while loop
int main()
{
    int n;
    scanf("%d", &n);
    int fact = 1;
    int i = 1;
    do
    {
        fact *= i;
        i++;
    } while (i <= n);

    printf("Factorial of %d is: %d\n", n, fact);
    return 0;
}