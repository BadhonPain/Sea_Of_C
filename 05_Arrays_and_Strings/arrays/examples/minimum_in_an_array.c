#include <stdio.h>
// #include <limits.h> -> for INT_MAX, this header file should be used
int main()
{

    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    // int min = INT_MAX; ->cool way to identify minimum in array
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    printf("%d", min);

    return 0;
}