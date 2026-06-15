#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of students : ");
    scanf("%d", &n);
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("The roll numbers who get below 35 : ");
    for (int i = 0; i < n; i++)
    {
        if (marks[i] < 35)
            printf("%d ", i);
    }

    return 0;
}