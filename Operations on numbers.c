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
    float sum = num1 + num2;
    printf("Sum: %.2f\n", sum);

    // Perform subtraction
    float difference = num1 - num2;
    printf("Difference: %.2f\n", difference);

    // Perform multiplication
    float product = num1 * num2;
    printf("Product: %.2f\n", product);

    // Perform division (check for division by zero)
    if (num2 != 0) {
        float quotient = num1 / num2;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
