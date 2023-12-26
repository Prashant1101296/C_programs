#include <stdio.h>

// Function to calculate the factorial using recursion
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    // Declare a variable to store the number
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and display the factorial using the function
        printf("Factorial of %d is: %d\n", num, factorial(num));
    }

    return 0;
}
