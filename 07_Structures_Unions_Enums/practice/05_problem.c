#include <stdio.h>
// Problem : Write a programme using structure to represent a complex number

typedef struct complex
{
    int real;
    int imaginary;
} com;

int main()
{
    com number;
    number.real = 3;
    number.imaginary = 5;
    printf("The complex number is %d+%di\n", number.real, number.imaginary);

    return 0;
}