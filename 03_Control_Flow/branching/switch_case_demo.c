#include <stdio.h>

/*
 * switch_case_demo.c
 * Demonstrates: switch statement, default case, fall-through prevention
 */

int main()
{
    /* ── 1. Basic switch — Day of week ───────────────────────── */
    int day;
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:  printf("Monday\n");    break;
        case 2:  printf("Tuesday\n");   break;
        case 3:  printf("Wednesday\n"); break;
        case 4:  printf("Thursday\n");  break;
        case 5:  printf("Friday\n");    break;
        case 6:  printf("Saturday\n");  break;
        case 7:  printf("Sunday\n");    break;
        default: printf("Invalid day number! Enter 1-7.\n"); break;
    }

    /* ── 2. Switch — Simple calculator ──────────────────────── */
    double a, b;
    char op;

    printf("\nEnter expression (e.g. 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': printf("Result: %.2f\n", a + b); break;
        case '-': printf("Result: %.2f\n", a - b); break;
        case '*': printf("Result: %.2f\n", a * b); break;
        case '/':
            if (b != 0)
                printf("Result: %.2f\n", a / b);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Unknown operator: %c\n", op);
    }

    /* ── 3. Intentional fall-through ─────────────────────────── */
    // Weekend checker — Saturday OR Sunday both print the same message
    int d = 6;
    switch (d) {
        case 6:  // intentional fall-through
        case 7:
            printf("\nDay %d is a weekend!\n", d);
            break;
        default:
            printf("\nDay %d is a weekday.\n", d);
    }

    return 0;
}
