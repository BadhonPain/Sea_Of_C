#include <stdio.h>

int main()
{
    FILE *file_ptr;
    file_ptr = fopen("../data/course_on_ml.txt", "w");

    int number = 87;
    fprintf(file_ptr, "%d ", number);
    number = 67;
    fprintf(file_ptr, "%d", number);
    fclose(file_ptr);
    // but try to run this code after editing the txt file
    // by opening it. But you should see that you wrote is vanished
    // and your codes info is written in the file

    return 0;
}
