#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Need at least 2 elements.\n");
        return 0;
    }

    int a[n];
    int max = INT_MIN, smax = INT_MIN;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            smax = max;
            max = a[i];
        } else if (a[i] < max && a[i] > smax) {
            smax = a[i];
        }
    }

    if (smax == INT_MIN)
        printf("There is no second largest element.\n");
    else
        printf("Second largest is: %d\n", smax);

    return 0;
}
