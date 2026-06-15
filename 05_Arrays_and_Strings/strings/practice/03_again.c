#include <stdio.h>
#include <string.h>
// Problem : Write a programme to slice a string from position m to n
#define MAX_SIZE 100

void slice(char str[], int starting, int ending)
{
    char slice[ending - starting + 2];
    for (int i = 0; i < ending - starting + 1; i++)
    {
        slice[i] = str[starting + i]; // in this method, we use a extra
        // string to copy our required elemnts
    }
    slice[ending - starting + 1] = '\0';
    printf("%s", slice);
}

int main()
{
    char str[MAX_SIZE];
    fgets(str, MAX_SIZE, stdin);
    int m, n;
    scanf("%d %d", &m, &n);
    slice(str, m, n);

    return 0;
}