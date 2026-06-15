#include <stdio.h>

void fun(int a[])
{
    a[0] = 7; 
    return;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    

    printf("%d %d\n", arr[0], arr[1]);
    fun(arr); // -> just name to pass in function
    
    printf("%d %d", arr[0] , arr[1]);

    return 0;
}