#include <stdio.h>
#include <stdlib.h>

/*
 * dynamic_2d_array.c
 * Demonstrates: Allocating and deallocating a 2D array on the heap
 *
 * A static 2D array: int arr[3][4]  — fixed at compile time
 * A dynamic 2D array uses int** — rows and columns set at runtime
 *
 * Memory Layout (rows=3, cols=4):
 *
 *   matrix (int**)
 *      │
 *      ├── matrix[0] (int*) ──► [ _ ][ _ ][ _ ][ _ ]   row 0
 *      ├── matrix[1] (int*) ──► [ _ ][ _ ][ _ ][ _ ]   row 1
 *      └── matrix[2] (int*) ──► [ _ ][ _ ][ _ ][ _ ]   row 2
 */

int main()
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    /* ── Step 1: Allocate array of row POINTERS ───────────────── */
    int **matrix = (int **) malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    /* ── Step 2: Allocate each row ───────────────────────────── */
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *) malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Row %d allocation failed!\n", i);
            return 1;
        }
    }

    /* ── Step 3: Fill the matrix ─────────────────────────────── */
    printf("\nEnter %d values (%dx%d matrix):\n", rows * cols, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("  [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    /* ── Step 4: Display the matrix ──────────────────────────── */
    printf("\nYour %dx%d Matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        printf("  ");
        for (int j = 0; j < cols; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    /* ── Step 5: Sum of all elements ─────────────────────────── */
    int sum = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum += matrix[i][j];
    printf("\nSum of all elements: %d\n", sum);

    /* ── Step 6: FREE MEMORY (ALWAYS — avoid memory leaks!) ───── */
    // Free each row first, then the pointer array
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);        // free each row
        matrix[i] = NULL;
    }
    free(matrix);               // free the row-pointer array
    matrix = NULL;

    printf("\nMemory freed successfully.\n");
    return 0;
}
