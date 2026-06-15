#include <stdio.h>
#include <string.h> // header for strlen
#define MAX_SIZE 100

// Problem : Write own version of strcpy & verify

int main()
{

    char str[MAX_SIZE];
    fgets(str, MAX_SIZE, stdin);
    char duplicate[MAX_SIZE];
    for (int i = 0; i < strlen(str); i++)
    {
        duplicate[i] = str[i];
    }
    duplicate[strlen(str)] = '\0';
    printf("%s%s", str, duplicate);
    return 0;
}