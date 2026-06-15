#include <stdio.h>
/*
problem : Write a programme including a function to reverse an array
*/
void reverse_funtion(int arr[], int size);
int swap_function(int *ptr1, int *ptr2);
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
    reverse_funtion(arr, n); // can you solve in any other way?
    //Think,then check 05_alternative

    return 0;
}

void reverse_funtion(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap_function(&arr[start], &arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int swap_function(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
