#include <stdio.h>

struct info
{
    float salary;
    int t_shirt;
    char brand[20];
};

int main() {
    int n;
    scanf("%d", &n);

    struct info badhon[n];
    for (int i = 0; i < n; i++)
    {
        badhon[i].salary = i*1.573+1600;
        badhon[i].t_shirt = i+1;
    }
    for (int i = 0; i < n; i++)
    {
       printf("Badhon's salary of %d month : %.3f\nBadhon's new T-shirt: %d\n", i+1, badhon[i].salary, badhon[i].t_shirt); 
    }
    
    
    


    return 0;
}