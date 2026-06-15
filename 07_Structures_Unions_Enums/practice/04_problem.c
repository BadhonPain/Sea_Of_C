#include <stdio.h>
// Problem : Write a programme to illustrate the use of ->(arrow) operator

typedef struct product
{
    int amount; // in kg
    int price;  // in tk
} pr;

int main()
{
    pr milk;
    pr *ptr;
    ptr = &milk;
    milk.amount = 1;
    milk.price = 50;
    printf("%d kg milk is of %d tk", ptr->amount, (*ptr).price);

    return 0;
}