#include <stdio.h>
// finding triplet
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
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    count++;
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    if (!count)
        printf("NO TRIPLATES FOUND\n");
    printf("%d ", count);

    return 0;
}