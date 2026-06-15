#include <stdio.h>

int main()
{
    int n, target;
    int count = 0;
    printf("Give the array elemnt number and target number : ");
    scanf("%d %d", &n, &target);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > target)
            count++;
    }

    printf("%d", count);

    return 0;
}