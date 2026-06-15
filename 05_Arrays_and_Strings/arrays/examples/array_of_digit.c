#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[10];
    int i = 0;
    while (n)
    {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }
    for (int j= i-1; j >=0 ; j--)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}