#include <stdio.h>
// #include <limits.h> -> in the code, i used INT_MIN. For this it's the header file

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
    int max = arr[0];
    // int max = INT_MIN; ->another way to find max in the array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("%d", max);

    return 0;
}