#include <stdio.h>

// Function to calculate the area of a rectangle
float calculateRectangleArea(float length, float breadth) {
    return length * breadth;
}

int main() {
    // Declare variables to store length and breadth
    float length, breadth;

    // Prompt the user to enter the length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate the area using the function
    float area = calculateRectangleArea(length, breadth);

    // Display the result
    printf("Area of the rectangle: %.2f\n", area);

    return 0;
}
