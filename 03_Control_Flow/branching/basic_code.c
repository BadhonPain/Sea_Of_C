#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("The number is Positive.\n");
    }
    else if (number < 0)
    {
        printf("The number is Negative.\n");
    }
    else
    {
        printf("The number is Zero.\n");
    }

    int day;
    printf("Enter a day number (1-3): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Day 1: Monday\n");
        break;
    case 2:
        printf("Day 2: Tuesday\n");
        break;
    case 3:
        printf("Day 3: Wednesday\n");
        break;
    default:
        printf("Invalid day number!\n");
    }

    return 0;
}
