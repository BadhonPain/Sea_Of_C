#include <stdio.h>
#include <math.h>
int main()
{
    int x1, y1, x2, y2;
    float initial_speed;
    scanf("%f", &initial_speed);
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    int delta_x = x2 - x1;
    int delta_y = y2 - y1;
    float distance = sqrt(pow(delta_x, 2) + pow(delta_y, 2));
    float speed = initial_speed - distance * 8.12;
    printf("%.3f", speed);

    return 0;
}