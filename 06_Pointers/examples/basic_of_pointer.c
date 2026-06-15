#include <stdio.h>
// basically a pointer is another type of variable that store the address of a variable
int main()
{
    int a = 5;
    int *ptr; // a pointer to integer
    ptr = &a; // in the ptr, we store the adress of 'a'
    printf("%d\n", ptr);
    /*
     if we use %d format specifier our return value should be a decimal
     but if we use %p, so our return value should be a hexa-decimal value
    */
    printf("%d\n", *ptr); // we can access the value which address is stored in this pointer
    *ptr = *ptr + 5;      // we can also modify the value
    printf("%d", *ptr);

    return 0;
}