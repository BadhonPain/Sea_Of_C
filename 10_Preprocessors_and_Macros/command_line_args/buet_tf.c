// Develop a C program that retrieves two numbers
// from the command line arguments, calculates
// their sum, and displays the result. You are allowed to
// utilize any library function in this program. [22-23 8a]
#include <stdio.h>
#include <stdlib.h>

int main(int argc, int *argv[])
{
    int sum = 0;
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("Sum is : %d", a + b);

    return 0;
}
