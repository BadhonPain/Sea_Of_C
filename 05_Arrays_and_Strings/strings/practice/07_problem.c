#include <stdio.h>
#include <string.h>
// Problem : Write a programme to find the occurance of a character

#define MAX_SIZE 100

int main()
{
    char badhon[MAX_SIZE];
    fgets(badhon, MAX_SIZE, stdin);
    int count = 0;
    char target;
    scanf("%c", &target);
    for (int i = 0; i < strlen(badhon); i++)
    {
        if (badhon[i] == target)
            count++;
    }
    printf("%d\n", count);

    return 0;
}