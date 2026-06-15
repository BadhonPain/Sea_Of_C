#include <stdio.h>
// at first try o guess the output, then run
int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("%d\n", ptr); //  suppose the address of a is 6422292
    printf("%d\n", ptr + 1);
    printf("%d\n", *(ptr + 3)); // garbage value
    printf("%d\n", *ptr);
    printf("%d\n\n", *ptr + 1);

    char ch = 'k';
    char *ptr2 = &ch;
    printf("%d\n", ptr2); // suppose the address of a is 6422291
    printf("%d\n", ptr2 + 1);
    printf("%d\n", *(ptr2 + 3)); // garbage value
    printf("%c\n", *ptr2);
    printf("%c\n", *ptr2 + 1);

    return 0;
}