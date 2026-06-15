#include <stdio.h>
// a simple triangle pattern printing by a function
void triangle_printing(int n)
{
    for (int i = 1; i <= 2*n-1 ; i += 2)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    triangle_printing(n);

    return 0;
}