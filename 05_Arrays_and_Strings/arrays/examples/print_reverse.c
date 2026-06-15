#include <stdio.h>
//Take a five numbers array from users as input and print as reverse

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element number_%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Reverse of your array : ");
    for (int i = 4; i >=0; i--)
    {
        printf("%d ",arr[i]);
    }
    
    
    







    return 0;
}