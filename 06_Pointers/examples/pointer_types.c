#include <stdio.h>
//Try to guess the output
int main()
{
    int a = 1025;
    int *ptr;
    ptr = &a;
    printf("The address of 'a' is %d & value is %d\n", ptr, *ptr);
    // what happen if we wanna dereference 'a' with a character pointer?
    // Let's see what happen

    char *ptr2;
    ptr2 =(char*) ptr; // typecasting
    /* if you don't, you'll face a compilation error or a warning
    because two are different types pointer -> char & int
    */
    printf("The address of 'a' is %d & value is %d\n", ptr2, *ptr2);
    // 1025 = 00000000 00000000 00000100 00000001
    float *ptr3;
    ptr3 =(float*) ptr;
    printf("The address of 'a' is %d & value is %d\n", ptr3, *ptr3);

    return 0;
}