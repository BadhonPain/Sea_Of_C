#include <stdio.h>
// a recursive function to determine the nth element of Fibonacci series
//Considering 1st & 2nd element correspondingly 0 & 1.
int element_of_Fibonacci(int n)
{
    if (n == 1 || n==2)
    {
        return n-1;
    }

    else
        return element_of_Fibonacci(n - 1) + element_of_Fibonacci(n - 2);
}

int main()
{
    printf("You can determine the nth element of Fibonacci Series.....\n");
    printf("Considering 1st & 2nd element correspondingly 0 & 1.\n");
    printf("Enter position : ");
    int pos;
    scanf("%d", &pos);
    if (pos <= 0)
    {
        printf("Invalid Position. It should be a positive integer.\n");
        return 0;
    }
    else
        printf("The %dth position of Fibonacci Number is : %d", pos, element_of_Fibonacci(pos));

    return 0;
}