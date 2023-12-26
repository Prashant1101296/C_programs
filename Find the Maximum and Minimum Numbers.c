#include <stdio.h>

int main() {
    int n;

    // Prompt the user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to store the numbers
    int arr[n];

    // Prompt the user to enter the elements into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find maximum and minimum
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Display the maximum and minimum values
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
