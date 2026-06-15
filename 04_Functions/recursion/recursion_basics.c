#include <stdio.h>
// we can understand recursion with a nice example
// suppose, we have to find the factorial of a number
long factorial(int n); // function proto-type
long factorial(int n)
{
    if (n == 1 || n == 0) // base case
    {
        return 1;
    }

    return factorial(n - 1) * n;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Factorial of %d doesn't exist\n", number);
        return 0;
    }

    printf("The factorial of %d is %ld\n", number, factorial(number));

    return 0;
}