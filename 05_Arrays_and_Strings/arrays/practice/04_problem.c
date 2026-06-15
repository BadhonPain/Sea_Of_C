#include <stdio.h>
// problem : same as 3, just now user can choose as their own
int main()
{
    int arr[10];
    printf("Whose Multiplication Table? ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        arr[i - 1] = n * i + n;
        printf("%d\n", arr[i - 1]);
    }

    return 0;
}