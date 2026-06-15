#include <stdio.h>
// Try to guess the output's to be a master on pointer
int main()
{
    int a = 34;
    int *ptr1 = &a;          // address of a (pointer to integer)
    int **ptr2 = &ptr1;      // address of ptr1 (pointer to pointer)
    int ***ptr3 = &ptr2;     // address of ptr2 (pointer to pointer to pointer)
    printf("a = %d\n", a);  
    printf("%d\n", ptr1);    
    printf("%d\n", *ptr1);   
    printf("%d\n", *ptr2);  
    printf("%d\n", **ptr2);  
    printf("%d\n", *ptr3);  
    printf("%d\n", **ptr3);
    printf("%d\n", ***ptr3);
    **ptr2 = 35;            
    printf("a = %d\n", a);  
    ***ptr3 = **ptr2 - 3;   
    printf("a = %d\n", a);  

    return 0;
}