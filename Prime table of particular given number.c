#include <stdio.h>

int main() {
    // Declare a variable to store the number
    int number;

    // Prompt the user to enter the number
    printf("Enter the number: ");
    scanf("%d", &number);

    // Display the table for the given number
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
