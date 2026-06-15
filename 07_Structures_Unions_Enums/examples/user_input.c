#include <stdio.h>
#include <string.h>
#define MAX_SIZE 50
// Make a struct to organize 3 students name, roll, and
// mark in Math & Physics & take input from students
struct academic_info
{
    char name[MAX_SIZE];
    int roll;
    int mark_in_Math, mark_in_Physics;
};

int main()
{
    struct academic_info student_1, student_2, student_3;
    printf("Enter 1st students info :\nEnter Name: ");
    fgets(student_1.name, MAX_SIZE, stdin);
    printf("Enter Roll: ");
    scanf("%d", &student_1.roll);
    printf("Enter Mark in Math : ");
    scanf("%d", &student_1.mark_in_Math);
    printf("Enter Mark in Physics : ");
    scanf("%d", &student_1.mark_in_Physics);
    printf("Enter 2nd students info :\nEnter Name: ");
    fgets(student_2.name, MAX_SIZE, stdin);
    printf("Enter Roll: ");
    scanf("%d", &student_2.roll);
    printf("Enter Mark in Math : ");
    scanf("%d", &student_2.mark_in_Math);
    printf("Enter Mark in Physics : ");
    scanf("%d", &student_2.mark_in_Physics);
    printf("Enter 3rd students info :\nEnter Name: ");
    fgets(student_3.name, MAX_SIZE, stdin);
    printf("Enter Roll: ");
    scanf("%d", &student_3.roll);
    printf("Enter Mark in Math : ");
    scanf("%d", &student_3.mark_in_Math);
    printf("Enter Mark in Physics : ");
    scanf("%d", &student_3.mark_in_Physics);

    printf("Name: %sRoll : %d\nMark in Math: %d\nMark in Physics %d\n", student_1.name, student_1.roll, student_1.mark_in_Math, student_1.mark_in_Physics);

    printf("Name: %sRoll : %d\nMark in Math: %d\nMark in Physics %d\n", student_2.name, student_2.roll, student_2.mark_in_Math, student_2.mark_in_Physics);

    printf("Name: %sRoll : %d\nMark in Math: %d\nMark in Physics %d\n", student_3.name, student_3.roll, student_3.mark_in_Math, student_3.mark_in_Physics);

    return 0;
}