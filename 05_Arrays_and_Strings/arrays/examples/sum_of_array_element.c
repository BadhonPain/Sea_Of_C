#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}
