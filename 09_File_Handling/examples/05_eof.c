#include <stdio.h>

int main()
{
    // but can we read the whole file?
    // yes, we can do it using fgetc
    FILE *file_ptr;
    file_ptr = fopen("brain_drain.txt", "r");
    char ch;
    while (1)
    {
        ch = fgetc(file_ptr);
        printf("%c", ch);
        if (ch == EOF)
        {
            break;
        }
    }

    fclose(file_ptr);
    return 0;
}
