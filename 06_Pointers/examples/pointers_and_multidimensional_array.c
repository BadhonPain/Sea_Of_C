#include <stdio.h>

int main() {
    int B[2][3];
    int *p = B; // will generate a compilation error or warning
    printf("%d",p);
    return 0;
}