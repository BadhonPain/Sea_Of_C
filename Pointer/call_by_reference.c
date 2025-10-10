#include <stdio.h>
// it is mainly to show a pointer as a function parameter
void increment_function(int *ptr)
{
    // *ptr = (*ptr) + 1;
    *ptr += 1;
}
int main()
{
    int p = 100;
    increment_function(&p);
    printf("p = %d\n", p);

    return 0;
}