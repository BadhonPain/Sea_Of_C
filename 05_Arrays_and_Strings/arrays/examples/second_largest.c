#include <stdio.h>
// Second largest in an array
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];
    int max = 0, smax = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                max = a[i];
                smax = a[j];
            }
            else
            {
                max = a[j];
                smax = a[i];
            }
        }
    }
    printf("%d ", smax);

    return 0;
}