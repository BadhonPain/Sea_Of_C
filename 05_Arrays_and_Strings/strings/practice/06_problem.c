#include <stdio.h>
#include <string.h>
// Problem : Write a programme to decrypt a string that generated in
// previous problem using encrypt function
#define MAX_SIZE 100
void encrypting_function(char str[]);
void decrypting_function(char str[]);
void encrypting_function(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] += 1;
    }
    decrypting_function(str);
}

void decrypting_function(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] -= 1;
    }
    puts(str);
}

int main()
{
    char badhon[MAX_SIZE];
    fgets(badhon, MAX_SIZE, stdin);
    encrypting_function(badhon);
    return 0;
}