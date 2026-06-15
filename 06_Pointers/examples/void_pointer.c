#include <stdio.h>
// void pointer is a special types of pointer which requires
// no typecasting without compilation error or warning
int main() {

    int a = 1025;
    int *ptr;
    ptr = &a;
    printf("The address of 'a' is %d & value is %d\n", ptr, *ptr);

    void *ptr1;
    ptr1= ptr;
    printf("The address of 'a' is %d\n", ptr1);
    /*printf("The value of 'a' is %d" *ptr1);
      printf("The next byte of ptr1 is %d" (ptr1 +1));

      if you wanna do this operation you can't because void pointers 
      don't allow dereferencing or pointer arithmatic, you can only see the address
    */
    return 0;
}