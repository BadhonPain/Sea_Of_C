#include <stdio.h>

int main() {
    int x = 5; // 0101
    int y = 3; // 0011

    printf("x & y = %d\n", x & y);
    printf("x | y = %d\n", x | y);
    printf("x ^ y = %d\n", x ^ y);
    printf("~x = %d\n", ~x);
    printf("x << 1 = %d\n", x << 1);
    printf("x >> 1 = %d\n", x >> 1);

    return 0;
}
