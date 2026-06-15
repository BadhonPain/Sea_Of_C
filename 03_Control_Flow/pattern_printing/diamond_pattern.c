#include <stdio.h>

/*
 * diamond_pattern.c
 * Demonstrates: Nested loops — prints a diamond shape of stars
 *
 * Output for n=5:
 *     *
 *    ***
 *   *****
 *  *******
 * *********
 *  *******
 *   *****
 *    ***
 *     *
 */

int main()
{
    int n;
    printf("Enter the half-height of the diamond (e.g. 5): ");
    scanf("%d", &n);

    /* ── Upper half (including middle row) ───────────────────── */
    for (int row = 1; row <= n; row++) {
        // Print leading spaces
        for (int space = 1; space <= n - row; space++) {
            printf(" ");
        }
        // Print stars (always odd: 1, 3, 5, ...)
        for (int star = 1; star <= (2 * row - 1); star++) {
            printf("*");
        }
        printf("\n");
    }

    /* ── Lower half ───────────────────────────────────────────── */
    for (int row = n - 1; row >= 1; row--) {
        // Print leading spaces
        for (int space = 1; space <= n - row; space++) {
            printf(" ");
        }
        // Print stars
        for (int star = 1; star <= (2 * row - 1); star++) {
            printf("*");
        }
        printf("\n");
    }

    /*
     * HOW IT WORKS (for n=4, row=2 in upper half):
     *   spaces = n - row = 4 - 2 = 2  →  "  "
     *   stars  = 2*row-1 = 2*2-1 = 3  →  "***"
     *   Result: "  ***"
     *
     * Upper half rows: 1 → n  (stars grow from 1 to 2n-1)
     * Lower half rows: n-1 → 1 (stars shrink back from 2n-3 to 1)
     */

    return 0;
}
