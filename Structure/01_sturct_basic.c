#include <stdio.h>
#include <string.h>

struct info
{
    float salary;
    int roll;
    char name[20];
};

struct academic_info
{
    char name[20];
    int tuition_no;
    float salary ;
};


int main()
{
    struct academic_info p1= {"Albert Einstein", 67, 1304.689}; 
    // Another way of initializing structure
    struct info person1, person2;
    person1.salary = 32.5;
    person2.salary = 20.4;
    strcpy(person1.name, "badhon pain");
    strcpy(person2.name, "badhon_pain_the_boss");
    person1.roll = 87;
    person2.roll = 83;
    printf("%s %d %.1f\n", person1.name, person1.roll, person1.salary);
    printf("%s %d %.1f\n", person2.name, person2.roll, person2.salary);
    printf("%s %d %.2f\n", p1.name, p1.tuition_no, p1.salary);
    return 0;
}