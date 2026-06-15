#include <stdio.h>

// Function Prototype
int sum(int, int);
// this is my required function
int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = sum(a, b); // function call
    printf("The sum of %d and %d is: %d\n", a, b, result);

    return 0;
}