#include <stdio.h>

// Function prototypes
int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
float division(int num1, int num2);

int main() {
    int choice;
    int num1, num2;
    
    do {
        // Display menu
        printf("\nSimple Calculator Menu:\n");
        printf("1: Addition\n");
        printf("2: Subtraction\n");
        printf("3: Multiplication\n");
        printf("4: Division\n");
        printf("5: Exit\n");
        
        // Prompt user for choice
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Perform operations based on user choice
        switch (choice) {
            case 1:
            case 2:
            case 3:
            case 4:
                // Prompt user for input numbers
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);

                // Perform the chosen operation and display the result
                switch (choice) {
                    case 1:
                        printf("Result: %d\n", addition(num1, num2));
                        break;
                    case 2:
                        printf("Result: %d\n", subtraction(num1, num2));
                        break;
                    case 3:
                        printf("Result: %d\n", multiplication(num1, num2));
                        break;
                    case 4:
                        // Check for division by zero
                        if (num2 != 0) {
                            printf("Result: %.2f\n", division(num1, num2));
                        } else {
                            printf("Error: Division by zero\n");
                        }
                        break;
                }
                break;

            case 5:
                printf("Exiting the calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }

    } while (choice != 5);

    return 0;
}

// Function to perform addition
int addition(int num1, int num2) {
    return num1 + num2;
}

// Function to perform subtraction
int subtraction(int num1, int num2) {
    return num1 - num2;
}

// Function to perform multiplication
int multiplication(int num1, int num2) {
    return num1 * num2;
}

// Function to perform division
float division(int num1, int num2) {
    return (float)num1 / num2;
}
