#include <stdio.h>

int main() {
    int n, searchElement;

    // Prompt the user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to store the elements
    int arr[n];

    // Prompt the user to enter the elements into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Prompt the user for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Search for the element
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            found = 1;
            break;
        }
    }

    // Display the result
    if (found) {
        printf("Element %d is found in the array.\n", searchElement);
    } else {
        printf("Element %d is not found in the array.\n", searchElement);
    }

    return 0;
}
