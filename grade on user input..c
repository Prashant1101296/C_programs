#include <stdio.h>

int main() {
    // Declare a variable to store the percentage
    float percentage;

    // Prompt the user to enter the percentage
    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    // Determine the grade based on the percentage
    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
