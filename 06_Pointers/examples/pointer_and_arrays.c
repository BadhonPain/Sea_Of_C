#include <stdio.h>
// that's  a lesson to show how pointer arithmatic works on an array
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr;
    printf("%d\n",arr); // address of the array
    printf("%d\n",ptr); // address of the array
    printf("%d\n", *arr); // the first element of the array
    for (int i = 0; i < 6; i++)
    {
        printf("element at index %d is %d at address  %d\n", i, arr[i], &arr[i]);
        printf("element at index %d is %d at address  %d\n", i, *(arr+i), (arr+i)); // same things just using pointer arithmatic
    }

    return 0;
}