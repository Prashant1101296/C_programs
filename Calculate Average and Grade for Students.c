#include <stdio.h>

int main() {
    int n;

    // Prompt the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array to store the scores
    int scores[n];

    // Prompt the user to enter the scores
    printf("Enter the scores of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Calculate average score
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    float average = (float)sum / n;

    // Assign grades and display results
    printf("Average Score: %.2f\n", average);
    printf("Grades:\n");

    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);

        if (scores[i] >= 90) {
            printf("A\n");
        } else if (scores[i] >= 80) {
            printf("B\n");
        } else if (scores[i] >= 70) {
            printf("C\n");
        } else if (scores[i] >= 60) {
            printf("D\n");
        } else {
            printf("F\n");
        }
    }

    return 0;
}
