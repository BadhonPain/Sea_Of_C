#include <stdio.h>
/*
  here, we use typedef to avoid the complexity of writing
  struct vector again and again as well as we have created
  a new data type named Force
 */
typedef struct vector
{
    int i, j;
} Force;

Force sumVector(Force force1, Force force2)
{

    Force net_force = {force1.i + force2.i, force1.j + force2.j};
    return net_force;
}

int main()
{
    Force force1, force2;
    force1.i = 5;
    force1.j = 8;
    force2.i = 10;
    force2.j = 12;
    Force net_force = sumVector(force1, force2);
    printf("The resultant vector of force is %di + %dj", net_force.i, net_force.j);

    return 0;
}