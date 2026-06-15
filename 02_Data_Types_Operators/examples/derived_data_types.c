#include <stdio.h>
#include <string.h>

// Structure example
struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    // 1. Array example
    int numbers[5] = {10, 20, 30, 40, 50};
    printf("Array elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // 2. Pointer example
    int x = 100;
    int *ptr = &x;  // pointer stores address of x
    printf("Value of x using pointer: %d\n", *ptr);
    printf("Address of x using pointer: %p\n", ptr);

    // 3. Structure example
    struct Student s1;
    s1.id = 1;
    strcpy(s1.name, "Badhon");
    s1.marks = 95.5;

    printf("Student Info:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
