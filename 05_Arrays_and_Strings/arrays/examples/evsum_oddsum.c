#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int evensum = 0, oddsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            evensum += arr[i];
        else if (i % 2 == 1)
            oddsum += arr[i];
    }
    printf("%d ", evensum - oddsum);

    return 0;
}