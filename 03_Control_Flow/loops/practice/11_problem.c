#include <stdio.h>
// factorial of a number using while loop
int main() {
    int n;
    scanf("%d", &n);
    int fact = 1;
    int i= 1;
    while (i<= n)
    {
        fact*= i;
        i ++;
    }
    
    printf("Factorial of %d is: %d\n", n, fact);
    return 0;
}