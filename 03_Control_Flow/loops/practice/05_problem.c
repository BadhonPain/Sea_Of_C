#include <stdio.h>
// Sum of first n natural numbers using while loop
int main()
{
    int n ;
   scanf("%d", &n);
    int sum = 0;
    int i = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}