// Write a complete C program that takes two suitable integer matrices (not
// necessarily square matrices) as inputs, multiply them and display the resultant
// matrix as the output. The sizes and elements of the matrices are to be taken as
// inputs. Use necessary prompts while taking inputs and necessary indentations
// while showing outputs. Use a minimum number of variables in your program.
// [20-21 3d]
#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    int arr[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);
    int brr[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    int crr[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {

            for (int k = 0; k < c1; k++)
            {
                crr[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d", crr[i][j]);
            printf("\n");
        }
    }

    return 0;
}