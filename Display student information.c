#include <stdio.h>

int main() {
    // Declare variables to store student information
    char name[50];
    int rollNumber;
    float marks;

    // Prompt the user to enter student information
    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &rollNumber);

    printf("Enter marks: ");
    scanf("%f", &marks);

    // Display the entered information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollNumber);
    printf("Marks: %.2f\n", marks);

    return 0;
}
