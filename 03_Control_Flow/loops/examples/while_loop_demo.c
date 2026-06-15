#include <stdio.h>

/*
 * while_loop_demo.c
 * Demonstrates: while loop — syntax, use cases, infinite loop with break
 *
 * KEY DIFFERENCE from for loop:
 *   - Use 'for'   when you KNOW the number of iterations ahead of time.
 *   - Use 'while' when you loop until a CONDITION becomes false
 *     (iterations count is unknown before the loop starts).
 */

int main()
{
    /* ── 1. Basic while loop ──────────────────────────────────── */
    printf("Counting 1 to 5 with while:\n");
    int i = 1;                  // initialization BEFORE the loop
    while (i <= 5) {            // condition checked at the TOP
        printf("%d ", i);
        i++;                    // update INSIDE the loop body
    }
    printf("\n\n");

    /* ── 2. Input validation — loop until valid input ─────────── */
    int age;
    printf("Enter your age (must be 1-120): ");
    scanf("%d", &age);

    while (age < 1 || age > 120) {
        printf("Invalid! Please enter a valid age (1-120): ");
        scanf("%d", &age);
    }
    printf("Age accepted: %d\n\n", age);

    /* ── 3. Digit sum using while ─────────────────────────────── */
    int num;
    printf("Enter a positive integer to compute digit sum: ");
    scanf("%d", &num);

    int original = num;
    int digitSum = 0;
    while (num > 0) {
        digitSum += num % 10;   // extract last digit
        num /= 10;              // remove last digit
    }
    printf("Sum of digits of %d = %d\n\n", original, digitSum);

    /* ── 4. Reverse a number ─────────────────────────────────── */
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    int reversed = 0;
    int temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        reversed  = reversed * 10 + digit;
        temp /= 10;
    }
    printf("Reversed: %d\n\n", reversed);

    /* ── 5. Menu-driven loop (loop until user quits) ─────────── */
    int choice;
    printf("=== Simple Menu ===\n");
    printf("1. Say Hello\n2. Say Bye\n0. Exit\n");

    while (1) {                             // infinite loop
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting...\n");
            break;                          // break exits the loop
        } else if (choice == 1) {
            printf("Hello!\n");
        } else if (choice == 2) {
            printf("Bye!\n");
        } else {
            printf("Unknown option.\n");
        }
    }

    return 0;
}
