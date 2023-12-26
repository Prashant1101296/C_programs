#include <stdio.h>

// Function to calculate the GCD of two numbers
int calculateGCD(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    int num1, num2;

    // Prompt the user for two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate and display the GCD
    printf("GCD of %d and %d is: %d\n", num1, num2, calculateGCD(num1, num2));

    return 0;
}
