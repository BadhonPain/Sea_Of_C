#include <stdio.h>
// problem : Write a programme including function to count the positive elements of an array
int be_positive(int arr[], int size);
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", be_positive(arr, n));

    return 0;
}

int be_positive(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            count++;
        }
    }
    return count;
}