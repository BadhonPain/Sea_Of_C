#include <stdio.h>

/*
 * nested_if_demo.c
 * Demonstrates: Nested if statements
 * Examples: Leap year checker, Triangle classifier
 */

int main()
{
    /* ── 1. Leap Year Checker ─────────────────────────────────── */
    /*
     * A year is a leap year if:
     *   - Divisible by 4  AND
     *   - NOT divisible by 100, OR divisible by 400
     */
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a Leap Year (divisible by 400).\n", year);
            } else {
                printf("%d is NOT a Leap Year (divisible by 100 but not 400).\n", year);
            }
        } else {
            printf("%d is a Leap Year (divisible by 4 but not 100).\n", year);
        }
    } else {
        printf("%d is NOT a Leap Year.\n", year);
    }

    /* ── 2. Triangle Classifier ───────────────────────────────── */
    int a, b, c;
    printf("\nEnter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // First check if it can form a valid triangle
    if (a + b > c && b + c > a && a + c > b) {
        printf("Valid triangle. ");

        if (a == b && b == c) {
            printf("Type: Equilateral (all sides equal)\n");
        } else if (a == b || b == c || a == c) {
            printf("Type: Isosceles (two sides equal)\n");
        } else {
            printf("Type: Scalene (all sides different)\n");
        }

        // Check if it is a right triangle
        int aa = a*a, bb = b*b, cc = c*c;
        if (aa + bb == cc || bb + cc == aa || aa + cc == bb) {
            printf("Note: It is also a Right Triangle!\n");
        }

    } else {
        printf("Invalid triangle — the sides cannot form a triangle.\n");
    }

    return 0;
}
