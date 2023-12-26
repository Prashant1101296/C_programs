#include <stdio.h>

// Function to add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to multiply two numbers
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to divide two numbers
float divide(float num1, float num2) {
    // Check for division by zero
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }
}

int main() {
    // Declare variables to store numbers
    float num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform different calculations using functions
    printf("Sum: %.2f\n", add(num1, num2));
    printf("Difference: %.2f\n", subtract(num1, num2));
    printf("Product: %.2f\n", multiply(num1, num2));
    printf("Quotient: %.2f\n", divide(num1, num2));

    return 0;
}
