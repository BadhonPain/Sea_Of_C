#include <stdio.h>
#include <string.h>

union info
{
    float salary;
    int roll;
    char name[20];
};

int main()
{

    // Another way of initializing union
    union info person1;
    strcpy(person1.name, "badhon pain");
    person1.salary = 32.5;
    person1.roll = 87;
    printf("%s %.1f %d \n", person1.name,person1.salary, person1.roll);

    return 0;
}