#include <stdio.h>
#include <stdlib.h>
// Problem : Write a programme to demonstrate the usage of free with malloc
int main()
{
    int n;
    scanf("%d", &n);
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    ptr[0] = 3.98;
    free(ptr);
    printf("%.2f", ptr[0]); // you will see garbage value or zero
    // but we thought that it'll be 3.98

    return 0;
}