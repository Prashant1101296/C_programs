#include <stdio.h>

int main() {
    // Declare variables to store the numbers
    float num1, num2;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%f", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform addition
    printf("Sum: %.2f\n", num1 + num2);

    // Perform subtraction
    printf("Difference: %.2f\n", num1 - num2);

    // Perform multiplication
    printf("Product: %.2f\n", num1 * num2);

    // Perform division (check for division by zero)
    if (num2 != 0) {
        printf("Quotient: %.2f\n", num1 / num2);
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
