#include <stdio.h>
// problem : Create an array of 3 x 10 containing multiplication table of 2, 7 ,9
int main()
{
    int multiplication[3][10];

    for (int j = 0; j < 10; j++)
    {
        multiplication[0][j] = 2 * j + 2;
        multiplication[1][j] = 7 * j + 7;
        multiplication[2][j] = 9 * j + 9;
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