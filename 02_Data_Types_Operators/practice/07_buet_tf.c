#include <stdio.h>
/* Write down a program that will take an English letter in upper case
as input and will print two letters after it in the alphabet in lower
case. For example, if the user enters D the output will be f. If the
input is Z the output will be b. You are not allowed to use any if-else,
switch-case or ternary operator to solve the problem. [15-16]
*/
int main()
{
    char ch;
    scanf("%c", &ch);
    char ch2 = ((ch - 'A' + 2) % 26) + 'a';
    printf("%c", ch2);
    return 0;
}