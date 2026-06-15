#include <stdio.h>
// a function of finding average of numbers
float averageFunc();
float averageFunc(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The Average of these numbers is : %f", averageFunc(num1, num2, num3));

    return 0;
}