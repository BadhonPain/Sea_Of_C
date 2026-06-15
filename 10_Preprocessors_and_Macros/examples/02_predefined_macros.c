#include <stdio.h>
int main() {
    printf("File: %s\n", __FILE__); // name of file
    printf("Date: %s\n", __DATE__); // current date
    printf("Time: %s\n", __TIME__); // current time
    printf("Line: %d\n", __LINE__); // this line number
    printf("ANSI: %d\n", __STDC__); // running on ANSI or not
    return 0;
}
