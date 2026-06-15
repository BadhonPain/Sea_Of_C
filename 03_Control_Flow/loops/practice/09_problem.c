#include <stdio.h>
// sum of first n natural numbers using formula
int main() {
    int n;
    scanf("%d", &n);
    int sum = n * (n + 1) / 2; 
    printf("sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}