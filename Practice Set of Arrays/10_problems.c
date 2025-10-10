// 48.Suppose an array has n positive integers (n≥2).
// Show a code segment to find GCD of all numbers in the array.
// BUET_TF_[15-16 3b]
#include <stdio.h>
int GCD(int a, int b)
{
    
    while (b)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int gcd = arr[0];
    for (int i = 1; i < n; i++)
    {
        gcd = GCD(gcd, arr[i]);
    }
    printf("%d", gcd);

    return 0;
}
