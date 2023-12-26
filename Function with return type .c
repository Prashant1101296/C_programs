#include <stdio.h>

// Function to calculate the square of a number
int calculateSquare(int num) {
    return num * num;
}

int main() {
    // Declare a variable to store the number
    int number;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the square using the function
    int result = calculateSquare(number);

    // Display the result
    printf("Square of %d is: %d\n", number, result);

    return 0;
}
