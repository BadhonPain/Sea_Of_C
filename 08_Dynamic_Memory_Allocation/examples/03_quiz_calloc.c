#include <stdio.h>
#include <stdlib.h>
// Problem : Write a programme to create a dynamic array of size n using calloc
int main()
{
    int n;
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
     printf("%d\n", ptr[0]);
     printf("%d\n", ptr[2]);
     printf("%d\n", ptr[3]); // you will see all the values initially zero

    return 0;
}