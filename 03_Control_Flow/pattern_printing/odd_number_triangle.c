#include <stdio.h>

int main()
{
    int j, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * i - 1; j += 2)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}