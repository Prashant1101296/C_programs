#include <stdio.h>

// Function to perform addition
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to perform subtraction
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to perform multiplication
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to perform division
float divide(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int main() {
    float num1, num2;
    char operation;

    // Prompt the user for two numbers and the operation
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Perform the operation and display the result
    switch (operation) {
        case '+':
            printf("Result: %.2f\n", add(num1, num2));
            break;
        case '-':
            printf("Result: %.2f\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result: %.2f\n", multiply(num1, num2));
            break;
        case '/':
            printf("Result: %.2f\n", divide(num1, num2));
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
