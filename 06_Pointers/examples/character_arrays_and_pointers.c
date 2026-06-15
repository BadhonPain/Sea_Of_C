#include <stdio.h>
void print(char* x)
{
    int i = 0;
    while (*(x+i) != '\0') // x[i] != '\0' //  *x != '\0'
    {
        printf("%c", *(x+i) );
        i++; // in terms of *x != '\0' it should x++;
    }
    printf("\n");
}
int main()
{
    char str[20] = "BADHON";
    print(str);
    return 0;
}