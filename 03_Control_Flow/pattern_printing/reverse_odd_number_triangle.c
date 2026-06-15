#include <stdio.h>

int main()
{
    int j, n;
    scanf("%d", &n);
    int a=n;
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <=a; j += 2)
            printf("%d ", j);

        printf("\n");
        a=-2;
    }

    return 0;
}