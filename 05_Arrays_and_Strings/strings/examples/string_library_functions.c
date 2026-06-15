#include <stdio.h>
#include <string.h>     // Required for all string library functions

/*
 * string_library_functions.c
 * Demonstrates: Key functions from <string.h>
 *
 * strlen  → length of string
 * strcpy  → copy one string into another
 * strcat  → concatenate (join) two strings
 * strcmp  → compare two strings
 * strrev  → reverse a string (non-standard, common in MinGW/Windows)
 * strupr  → uppercase (non-standard, common in MinGW/Windows)
 */

int main()
{
    /* ── 1. strlen() — string length ──────────────────────────── */
    char str1[] = "Hello";
    printf("strlen(\"%s\") = %zu\n\n", str1, strlen(str1));
    // Returns 5 — does NOT count the '\0' terminator

    /* ── 2. strcpy() — copy a string ─────────────────────────── */
    char source[] = "Dhaka";
    char dest[50];                  // destination must be large enough!

    strcpy(dest, source);           // copies source → dest
    printf("After strcpy: dest = \"%s\"\n\n", dest);

    /* ── 3. strcat() — concatenate strings ───────────────────── */
    char first[50] = "Hello, ";
    char second[]  = "World!";

    strcat(first, second);          // appends second to first
    printf("After strcat: \"%s\"\n\n", first);

    /* ── 4. strcmp() — compare two strings ───────────────────── */
    /*
     * Returns:
     *   0    → strings are EQUAL
     *  < 0   → first string comes BEFORE second (alphabetically)
     *  > 0   → first string comes AFTER  second (alphabetically)
     */
    char a[] = "apple";
    char b[] = "banana";
    char c[] = "apple";

    printf("strcmp(\"%s\", \"%s\") = %d  ", a, b, strcmp(a, b));
    printf("(a comes before b)\n");

    printf("strcmp(\"%s\", \"%s\") = %d  ", a, c, strcmp(a, c));
    printf("(equal)\n");

    printf("strcmp(\"%s\", \"%s\") = %d  ", b, a, strcmp(b, a));
    printf("(b comes after a)\n\n");

    /* Practical use — password check */
    char password[] = "secret123";
    char input[50];
    printf("Enter password: ");
    scanf("%s", input);

    if (strcmp(input, password) == 0) {
        printf("Access Granted!\n\n");
    } else {
        printf("Wrong Password!\n\n");
    }

    /* ── 5. strchr() — find first occurrence of a character ───── */
    char sentence[] = "C Programming is fun!";
    char *pos = strchr(sentence, 'i');

    if (pos != NULL) {
        printf("First 'i' found at position: %ld\n", pos - sentence);
    }

    /* ── 6. strstr() — find a substring ──────────────────────── */
    char *found = strstr(sentence, "fun");
    if (found != NULL) {
        printf("Found \"fun\" at: \"%s\"\n", found);
    }

    return 0;
}
