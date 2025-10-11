#include <stdio.h>
#include <string.h>
/*
 Typedef mainly reduce the complexity of writing struct/union/enum info 
 again and again where it is used. We can create a new data type also
 as our choice and need using typedef.
*/
typedef struct info
{
    float salary;
    int t_shirt;
    char brand[20];
}inf;

int main()
{
    inf person1;
    strcpy(person1.brand, "Easy");
    person1.t_shirt = 5;
    inf *ptr;
    ptr = &person1;
    printf("%s\n", (*ptr).brand);
    printf("%d", ptr->t_shirt); // another way of dereferencing (*ptr).t_shirt

    return 0;
}