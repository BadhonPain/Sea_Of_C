#include <stdio.h>
// Problem : Write a struct to store two dates and compare them with a function
typedef struct Date
{
    int dd;
    int mm;
    int yyyy;
}tarikh;
int compare(tarikh date1, tarikh date2)
{
    // if first date is future so it will return 1
    if (date1.yyyy > date2.yyyy)
    {
        return 1;
    }
    else if (date1.yyyy < date2.yyyy)
    {
        return -1;
    }
    else
    {
        if (date1.mm > date2.mm)
        {
            return 1;
        }
        else if (date1.mm < date2.mm)
        {
            return -1;
        }
        else
        {
            if (date1.dd > date2.dd)
            {
                return 1;
            }
            else if (date1.dd < date2.dd)
            {
                return -1;
            }
            else
                return 0;
        }
    }
}

int main()
{

    tarikh date1 = {8, 11, 2006};
    tarikh date2 = {9, 11, 2006};
    if (compare(date1, date2) == 1)
    {
        printf("First Date is Future\n");
    }
    else if (compare(date1, date2) == 0)
    {
        printf("Both Dates are same\n");
    }
//Try to implement the functionality of comapre function with Recursion
    else
        printf("Second Date is Future\n");

    return 0;
}