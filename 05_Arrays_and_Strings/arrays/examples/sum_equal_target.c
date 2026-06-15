#include <stdio.h>
//finding pair
int main()
{
    int n;
    printf("Enter the arrray element number : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Give the target number : ");
    int target, count = 0;
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                count++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
     if (!count)
        printf("NO PAIRS FOUND\n");
    printf("%d ", count);

    return 0;
}