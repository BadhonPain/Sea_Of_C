#include <stdio.h>
// sum of first n natural numbers using do while loop
int main() {
      int n ;
   scanf("%d", &n);
    int sum = 0;
    int i = 0;
    do
    {
        sum += i;
        i++;
    } while (i<= n);
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}