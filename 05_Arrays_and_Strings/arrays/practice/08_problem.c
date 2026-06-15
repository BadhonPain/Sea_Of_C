#include <stdio.h>
// problem : same as 07 but this will be custom code as users choice
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int multiplication[3][10];

    for (int j = 0; j < 10; j++)
    {
        multiplication[0][j] = a * j + a;
        multiplication[1][j] = b * j + b;
        multiplication[2][j] = c * j + c;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", multiplication[i][j]);
        }
        printf("\n");
    }

    return 0;
}