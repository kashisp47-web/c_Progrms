 #include<stdio.h>

void inputMatrix(int rows, int cols, int matrix[10][10], char name) {
    printf("Enter elements of Matrix %c (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int matrixA[10][10], matrixB[10][10], result[10][10];

    // Input dimensions
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    // Input matrices
    inputMatrix(rows, cols, matrixA, 'A');
    inputMatrix(rows, cols, matrixB, 'B');

    // Addition
    printf("\nAddition of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    printMatrix(rows, cols, result);

    // Subtraction
    printf("\nSubtraction of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    printMatrix(rows, cols, result);

    // Multiplication (element-wise)
    printf("\nElement-wise Multiplication of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrixA[i][j] * matrixB[i][j];
        }
    }
    printMatrix(rows, cols, result);

    // Division (element-wise)
    printf("\nElement-wise Division of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrixB[i][j] != 0) {
                result[i][j] = matrixA[i][j] / matrixB[i][j];
            } else {
                printf("Error: Division by zero at element [%d][%d]\n", i + 1, j + 1);
                result[i][j] = 0; // Assign 0 to avoid undefined behavior
            }
        }
    }
    printMatrix(rows, cols, result);

    return 0;
}