#include <stdio.h>

// Function to calculate the area of a rectangle
float calculateArea(float length, float width) {
    return length * width;
}

// Function to calculate the perimeter of a rectangle
float calculatePerimeter(float length, float width) {
    return 2 * (length + width);
}

int main() {
    float length, width;

    // Prompt the user for the length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate and display the area and perimeter
    printf("Area of the rectangle: %.2f\n", calculateArea(length, width));
    printf("Perimeter of the rectangle: %.2f\n", calculatePerimeter(length, width));

    return 0;
}
