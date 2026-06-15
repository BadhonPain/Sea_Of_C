#include <stdio.h>
/*this code basically shows how to call functions one by one
and how function proto-types are needed in our programme
*/

void good_morning();
void good_afternoon();
void good_night();

int main() {
    good_morning();
    good_afternoon();   
    good_night();
    
    return 0;
}
void good_morning() {
    printf("Good Morning!\n");
    return ;
}
void good_afternoon() {
    printf("Good Afternoon!\n");
    return; 
}
void good_night() {
    printf("Good Night!\n");
    return ;
}