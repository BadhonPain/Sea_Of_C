#include <stdio.h>
/*
problem : Write a programme including a function to reverse an array
*/
void reverse_funtion(int arr[], int size);
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse_funtion(arr, n);
    return 0;
}

void reverse_funtion(int arr[], int size)
{
    int brr[size]; // using extra array
    for (int i = 0; i < size; i++)
    {
        brr[i] = arr[size - 1 - i]; // copying elements of arr to brr
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", brr[i]);
    }
}
