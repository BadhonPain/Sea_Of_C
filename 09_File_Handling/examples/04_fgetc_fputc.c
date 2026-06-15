#include <stdio.h>

int main()
{
    FILE *file_ptr;
    file_ptr = fopen("../data/brain_drain.txt", "w");
    char  ch ;
    ch = fgetc(file_ptr); // Actually, fgetc is a function that reads character
    printf("%c", ch);
    // char ch2 = 'x';
    // ch2 = fputc(ch2,file_ptr); //  this will clear the whole file and the put x inside it
    fclose(file_ptr);
    return 0;
}
