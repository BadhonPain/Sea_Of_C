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
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            int flag = 0;
            for (int k = 0; k < i; k++)
            {
                if (arr[i] == arr[k])
                {
                    flag = 1;
                }
            }
            if (!flag)
            {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}