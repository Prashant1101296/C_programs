#include <stdio.h>

int main() {
    int sum = 0;

    // Iterate through numbers from 1 to 100
    for (int i = 1; i <= 100; i++) {
        // Check if the number is even
        if (i % 2 == 0) {
            // Add even number to the sum
            sum += i;
        }
    }

    // Print the sum of even numbers
    printf("Sum of even numbers from 1 to 100: %d\n", sum);

    return 0;
}
