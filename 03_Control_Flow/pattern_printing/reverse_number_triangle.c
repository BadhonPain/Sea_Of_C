#include <stdio.h>

int main()
{
    int j, n;
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= a; j++)
            printf("%d", j);

        printf("\n");
        a--;
    }

    return 0;
}