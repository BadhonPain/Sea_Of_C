#include <stdio.h>
// sum od all occurances of a multiplication table
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        int result = n * i;
        sum += result;
    }
    printf("%d\n", sum);

    return 0;
}