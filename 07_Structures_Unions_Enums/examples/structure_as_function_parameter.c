#include <stdio.h>
#include <string.h>

struct student
{

    int roll;
    float mark;
    char crush[10];
};
void showing_info(struct student badhon);

int main()
{
    struct student badhon;
    showing_info(badhon);

    return 0;
}
void showing_info(struct student badhon)
{
    strcpy(badhon.crush, "Senorita");
    badhon.roll = 87;
    badhon.mark = 0;
    printf("%s %d %.1f", badhon.crush, badhon.roll, badhon.mark);
}