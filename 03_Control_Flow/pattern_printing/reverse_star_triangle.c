#include <stdio.h>

// int main()
// {
//     int j, n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n + 1 - i; j++)
//             printf("*");

//         printf("\n");
//     }

//     return 0;
// }

// Alternative_Solution(Using extra variable)
#include <stdio.h>

int main()
{
    int j, n;
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= a; j++)
            printf("*");

        printf("\n");
        a--;
    }

    return 0;
}
