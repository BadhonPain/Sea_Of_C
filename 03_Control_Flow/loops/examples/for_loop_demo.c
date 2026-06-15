#include <stdio.h>

/*
 * for_loop_demo.c
 * Demonstrates: for loop — syntax, use cases, nested loops
 */

int main()
{
    /* ── 1. Basic for loop ────────────────────────────────────── */
    printf("Counting 1 to 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    /* ── 2. Counting backwards ───────────────────────────────── */
    printf("Countdown from 5:\n");
    for (int i = 5; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("Go!\n\n");

    /* ── 3. Summing with for loop ────────────────────────────── */
    int n;
    printf("Enter n to compute sum 1+2+...+n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum = %d\n\n", sum);

    /* ── 4. Multiplication table ─────────────────────────────── */
    int num;
    printf("Enter a number for its multiplication table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    /* ── 5. Nested for loops — 2D matrix print ───────────────── */
    printf("\n3x3 Index Matrix:\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("[%d][%d] ", row, col);
        }
        printf("\n");
    }

    /*
     * HOW THE for LOOP WORKS:
     *
     *   for (initialization; condition; update) {
     *         body
     *   }
     *
     *   1. initialization → runs ONCE at the start
     *   2. condition      → checked BEFORE every iteration; stops when false
     *   3. body           → runs if condition is true
     *   4. update         → runs AFTER every body execution
     *   Then repeats from step 2.
     */

    return 0;
}
