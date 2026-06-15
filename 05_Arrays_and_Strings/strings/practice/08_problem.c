#include <stdio.h>
#include <string.h>
// Problem : Write a programme to check whether a given character is
// present or not in a string

#define MAX_SIZE 100

int main()
{
    char badhon[MAX_SIZE];
    fgets(badhon, MAX_SIZE, stdin);
    int count = 0;
    char target;
    scanf("%c", &target);
    int flag = 0;
    int index = 0;
    for (int i = 0; i < strlen(badhon); i++)
    {
        if (badhon[i] == target)
        {
            flag = 1;
            index = i;
            break;
        }
    }
    if (flag)
    {
        printf("Found! at index = %d\n", index);
    }
    else
        printf("Not Found!\n");

    return 0;
}