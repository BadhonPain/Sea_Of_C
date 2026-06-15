#include <stdio.h>
#include <string.h>
// Problem : Write a programme to encrypt a string by adding 1 to
// its ascii values of its characters
#define MAX_SIZE 100

int main()
{
    char badhon[MAX_SIZE];
    fgets(badhon, MAX_SIZE, stdin);
    for (int i = 0; i < strlen(badhon); i++)
    {
        badhon[i] += 1;
    }
    puts(badhon);

    return 0;
}