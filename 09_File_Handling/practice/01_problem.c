#include <stdio.h>
// Problem : Write a programme to read three integers from a file
int main()
{
    FILE *file_ptr;
    file_ptr = fopen("integers_file.txt", "r");
    int num1, num2, num3;
    fscanf(file_ptr, "%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d\n", num1, num2, num3);
    fclose(file_ptr);

    return 0;
}