#include <stdio.h>
/*
problem : create a 10 size array and make sure ptr+2 indicates 3rd element of the array
where ptr is the pointer, points to the array
*/
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int *ptr = arr; // or *ptr = &arr[0] or *ptr = &arr
    printf("%d", *(ptr + 2));

    return 0;
}