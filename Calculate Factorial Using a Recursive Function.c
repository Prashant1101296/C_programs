#include <stdio.h>

// Recursive function to calculate factorial
int calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}

int main() {
    int num;

    // Prompt the user for a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate and display the factorial
    printf("Factorial of %d is: %d\n", num, calculateFactorial(num));

    return 0;
}
