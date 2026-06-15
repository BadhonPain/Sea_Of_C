#include <stdio.h>
// Problem : Create a 3D array and print the address of its elements in increasing order
int main()
{
    int three_dimensional_array[2][4][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("(%d,%d,%d): %d ", i, j, k, &three_dimensional_array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}