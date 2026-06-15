#include <stdio.h>
#include <string.h>

struct info
{
    float salary;
    int t_shirt;
    char brand[20];
};

int main()
{
    struct info person1;
    strcpy(person1.brand, "Easy");
    person1.t_shirt = 5;
    struct info *ptr;
    ptr = &person1;
    printf("%s\n", (*ptr).brand);
    printf("%d", ptr->t_shirt); // another way of dereferencing (*ptr).t_shirt

    return 0;
}