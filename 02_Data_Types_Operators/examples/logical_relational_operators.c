#include <stdio.h>

int main() {
    int a = 5, b = 10;

    // Relational
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);

    // Logical
    printf("(a < b && a > 0): %d\n", a < b && a > 0);
    printf("(a > b || b > 0): %d\n", a > b || b > 0);

    return 0;
}
