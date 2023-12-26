#include <stdio.h>

// Function prototypes
void moveUp(int *currentFloor);
void moveDown(int *currentFloor);
void displayFloor(int currentFloor);

int main() {
    int currentFloor = 1; // Initial floor is the ground floor (1st floor)
    int choice;

    do {
        // Display menu
        printf("\nElevator Menu:\n");
        printf("1: Move Up\n");
        printf("2: Move Down\n");
        printf("3: Display Current Floor\n");
        printf("4: Exit\n");

        // Prompt user for choice
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // Perform operations based on user choice
        switch (choice) {
            case 1:
                moveUp(&currentFloor);
                break;
            case 2:
                moveDown(&currentFloor);
                break;
            case 3:
                displayFloor(currentFloor);
                break;
            case 4:
                printf("Exiting the elevator simulation. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }

    } while (choice != 4);

    return 0;
}

// Function to move the elevator up
void moveUp(int *currentFloor) {
    if (*currentFloor < 10) {
        (*currentFloor)++;
        printf("Elevator moved up to floor %d\n", *currentFloor);
    } else {
        printf("Elevator is already at the top floor.\n");
    }
}

// Function to move the elevator down
void moveDown(int *currentFloor) {
    if (*currentFloor > 1) {
        (*currentFloor)--;
        printf("Elevator moved down to floor %d\n", *currentFloor);
    } else {
        printf("Elevator is already at the ground floor.\n");
    }
}

// Function to display the current floor
void displayFloor(int currentFloor) {
    printf("Current Floor: %d\n", currentFloor);
}
