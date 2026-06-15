#include <stdio.h>
// guess the output
int main()
{
    int s[3] = {1, 2, 3};
    int *ptr = s;
    printf("%d", *(ptr + 3));

    return 0;
}