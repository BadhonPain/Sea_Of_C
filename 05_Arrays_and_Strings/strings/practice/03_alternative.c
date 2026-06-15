#include <stdio.h>
#include <string.h>
// Problem : Write a programme to slice a string from position m to n
#define MAX_SIZE 100

void slice(char str[], int starting, int ending)
{
    str[ending + 1] = '\0';
    printf("%s", str + starting); // this is also a trick where main string modified partially
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