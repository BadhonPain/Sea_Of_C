#include <stdio.h>

int main()
{
    int j, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}