#include <stdio.h>

int main()
{
    int arr[5];
    

for (int  i = 0; i <= 4; i++) {
    printf("Enter element number : %d\n " ,i+1);
scanf("%d",&arr[i]);

}
for (int  i = 0; i < 5; i++)
{
    printf("%d ",arr[i]);
}


    



    // float a[3]={1.2,3.4,5.7};
    // printf("%f",a[3]); //-> output : 0 ->in an array if you don't define a data of any index, it is considered that the value is 0
// char arr[4]={'a','n','Y','%'};
// printf("%c",arr[3]);
    return 0;
}