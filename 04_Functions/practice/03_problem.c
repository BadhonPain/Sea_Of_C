#include <stdio.h>
// a function to calculate the attraction force on a body of mass 'm' exerted by Earth

#define g 9.8
#define MAX_mass 100000

float force_of_attraction(float mass)
{
    return mass * g;
}

int main()
{
    printf("Enter the mass of the body (in kg): ");
    float m;
    scanf("%f", &m);
    if (m > MAX_mass || m < 0)
    {
        printf("Invalid mass!");
        return 0;
    }

    printf("The Force is %.3f N (Attractive)\n", force_of_attraction(m));

    return 0;
}