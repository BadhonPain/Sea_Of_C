#include <stdio.h>
// Problem : Create a two dimensional 2D array using structures
struct creating_array_2D
{
    int ct_marks[4][5];
};

int main()
{
    struct creating_array_2D badhon;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &badhon.ct_marks[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", badhon.ct_marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}