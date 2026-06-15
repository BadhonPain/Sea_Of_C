#include <stdio.h>
enum student
{
    badhon,
    shipra,
    dipro
};

int main()
{
    enum student roll_1, roll_2, roll_3;
    roll_1 = dipro;  // 2
    roll_2 = badhon; // 0
    roll_3 = shipra; // 1
    printf("%d %d %d", roll_1, roll_2, roll_3);

    return 0;
}