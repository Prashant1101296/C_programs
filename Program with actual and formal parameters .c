#include <stdio.h>

// Function to calculate the volume of a cuboid
float calculateCuboidVolume(float length, float breadth, float height) {
    return length * breadth * height;
}

int main() {
    // Declare variables to store length, breadth, and height
    float length, breadth, height;

    // Prompt the user to enter the dimensions of the cuboid
    printf("Enter the length of the cuboid: ");
    scanf("%f", &length);

    printf("Enter the breadth of the cuboid: ");
    scanf("%f", &breadth);

    printf("Enter the height of the cuboid: ");
    scanf("%f", &height);

    // Calculate the volume using the function
    float volume = calculateCuboidVolume(length, breadth, height);

    // Display the result
    printf("Volume of the cuboid: %.2f\n", volume);

    return 0;
}
