#include <stdio.h>
// checking prime or not using for loops
int main()
{
    int n;
    int factorCount = 0;
    scanf("%d", &n);
    if (!(n > 1))

        printf("Not Prime\n");

    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                factorCount++;
        }
        if (factorCount == 2 )
        {
            printf("Prime\n");
        }
        else 
        {
            printf("Not Prime\n");
        }
    }

    return 0;
}