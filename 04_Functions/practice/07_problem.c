#include <stdio.h>
// a recursive function to calculate the sum of the first 'n' natural numbers
int Sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + Sum(n - 1);
}

int main()
{
    int n;
    printf("How many numbers you want to calculate? Enter : ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Invalid number. Try again!\n");
        return 0;
    }

    printf("The Summation of first %d natural numbers is = %d\n", n, Sum(n));

    return 0;
}