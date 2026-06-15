#include <stdio.h>
#include <stdlib.h>

/*
 * struct_file_io.c
 * Demonstrates: Writing and reading entire struct records to/from a binary file
 *
 * fwrite() writes raw bytes of a struct to a file.
 * fread()  reads them back — perfectly reconstructing the struct.
 * This is much more efficient than writing field-by-field with fprintf.
 */

typedef struct {
    int    id;
    char   name[50];
    float  gpa;
} Student;

void write_students(const char *filename, Student *students, int count)
{
    FILE *fp = fopen(filename, "wb");   // "wb" = write binary
    if (fp == NULL) {
        printf("Error: Cannot open file for writing.\n");
        return;
    }

    // Write all records in one call
    fwrite(students, sizeof(Student), count, fp);
    printf("Wrote %d student record(s) to '%s'.\n", count, filename);
    fclose(fp);
}

void read_students(const char *filename)
{
    FILE *fp = fopen(filename, "rb");   // "rb" = read binary
    if (fp == NULL) {
        printf("Error: Cannot open file for reading.\n");
        return;
    }

    Student s;
    printf("\n--- Reading from file ---\n");
    printf("%-5s %-20s %s\n", "ID", "Name", "GPA");
    printf("%-5s %-20s %s\n", "---", "--------------------", "---");

    // Read one struct at a time until EOF
    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        printf("%-5d %-20s %.2f\n", s.id, s.name, s.gpa);
    }
    fclose(fp);
}

int main()
{
    // Create sample student records
    Student students[] = {
        {1, "Badhon",    3.85f},
        {2, "Senorita",  3.72f},
        {3, "Rafiq",     3.91f},
        {4, "Lamia",     3.68f}
    };
    int count = sizeof(students) / sizeof(students[0]);

    const char *filename = "../practice/students.dat";

    // Write to binary file
    write_students(filename, students, count);

    // Read back and display
    read_students(filename);

    /* ── Key concept: Binary vs Text file I/O ─────────────────── */
    /*
     *  TEXT mode ("r","w","a"):
     *    - Human-readable (you can open with Notepad)
     *    - fprintf/fscanf — field by field
     *    - Slower for structured data
     *
     *  BINARY mode ("rb","wb","ab"):
     *    - Raw bytes — not human-readable
     *    - fwrite/fread — entire struct at once
     *    - Faster, exact copy of struct in memory
     *    - Ideal for databases and record files
     */

    return 0;
}
