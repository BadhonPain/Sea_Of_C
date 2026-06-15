#include <stdio.h>
#include <math.h>
int main()
{
    int initial_points;
    float percentage;
    int year;
    printf("Enter Initial Points: ");
    scanf("%d", &initial_points);
    printf("Enter Bonus Rate: ");
    scanf("%f", &percentage);
    percentage /= 100.0;
    printf("Enter year: ");
    scanf("%d", &year);
    float overall_points = initial_points * pow(1 + percentage, year);
    printf("Overall Points after %d years = %.3f\n ", year, overall_points);

    return 0;
}