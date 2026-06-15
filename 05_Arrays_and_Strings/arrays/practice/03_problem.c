#include <stdio.h>
/*
problem: Create an array of 10 integer and the multiplication table of 5 in it
*/
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * i + 5; //Try another way
        /*
        for (int i = 1; i <= 10; i++)
        arr[i] = 5 * i + 5;
        can this code do the same thing?
        */ 
        printf("%d\n", arr[i]);
    }

    return 0;
}