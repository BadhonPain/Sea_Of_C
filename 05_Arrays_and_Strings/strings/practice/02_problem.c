#include <stdio.h>
#include <string.h> // header for strlen
#define MAX_SIZE 100

// Problem : Write own version of strlen & verify

int main()
{

    char str[MAX_SIZE];
    fgets(str, MAX_SIZE, stdin);
    int length_count = 0;
    int i = 0;
    while (str[i++])
    {
        length_count++;
    }
    printf("%d\n", length_count);
    printf("%d\n", strlen(str));

    return 0;
}