#include <stdio.h>
#include <stdlib.h>
// Problem : Create an array of multiplication table of 7 upto 10 then
//  use realloc to store upto 20 in it
int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    printf("Upto 10:\n");
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", ptr[i]);
    }
    printf("Upto 20:\n");
    ptr = (int *)realloc(ptr, 20 * sizeof(int));
    for (int i = 0; i < 20; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);
    return 0;
}