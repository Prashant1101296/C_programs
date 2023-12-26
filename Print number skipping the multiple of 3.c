#include <stdio.h>

int main() {
    // Print numbers from 1 to 100, skipping multiples of 3
    for (int i = 1; i <= 100; i++) {
        // Check if the current number is a multiple of 3
        if (i % 3 == 0) {
            // Skip the current iteration
            continue;
        }
        // Print the number
        printf("%d\n", i);
    }

    return 0;
}
