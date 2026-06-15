#include <stdio.h>
#include <stdlib.h>
// Problem : Write a programme to create a dynamic array of floats
//  of size n using malloc
int main()
{
    int n;
    scanf("%d", &n);
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.1f ", ptr[i]);
    }

    return 0;
}