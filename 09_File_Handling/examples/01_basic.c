#include <stdio.h>

int main()
{
    FILE *file_ptr;
    file_ptr = fopen("../data/ai_effect.txt", "r");

    if (file_ptr == NULL) // change the file name and then run to visualize this 
    {
        printf("The File you wants to read doesn't exist !\n");
    } 
    /*
    Why use NULL? ## NULL = special value meaning “no address / empty pointer”.

   1. Safety purpose – if we give NULL instead of a garbage address to an uninitialized pointer
                       we can decrease bug of our programme

   2. To check – to check wheather the pointer is pointing to something or not
    */
    else {
    int number;
    fscanf(file_ptr, "%d", &number);
    printf("%d ", number);
    
    fscanf(file_ptr, "%d", &number);
    printf("%d ", number);

    fscanf(file_ptr, "%d", &number);
    printf("%d ", number);
    // file reads line by line like human thats why it's output is like that

    fclose(file_ptr); // you should close the file after reading,, same as book
    }
    return 0;
}