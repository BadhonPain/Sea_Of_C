#include <stdio.h>
#include <string.h>     // for strlen

/*
 * string_input_safe.c
 * Demonstrates: Reading strings WITH SPACES safely using fgets()
 *
 * THE PROBLEM WITH scanf("%s"):
 *   scanf("%s", str) stops reading at the FIRST WHITESPACE.
 *   So "Badhon Pain" would only store "Badhon" — the rest is lost.
 *
 * THE SOLUTION: fgets()
 *   fgets(buffer, size, stdin) reads an entire line including spaces.
 *   It stops at newline '\n' or when (size-1) characters are read.
 *   It also stores the '\n' newline character in the buffer — we trim it.
 */

// Helper function to remove trailing newline '\n' left by fgets
void trim_newline(char *str)
{
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';    // replace '\n' with null terminator
    }
}

int main()
{
    char fullName[100];
    char city[100];
    char sentence[200];

    /* ── 1. Read a full name with spaces ──────────────────────── */
    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    trim_newline(fullName);
    printf("Hello, %s!\n\n", fullName);

    /* ── 2. Read a city name ──────────────────────────────────── */
    printf("Enter your city: ");
    fgets(city, sizeof(city), stdin);
    trim_newline(city);
    printf("You live in: %s\n\n", city);

    /* ── 3. Word count in a sentence ─────────────────────────── */
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    trim_newline(sentence);

    int words = 0;
    int inWord = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\t') {
            if (!inWord) {
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    printf("Sentence : \"%s\"\n", sentence);
    printf("Word count: %d\n\n", words);

    /* ── 4. Comparison: scanf vs fgets ───────────────────────── */
    /*
     *  scanf("%s", buf)       → Fast, simple, but STOPS at spaces
     *  fgets(buf, size, stdin)→ Reads entire line including spaces
     *                           Always specify the buffer SIZE to
     *                           prevent buffer overflow attacks.
     *
     *  BUFFER OVERFLOW WARNING:
     *  Never use gets() — it has no size limit and is REMOVED from C11.
     *  Always use fgets() with the correct buffer size.
     */

    return 0;
}
