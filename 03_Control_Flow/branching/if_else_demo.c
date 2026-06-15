#include <stdio.h>

/*
 * if_else_demo.c
 * Demonstrates: if, if-else, and if-else-if ladder
 */

int main()
{
    /* ── 1. Simple if ─────────────────────────────────────────── */
    int score = 75;

    if (score >= 50) {
        printf("Result: PASS\n");
    }

    /* ── 2. if-else (binary decision) ────────────────────────── */
    int temperature = 38;

    if (temperature > 37) {
        printf("Status: Fever detected!\n");
    } else {
        printf("Status: Normal temperature.\n");
    }

    /* ── 3. if-else if ladder (multiple conditions) ───────────── */
    int marks;
    printf("\nEnter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 80) {
        printf("Grade: A+\n");
    } else if (marks >= 70) {
        printf("Grade: A\n");
    } else if (marks >= 60) {
        printf("Grade: B\n");
    } else if (marks >= 50) {
        printf("Grade: C\n");
    } else if (marks >= 40) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    /* ── 4. Ternary operator (compact if-else) ────────────────── */
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    // condition ? value_if_true : value_if_false
    printf("%d is %s\n", num, (num % 2 == 0) ? "Even" : "Odd");

    return 0;
}
