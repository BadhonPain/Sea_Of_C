#include <stdio.h>
#include <string.h>
// Problem : Write a programme to slice a string from position m to n
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    fgets(str, MAX_SIZE, stdin);
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        printf("%c", str[i]); // this is a trick where main string is not modified
    }

    return 0;
}