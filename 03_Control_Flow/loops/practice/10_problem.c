#include <stdio.h>
// factorial of a number using for loop
int main() {
    int n;
    scanf("%d", &n);
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial of %d is: %d\n", n, fact);
    return 0;
}