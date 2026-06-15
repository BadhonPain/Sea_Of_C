#include <stdio.h>
// prime testing using do while loops
int main()
{
    int n;
    scanf("%d", &n);
    int factorCount = 0;
    int i = 1;
   do
    {
        if (n % i == 0)
        {
            factorCount++;
        }
        i++;
    }
     while (i <= n);
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