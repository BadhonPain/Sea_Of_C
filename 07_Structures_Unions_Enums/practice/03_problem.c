#include <stdio.h>
// Problem : Write a function to calculate the sum of two vector using structure
struct vector
{
    int i, j;
};

struct vector sumVector(struct vector force1, struct vector force2)
{

    struct vector net_force = {force1.i + force2.i, force1.j + force2.j};
    return net_force;
}

int main()
{
    struct vector force1, force2;
    force1.i = 5;
    force1.j = 8;
    force2.i = 10;
    force2.j = 12;
    struct vector net_force = sumVector(force1, force2);
    printf("The resultant vector of force is %di + %dj", net_force.i, net_force.j);

    return 0;
}