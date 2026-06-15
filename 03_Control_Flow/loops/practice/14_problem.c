#include <stdio.h>
// prime testing using while loops
int main()
{
    int n;
    scanf("%d", &n);
    int factorCount = 0;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            factorCount++;
        }
        i++;
    }
    if (factorCount == 2 && n > 1)
    {
        printf("Prime\n");
    }
    
    else
    {
        printf("Not Prime\n");
    }

    return 0;
}