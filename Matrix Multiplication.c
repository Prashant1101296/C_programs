#include <stdio.h>

// Function to read a matrix from the user
void readMatrix(int matrix[10][10], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int rows1, int cols1, int rows2, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[10][10], int rows, int cols) {
    printf("Resulting Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[10][10], mat2[10][10], result[10][10];
    int rows1, cols1, rows2, cols2;

    // Prompt the user for the dimensions of the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    // Prompt the user for the dimensions of the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    // Check if matrix multiplication is possible
    if (cols1 != rows2) {
        printf("Error: Matrix multiplication is not possible with the given dimensions.\n");
        return 1;
    }

    // Read the first matrix
    readMatrix(mat1, rows1, cols1);

    // Read the second matrix
    readMatrix(mat2, rows2, cols2);

    // Multiply the matrices
    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);

    // Display the resulting matrix
    displayMatrix(result, rows1, cols2);

    return 0;
}
