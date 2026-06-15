#include <stdio.h>
// Problem : Write a programme to generate the multiplication table
// of a given number in text format
int main()
{
    FILE *file_ptr;
    file_ptr = fopen("multiplication_table.txt", "w");
    int num = 12;
    int fact;
    for (int i = 0; i < 10; i++)
    {
        fact = num * (i + 1);
        fprintf(file_ptr, "%d", fact);
        fprintf(file_ptr, "%c", '\n');

    }

    fclose(file_ptr);

    return 0;
}