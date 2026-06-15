#include <stdio.h>
// Problem : Create a two dimensional vector using structures
struct creating_vector
{
    int i, j;
};

int main()
{
    struct creating_vector force;
    force.i = 5;
    force.j = 8;
    printf("The vector is %di + %dj", force.i, force.j);

    return 0;
}