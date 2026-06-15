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
    for (int i = 0; i < n - 1; i++)
    {
        int min_el = arr[i];
        int idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (min_el > arr[j])
            {
                min_el = arr[j];
                idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = min_el;
        arr[idx] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}