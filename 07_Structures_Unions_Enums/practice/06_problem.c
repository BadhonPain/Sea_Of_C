#include <stdio.h>
// Problem : Create an array of 5 imaginary numbers & display them
// with a display funtion and take input from user

typedef struct complex
{
    int real[5];
    int imaginary[5];
} com;

com display(com number[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d+%di\n", number->real[i], number->imaginary[i]);
    }
}

int main()
{
    com number[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %d", &number->real[i], &number->imaginary[i]);
    }
    display(number);

    return 0;
}