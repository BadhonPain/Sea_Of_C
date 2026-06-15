#include <stdio.h>

int main()
{
    char ch_1, ch_2;
    scanf("%c %c", &ch_1, &ch_2);
    int lucky = 22;
    int unlucky = 25;
    int result = ch_1 + ch_2 + lucky - unlucky;
    printf("%c%c->%d", ch_1, ch_2, result);
    return 0;
}