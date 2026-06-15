#include <stdio.h>

/*
 * string_basics.c
 * Demonstrates: String declaration, initialization, and output in C
 *
 * In C, a string is an ARRAY OF CHARACTERS terminated by a null character '\0'.
 * There is no dedicated 'string' type — we use char arrays.
 */

int main()
{
    /* ── 1. Declaring a char array (string) ───────────────────── */
    char name[20];   // reserves 20 bytes; can hold 19 chars + '\0'

    /* ── 2. Initializing at declaration ──────────────────────── */
    char greeting[6]  = {'H','e','l','l','o','\0'};  // manual way
    char language[]   = "C Programming";              // compiler adds '\0' automatically
    char city[50]     = "Dhaka";

    printf("Greeting : %s\n", greeting);
    printf("Language : %s\n", language);
    printf("City     : %s\n\n", city);

    /* ── 3. Reading a single word (no spaces) ────────────────── */
    printf("Enter your first name (no spaces): ");
    scanf("%s", name);              // scanf stops at whitespace
    printf("Hello, %s!\n\n", name);

    /* ── 4. Accessing individual characters ──────────────────── */
    char word[] = "BUET";
    printf("Characters of '%s':\n", word);
    for (int i = 0; word[i] != '\0'; i++) {
        printf("  word[%d] = '%c'  (ASCII: %d)\n", i, word[i], word[i]);
    }

    /* ── 5. The null terminator '\0' ─────────────────────────── */
    /*
     * Every string in C ends with '\0' (ASCII value 0).
     * This is how functions like printf know where the string ends.
     *
     * "BUET" in memory:
     *   Index:  0    1    2    3    4
     *   Char:  'B'  'U'  'E'  'T'  '\0'
     */
    printf("\nSize of char array \"BUET\" (with \\0): %zu bytes\n", sizeof(word));

    return 0;
}
