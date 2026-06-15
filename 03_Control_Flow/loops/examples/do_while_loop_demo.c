#include <stdio.h>

/*
 * do_while_loop_demo.c
 * Demonstrates: do-while loop — syntax and use cases
 *
 * KEY DIFFERENCE from while loop:
 *   - 'while'    → checks condition BEFORE executing the body.
 *                  Body may run ZERO times if condition is false initially.
 *   - 'do-while' → executes the body FIRST, THEN checks condition.
 *                  Body is GUARANTEED to run at least ONCE.
 *
 * Best used for: menus, input validation, anything that must run at least once.
 */

int main()
{
    /* ── 1. Basic do-while ────────────────────────────────────── */
    printf("Counting 1 to 5 with do-while:\n");
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);           // condition checked AFTER body runs
    printf("\n\n");

    /* ── 2. Prove it runs at least once ──────────────────────── */
    int x = 100;
    printf("Condition is FALSE from start (x=%d, checking x < 5):\n", x);
    do {
        printf("This line ran once even though x=%d is NOT < 5!\n", x);
    } while (x < 5);
    printf("\n");

    /* ── 3. Input validation — MUST run at least once ─────────── */
    int password;
    do {
        printf("Enter the secret PIN (hint: it's 1234): ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Wrong PIN! Try again.\n");
        }
    } while (password != 1234);
    printf("Access granted!\n\n");

    /* ── 4. do-while menu (most natural use case) ────────────── */
    int choice;
    printf("=== Calculator Menu ===\n");

    do {
        printf("\n1. Add  2. Subtract  3. Multiply  0. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Goodbye!\n");
        } else {
            double a, b;
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);

            switch (choice) {
                case 1: printf("%.2f + %.2f = %.2f\n", a, b, a + b); break;
                case 2: printf("%.2f - %.2f = %.2f\n", a, b, a - b); break;
                case 3: printf("%.2f * %.2f = %.2f\n", a, b, a * b); break;
                default: printf("Invalid option.\n");
            }
        }
    } while (choice != 0);     // keep showing menu until user exits

    return 0;
}
