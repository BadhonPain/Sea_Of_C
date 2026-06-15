#include <stdio.h>
#include <string.h> // header for strcmp

// Problem : Take a string as input with %c & %s also and confirm that they are equal

int main()
{
    char str1[7];

    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &str1[i]);
        fflush(stdin);
    }
    str1[6] = '\0';

    for (int i = 0; i < 10; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");

    char str2[10];
    scanf("%s", str2);
    printf("%s\n", str2);
    
    printf("%d", strcmp(str1, str2)); // if it returns 0,
    // so we will be assued that those strings are eqal

    return 0;
}